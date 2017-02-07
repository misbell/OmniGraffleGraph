//
//  main.swift
//  ogg
//
//  Created by michael isbell on 2/4/17.
//  Copyright © 2017 michael prenez-isbell. All rights reserved.
//

import Cocoa
import ScriptingBridge

let app: OmniGraffle6Application = SBApplication(bundleIdentifier: "com.omnigroup.OmniGraffle6")!
let documents = app.documents!()
let firstDoc = documents.firstObject! as! OmniGraffle6Document
let canvas = firstDoc.canvases!().firstObject as! OmniGraffle6Canvas
print(canvas.name!)


var graph = buildGraphForCanvas(canvas: canvas)
var IDsToShapes = mapIDsToShapes(canvas: canvas)
var SCCs = graph.findSCCs()


let colors = [NSColor.yellow, NSColor.red, NSColor.orange, NSColor.blue]
var colorIndex = 0

for SCC in SCCs {
    colorIndex = colorIndex + 1
    let color = colors[colorIndex]
    
    for node in SCC {
        var x: OmniGraffle6Solid = IDsToShapes[node.identifier]!
        //x.setFillColor!(color: NSColor.yellow)
        
        // text also is giving me issues. 
        //print (x.text)
        // x.text = "ok new"
        
        
    
    }
}
