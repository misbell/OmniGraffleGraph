//
//  GraphOmniGraffle.swift
//  ogg
//
//  Created by michael isbell on 2/4/17.
//  Copyright © 2017 michael prenez-isbell. All rights reserved.
//

import Foundation


func buildGraphForCanvas(canvas: OmniGraffle6Canvas) -> Graph {
    let graph = Graph()
    
    for shape_ in canvas.shapes!() {
        let shape = shape_ as! OmniGraffle6Shape
        graph.addNode(node: Node(identifier: shape.id!))
    }
    
    for line_ in canvas.lines!() {
        let line = line_ as! OmniGraffle6Line
        
        let sourceIdentifier = (line.source! as! OmniGraffle6Shape).id!
        let destinationIdentifier = (line.destination! as! OmniGraffle6Shape).id!
        
        let sourceNode = graph.nodeByIdentifier(identifier: sourceIdentifier)!
        let destinationNode = graph.nodeByIdentifier(identifier: destinationIdentifier)!
        
        graph.addEdgeFromNode(source: sourceNode, toNode: destinationNode)
    }
    
    return graph
}

func mapIDsToShapes(canvas: OmniGraffle6Canvas) -> [Int: OmniGraffle6Shape] {
    var map = [Int: OmniGraffle6Shape]()
    
    for shape in canvas.shapes!() {
        map[(shape as AnyObject).id!] = shape as? OmniGraffle6Shape
    }
    
    return map
}
