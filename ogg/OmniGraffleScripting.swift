//
//  OmniGraffleScripting.swift
//  ogg
//
//  Created by michael isbell on 2/4/17.
//  Copyright © 2017 michael prenez-isbell. All rights reserved.
//

import Cocoa
import ScriptingBridge

@objc protocol SBObjectProtocol: NSObjectProtocol {}

@objc protocol SBApplicationProtocol: SBObjectProtocol {}

@objc protocol OmniGraffle6Item: SBObjectProtocol {}


@objc protocol OmniGraffle6Graphic: OmniGraffle6Item {
    @objc optional var id: Int { get }
}

@objc protocol OmniGraffle6Text: OmniGraffle6Item {
    @objc optional var id: Int { get }
    

}



@objc protocol OmniGraffle6Solid: OmniGraffle6Graphic {
   // @objc optional func setFillColor(color: NSColor)
    @objc optional var fillColor: NSColor { get set }
            @objc optional var text: String { get set }

}

@objc protocol OmniGraffle6Shape: OmniGraffle6Solid {}

@objc protocol OmniGraffle6Line: OmniGraffle6Graphic {
    @objc optional var source: OmniGraffle6Graphic { get set }
    @objc optional var destination: OmniGraffle6Graphic { get set }
}

@objc protocol OmniGraffle6Canvas: SBObjectProtocol {
    @objc optional var name: String { get set }
    @objc optional func shapes() -> SBElementArray
    @objc optional func lines() -> SBElementArray
}

@objc protocol OmniGraffle6Document: SBObjectProtocol {
    @objc optional func canvases() -> SBElementArray
}

@objc protocol OmniGraffle6Application: SBObjectProtocol {
    @objc optional func documents() -> SBElementArray
}

extension SBObject: OmniGraffle6Text {}
extension SBObject: OmniGraffle6Item {}
extension SBObject: OmniGraffle6Graphic {}
extension SBObject: OmniGraffle6Solid {}
extension SBObject: OmniGraffle6Shape {}
extension SBObject: OmniGraffle6Line {}
extension SBObject: OmniGraffle6Canvas {}
extension SBObject: OmniGraffle6Document {}
extension SBApplication: OmniGraffle6Application {}

