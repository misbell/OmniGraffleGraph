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

@objc protocol OmniGraffleItem: SBObjectProtocol {}


@objc protocol OmniGraffleGraphic: OmniGraffleItem {
    @objc optional var id: Int { get }
}

@objc protocol OmniGraffleText: OmniGraffleItem {
    @objc optional var id: Int { get }
    

}



@objc protocol OmniGraffleSolid: OmniGraffleGraphic {
   // @objc optional func setFillColor(color: NSColor)
    @objc optional var fillColor: NSColor { get set }
            @objc optional var text: String { get set }

}

@objc protocol OmniGraffleShape: OmniGraffleSolid {}

@objc protocol OmniGraffleLine: OmniGraffleGraphic {
    @objc optional var source: OmniGraffleGraphic { get set }
    @objc optional var destination: OmniGraffleGraphic { get set }
}

@objc protocol OmniGraffleCanvas: SBObjectProtocol {
    @objc optional var name: String { get set }
    @objc optional func shapes() -> SBElementArray
    @objc optional func lines() -> SBElementArray
}

@objc protocol OmniGraffleDocument: SBObjectProtocol {
    @objc optional func canvases() -> SBElementArray
}

@objc protocol OmniGraffleApplication: SBObjectProtocol {
    @objc optional func documents() -> SBElementArray
}

extension SBObject: OmniGraffleText {}
extension SBObject: OmniGraffleItem {}
extension SBObject: OmniGraffleGraphic {}
extension SBObject: OmniGraffleSolid {}
extension SBObject: OmniGraffleShape {}
extension SBObject: OmniGraffleLine {}
extension SBObject: OmniGraffleCanvas {}
extension SBObject: OmniGraffleDocument {}
extension SBApplication: OmniGraffleApplication {}


