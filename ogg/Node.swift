//
//  Node.swift
//  ogg
//
//  Created by michael isbell on 2/4/17.
//  Copyright © 2017 michael prenez-isbell. All rights reserved.
//

import Foundation


class Node: Hashable {
    private(set) var identifier: Int
    private(set) var neighbors = [Node]()
    
    init(identifier: Int) {
        self.identifier = identifier
    }
    
    func addNeighbor(node: Node) {
        neighbors += [node]
    }
    
    var hashValue: Int {
        return identifier
    }
}

func ==(lhs: Node, rhs: Node) -> Bool {
    return lhs.identifier == rhs.identifier
}

