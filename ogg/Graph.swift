//
//  Graph.swift
//  ogg
//
//  Created by michael isbell on 2/4/17.
//  Copyright © 2017 michael prenez-isbell. All rights reserved.
//

import Foundation

class Graph {
    private(set) var nodes = [Node]()
    private var identifiersToNodes = [Int: Node]()
    
    func addNode(node: Node) {
        identifiersToNodes[node.identifier] = node
        nodes += [node]
    }
    
    func nodeByIdentifier(identifier: Int) -> Node? {
        return identifiersToNodes[identifier]
    }
    
    func addEdgeFromNode(source: Node, toNode destination: Node) {
        source.addNeighbor(node: destination)
    }
}

extension Graph {
    var reversedGraph: Graph {
        let newGraph = Graph()
        
        // Copy nodes.
        for node in nodes {
            newGraph.addNode(node: Node(identifier: node.identifier))
        }
        
        // Reverse edges.
        for node in nodes {
            let sourceNode = newGraph.nodeByIdentifier(identifier: node.identifier)!
            
            for destinationNodeOld in node.neighbors {
                let destinationNode = newGraph.nodeByIdentifier(identifier: destinationNodeOld.identifier)!
                
                newGraph.addEdgeFromNode(source: destinationNode, toNode: sourceNode)
            }
        }
        
        return newGraph
    }
    
    func findDecreasingPostOrder(graph: Graph) -> [Node] {
        var postOrdering = [Node]()
        var nodesToVisited = [Node: Bool]()
        
        for node in graph.nodes {
            nodesToVisited[node] = false
        }
        
        let startNode = graph.nodes.first!
        findOrdering(node: startNode, nodesToVisited: &nodesToVisited, postOrdering: &postOrdering)
        
        return postOrdering
    }
    
    private func findOrdering(node: Node, nodesToVisited: inout [Node: Bool], postOrdering: inout [Node]) {
        nodesToVisited[node] = true
        
        for neighbor in node.neighbors {
            if !nodesToVisited[neighbor]! {
                findOrdering(node: neighbor, nodesToVisited: &nodesToVisited, postOrdering: &postOrdering)
            }
        }
        
        postOrdering.append(node)
    }
    
    func findAllReachableNodesFromNode(node: Node, nodesToVisited: inout [Node: Bool]) -> [Node] {
        nodesToVisited[node] = true
        
        var allNodes = [node]
        
        for neighbor in node.neighbors {
            if !nodesToVisited[neighbor]! {
                allNodes += findAllReachableNodesFromNode(node: neighbor, nodesToVisited: &nodesToVisited)
            }
        }
        
        return allNodes
    }
    
    func findSCCs() -> [[Node]] {
        let postOrdering = findDecreasingPostOrder(graph: reversedGraph)
        var nodesToVisited = [Node: Bool]()
        var SCCs = [[Node]]()
        
        for node in postOrdering {
            nodesToVisited[node] = false
        }
        
        for node in postOrdering {
            if !nodesToVisited[node]! {
                SCCs += [findAllReachableNodesFromNode(node: node, nodesToVisited: &nodesToVisited)]
            }
        }
        
        return SCCs
    }
}
