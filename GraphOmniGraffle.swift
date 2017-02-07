//
//  GraphOmniGraffle.swift
//  ogg
//
//  Created by michael isbell on 2/4/17.
//  Copyright © 2017 michael prenez-isbell. All rights reserved.
//

import Foundation


func buildGraphForCanvas(canvas: OmniGraffleCanvas) -> Graph {
    let graph = Graph()
    
    for shape_ in canvas.shapes!() {
        let shape = shape_ as! OmniGraffleShape
        graph.addNode(node: Node(identifier: shape.id!))
    }
    
    for line_ in canvas.lines!() {
        let line = line_ as! OmniGraffleLine
        
        let sourceIdentifier = (line.source! as! OmniGraffleShape).id!
        let destinationIdentifier = (line.destination! as! OmniGraffleShape).id!
        
        let sourceNode = graph.nodeByIdentifier(identifier: sourceIdentifier)!
        let destinationNode = graph.nodeByIdentifier(identifier: destinationIdentifier)!
        
        graph.addEdgeFromNode(source: sourceNode, toNode: destinationNode)
    }
    
    return graph
}

func mapIDsToShapes(canvas: OmniGraffleCanvas) -> [Int: OmniGraffleShape] {
    var map = [Int: OmniGraffleShape]()
    
    for shape in canvas.shapes!() {
        map[(shape as AnyObject).id!] = shape as? OmniGraffleShape
    }
    
    return map
}
