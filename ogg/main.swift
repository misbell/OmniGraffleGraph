//
//  main.swift
//  ogg
//
//  Created by michael isbell on 2/4/17.
//  Copyright © 2017 michael prenez-isbell. All rights reserved.
//

import Cocoa
import ScriptingBridge

//You can view it in the Script Editor application with File->Open Dictionary. It's still challenging to figure it out, but it should at least be comprehensive.

let app: OmniGraffleApplication = SBApplication(bundleIdentifier: "com.omnigroup.OmniGraffle7")!
let documents = app.documents!()
let firstDoc = documents.firstObject! as! OmniGraffleDocument
let canvas = firstDoc.canvases!().firstObject as! OmniGraffleCanvas
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
        
        // I separated this into two lines..
        var x: OmniGraffleSolid = IDsToShapes[node.identifier]!
        
        var y = 1
        
        
       // x.setFillColor!(color: NSColor.yellow) // doesn't compile
        //x.fillColor = NSColor.yellow // x is immutable, can't assign
        
        // text also is giving me issues. 
        //print (x.text)
        // x.text = "ok new"
        
        
    
    }
}
