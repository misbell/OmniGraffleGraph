//
//  OmniGraffle.h
//  ogg
//
//  Created by michael isbell on 2/6/17.
//  Copyright © 2017 michael prenez-isbell. All rights reserved.
//

#ifndef OmniGraffle_h
#define OmniGraffle_h


#endif /* OmniGraffle_h */

/*
 * OmniGraffle.h
 */

#import <AppKit/AppKit.h>
#import <ScriptingBridge/ScriptingBridge.h>


@class OmniGraffleItem, OmniGraffleApplication, OmniGraffleColor, OmniGraffleDocument, OmniGraffleWindow, OmniGraffleAttributeRun, OmniGraffleCharacter, OmniGraffleParagraph, OmniGraffleText, OmniGraffleTextAttachment, OmniGraffleWord, OmniGraffleCanvas, OmniGraffleColumn, OmniGraffleExportSettings, OmniGraffleGraphic, OmniGraffleGrid, OmniGraffleGroup, OmniGraffleIncomingLine, OmniGraffleLayer, OmniGraffleLayoutInfo, OmniGraffleLine, OmniGraffleOutgoingLine, OmniGrafflePoint, OmniGraffleRow, OmniGraffleSharedLayer, OmniGraffleSolid, OmniGrafflePolygon, OmniGraffleShape, OmniGraffleConnectableShape, OmniGraffleLabel, OmniGraffleSubgraph, OmniGraffleTable, OmniGraffleTableSlice, OmniGraffleUserDataItem, OmniGrafflePrintSettings;

enum OmniGraffleSavo {
    OmniGraffleSavoAsk = 'ask ' /* Ask the user whether or not to save the file. */,
    OmniGraffleSavoNo = 'no  ' /* Do not save the file. */,
    OmniGraffleSavoYes = 'yes ' /* Save the file. */
};
typedef enum OmniGraffleSavo OmniGraffleSavo;

enum OmniGraffleOTta {
    OmniGraffleOTtaCenter = 'OTa1',
    OmniGraffleOTtaJustified = 'OTa3',
    OmniGraffleOTtaLeft = 'OTa0',
    OmniGraffleOTtaNatural = 'OTa4',
    OmniGraffleOTtaRight = 'OTa2'
};
typedef enum OmniGraffleOTta OmniGraffleOTta;

enum OmniGraffleOGLO {
    OmniGraffleOGLOCustom = 'OGX4',
    OmniGraffleOGLOHorizontal = 'OGX0',
    OmniGraffleOGLOParallel = 'OGX2',
    OmniGraffleOGLOPerpendicular = 'OGX3',
    OmniGraffleOGLOVertical = 'OGX1'
};
typedef enum OmniGraffleOGLO OmniGraffleOGLO;

enum OmniGraffleOGta {
    OmniGraffleOGtaClip = 'OGt3',
    OmniGraffleOGtaFull = 'OGt1',
    OmniGraffleOGtaOverflow = 'OGt0',
    OmniGraffleOGtaVerticallyOnly = 'OGt2'
};
typedef enum OmniGraffleOGta OmniGraffleOGta;

enum OmniGraffleOGSJ {
    OmniGraffleOGSJBevel = 'OGbe',
    OmniGraffleOGSJMiter = 'OGmi',
    OmniGraffleOGSJRound = 'OGro'
};
typedef enum OmniGraffleOGSJ OmniGraffleOGSJ;

enum OmniGraffleOGOr {
    OmniGraffleOGOrHorizontally = 'OGO0',
    OmniGraffleOGOrVertically = 'OGO1'
};
typedef enum OmniGraffleOGOr OmniGraffleOGOr;

enum OmniGraffleOGha {
    OmniGraffleOGhaCenter = 'OTa1',
    OmniGraffleOGhaLeft = 'OTa0',
    OmniGraffleOGhaRight = 'OTa2'
};
typedef enum OmniGraffleOGha OmniGraffleOGha;

enum OmniGraffleOGld {
    OmniGraffleOGldBottomToTop = 'OGd3' /* bottom to top */,
    OmniGraffleOGldLeftToRight = 'OGd2' /* left to right */,
    OmniGraffleOGldRightToLeft = 'OGd4' /* right to left */,
    OmniGraffleOGldTopToBottom = 'OGd1' /* top to bottom */
};
typedef enum OmniGraffleOGld OmniGraffleOGld;

enum OmniGraffleOGSC {
    OmniGraffleOGSCButt = 'OGbu',
    OmniGraffleOGSCRound = 'OGro',
    OmniGraffleOGSCSquare = 'OGsq'
};
typedef enum OmniGraffleOGSC OmniGraffleOGSC;

enum OmniGraffleOGFT {
    OmniGraffleOGFTLinearFill = 'OGf2',
    OmniGraffleOGFTNoFill = 'OGf0',
    OmniGraffleOGFTRadialFill = 'OGf3',
    OmniGraffleOGFTSolidFill = 'OGf1'
};
typedef enum OmniGraffleOGFT OmniGraffleOGFT;

enum OmniGraffleOGIS {
    OmniGraffleOGISManual = 'OGI0',
    OmniGraffleOGISStretched = 'OGI1',
    OmniGraffleOGISTiled = 'OGI2'
};
typedef enum OmniGraffleOGIS OmniGraffleOGIS;

enum OmniGraffleOGLT {
    OmniGraffleOGLTBezier = 'OGL4',
    OmniGraffleOGLTCurved = 'OGL2',
    OmniGraffleOGLTOrthogonal = 'OGL3',
    OmniGraffleOGLTStraight = 'OGL1'
};
typedef enum OmniGraffleOGLT OmniGraffleOGLT;

enum OmniGraffleOGlt {
    OmniGraffleOGltCircular = 'OGl3' /* circular */,
    OmniGraffleOGltForceDirected = 'OGl1' /* force-directed */,
    OmniGraffleOGltHierarchical = 'OGl0' /* hierarchical */,
    OmniGraffleOGltRadial = 'OGl2' /* radial */
};
typedef enum OmniGraffleOGlt OmniGraffleOGlt;

enum OmniGraffleOGva {
    OmniGraffleOGvaBottom = 'OGv2',
    OmniGraffleOGvaCenter = 'OTa1',
    OmniGraffleOGvaTop = 'OGv0'
};
typedef enum OmniGraffleOGva OmniGraffleOGva;

enum OmniGraffleOGHT {
    OmniGraffleOGHTBridgeHop = 'OGH7',
    OmniGraffleOGHTGapHop = 'OGH6',
    OmniGraffleOGHTIgnoreHop = 'OGH5',
    OmniGraffleOGHTNoHop = 'OGH0',
    OmniGraffleOGHTRoundHop = 'OGH1',
    OmniGraffleOGHTRoundUnderHop = 'OGH8',
    OmniGraffleOGHTSquareHop = 'OGH2',
    OmniGraffleOGHTSquareUnderHop = 'OGH9',
    OmniGraffleOGHTThreeSideHop = 'OGH4',
    OmniGraffleOGHTThreeSideUnderHop = 'OGHb',
    OmniGraffleOGHTTwoSideHop = 'OGH3',
    OmniGraffleOGHTTwoSideUnderHop = 'OGHa'
};
typedef enum OmniGraffleOGHT OmniGraffleOGHT;

enum OmniGraffleOGea {
    OmniGraffleOGeaAllGraphics = 'OGe1',
    OmniGraffleOGeaCurrentCanvas = 'OGe3',
    OmniGraffleOGeaEntireDocument = 'OGe4',
    OmniGraffleOGeaManualRegion = 'OGe2',
    OmniGraffleOGeaSelectedGraphics = 'OGe0'
};
typedef enum OmniGraffleOGea OmniGraffleOGea;

enum OmniGraffleEnum {
    OmniGraffleEnumStandard = 'lwst' /* Standard PostScript error handling */,
    OmniGraffleEnumDetailed = 'lwdt' /* print a detailed report of PostScript errors */
};
typedef enum OmniGraffleEnum OmniGraffleEnum;

@protocol OmniGraffleGenericMethods

- (void) closeSaving:(OmniGraffleSavo)saving savingIn:(NSURL *)savingIn;  // Close an object.
- (void) delete;  // Delete an object.
- (void) duplicateTo:(SBObject *)to withProperties:(NSDictionary *)withProperties;  // Copy object(s) and put the copies at a new location.
- (BOOL) exists;  // Verify if an object exists.
- (void) moveTo:(SBObject *)to;  // Move object(s) to a new location.
- (void) saveAs:(NSString *)as in:(NSURL *)in_;  // Save an object.
- (void) bold;  // Bold some text
- (void) italicize;  // Italicize some text
- (void) replaceReplacement:(NSString *)replacement ignoreCase:(BOOL)ignoreCase regexp:(NSString *)regexp string:(NSString *)string wholeWords:(BOOL)wholeWords;
- (void) unbold;  // Unbold some text
- (void) underline;  // Underline some text
- (void) unitalicize;  // Unitalicize some text
- (void) ununderline;  // Ununderline some text
- (OmniGraffleGroup *) assembleSubgraph:(BOOL)subgraph tableShape:(NSArray *)tableShape;  // Group graphics
- (OmniGraffleLine *) connectTo:(id)to withProperties:(NSDictionary *)withProperties;  // Draw a line between graphics
- (void) flipOver:(OmniGraffleOGOr)over;  // Flip graphics
- (void) GetURL;  // Opens an OmniGraffle URL.
- (OmniGraffleDocument *) importCategories:(BOOL)categories frameworks:(BOOL)frameworks instanceVariableTypes:(BOOL)instanceVariableTypes instanceVariables:(BOOL)instanceVariables interactionAllowed:(BOOL)interactionAllowed mapping:(NSDictionary *)mapping methodSignatures:(BOOL)methodSignatures methods:(BOOL)methods outlineTemplate:(NSString *)outlineTemplate protocols:(BOOL)protocols;  // Open or import a file. The command can optionally specify settings to use when converting other file types to Graffle documents.
- (void) layout;  // Layout some graphics, or a whole document using the document's Layout Info.
- (void) pageAdjust;  // Change the number of pages to fit the current graphics
- (void) slideBy:(OmniGrafflePoint *)by;  // Slide graphics by a vector amount

@end



/*
 * Standard Suite
 */

// A scriptable object.
@interface OmniGraffleItem : SBObject <OmniGraffleGenericMethods>

@property (copy) NSDictionary *properties;  // All of the object's properties.


@end

// An application's top level scripting object.
@interface OmniGraffleApplication : SBApplication

- (SBElementArray<OmniGraffleDocument *> *) documents;
- (SBElementArray<OmniGraffleWindow *> *) windows;

@property (readonly) BOOL frontmost;  // Is this the frontmost (active) application?
@property (copy, readonly) NSString *name;  // The name of the application.
@property (copy, readonly) NSString *version;  // The version of the application.

- (OmniGraffleDocument *) open:(NSURL *)x;  // Open an object.
- (void) print:(NSURL *)x printDialog:(BOOL)printDialog withProperties:(OmniGrafflePrintSettings *)withProperties;  // Print an object.
- (void) quitSaving:(OmniGraffleSavo)saving;  // Quit an application.

@end

// A color.
@interface OmniGraffleColor : OmniGraffleItem


@end

// A document.
@interface OmniGraffleDocument : OmniGraffleItem

@property (readonly) BOOL modified;  // Has the document been modified since the last save?
@property (copy) NSString *name;  // The document's name.
@property (copy) NSString *path;  // The document's path.


@end

// A window.
@interface OmniGraffleWindow : OmniGraffleItem

@property NSRect bounds;  // The bounding rectangle of the window.
@property (readonly) BOOL closeable;  // Whether the window has a close box.
@property (copy, readonly) OmniGraffleDocument *document;  // The document whose contents are being displayed in the window.
@property (readonly) BOOL floating;  // Whether the window floats.
- (NSInteger) id;  // The unique identifier of the window.
@property NSInteger index;  // The index of the window, ordered front to back.
@property (readonly) BOOL miniaturizable;  // Whether the window can be miniaturized.
@property BOOL miniaturized;  // Whether the window is currently miniaturized.
@property (readonly) BOOL modal;  // Whether the window is the application's current modal window.
@property (copy) NSString *name;  // The full title of the window.
@property (readonly) BOOL resizable;  // Whether the window can be resized.
@property (readonly) BOOL titled;  // Whether the window has a title bar.
@property BOOL visible;  // Whether the window is currently visible.
@property (readonly) BOOL zoomable;  // Whether the window can be zoomed.
@property BOOL zoomed;  // Whether the window is currently zoomed.


@end



/*
 * Text Suite
 */

// This subdivides the text into chunks that all have the same attributes.
@interface OmniGraffleAttributeRun : OmniGraffleItem

- (SBElementArray<OmniGraffleAttributeRun *> *) attributeRuns;
- (SBElementArray<OmniGraffleCharacter *> *) characters;
- (SBElementArray<OmniGraffleParagraph *> *) paragraphs;
- (SBElementArray<OmniGraffleTextAttachment *> *) textAttachments;
- (SBElementArray<OmniGraffleWord *> *) words;

@property (copy) NSColor *color;  // The color of the first character.
@property (copy) NSString *font;  // The name of the font of the first character.
@property NSInteger size;  // The size in points of the first character.


@end

// This subdivides the text into characters.
@interface OmniGraffleCharacter : OmniGraffleItem

- (SBElementArray<OmniGraffleAttributeRun *> *) attributeRuns;
- (SBElementArray<OmniGraffleCharacter *> *) characters;
- (SBElementArray<OmniGraffleParagraph *> *) paragraphs;
- (SBElementArray<OmniGraffleTextAttachment *> *) textAttachments;
- (SBElementArray<OmniGraffleWord *> *) words;

@property (copy) NSColor *color;  // The color of the first character.
@property (copy) NSString *font;  // The name of the font of the first character.
@property NSInteger size;  // The size in points of the first character.


@end

// This subdivides the text into paragraphs.
@interface OmniGraffleParagraph : OmniGraffleItem

- (SBElementArray<OmniGraffleAttributeRun *> *) attributeRuns;
- (SBElementArray<OmniGraffleCharacter *> *) characters;
- (SBElementArray<OmniGraffleParagraph *> *) paragraphs;
- (SBElementArray<OmniGraffleTextAttachment *> *) textAttachments;
- (SBElementArray<OmniGraffleWord *> *) words;

@property (copy) NSColor *color;  // The color of the first character.
@property (copy) NSString *font;  // The name of the font of the first character.
@property NSInteger size;  // The size in points of the first character.


@end

// Rich (styled) text
@interface OmniGraffleText : OmniGraffleItem

- (SBElementArray<OmniGraffleAttributeRun *> *) attributeRuns;
- (SBElementArray<OmniGraffleCharacter *> *) characters;
- (SBElementArray<OmniGraffleParagraph *> *) paragraphs;
- (SBElementArray<OmniGraffleTextAttachment *> *) textAttachments;
- (SBElementArray<OmniGraffleWord *> *) words;

@property (copy) NSColor *color;  // The color of the first character.
@property (copy) NSString *font;  // The name of the font of the first character.
@property NSInteger size;  // The size in points of the first character.


@end

// Represents an inline text attachment.  This class is used mainly for make commands.
@interface OmniGraffleTextAttachment : OmniGraffleText

@property (copy) NSString *fileName;  // The path to the file for the attachment


@end

// This subdivides the text into words.
@interface OmniGraffleWord : OmniGraffleItem

- (SBElementArray<OmniGraffleAttributeRun *> *) attributeRuns;
- (SBElementArray<OmniGraffleCharacter *> *) characters;
- (SBElementArray<OmniGraffleParagraph *> *) paragraphs;
- (SBElementArray<OmniGraffleTextAttachment *> *) textAttachments;
- (SBElementArray<OmniGraffleWord *> *) words;

@property (copy) NSColor *color;  // The color of the first character.
@property (copy) NSString *font;  // The name of the font of the first character.
@property NSInteger size;  // The size in points of the first character.


@end



/*
 * Extended Text Suite
 */

// This subdivides the text into chunks that all have the same attributes.
@interface OmniGraffleAttributeRun (ExtendedTextSuite)

- (SBElementArray<OmniGraffleAttributeRun *> *) attributeRuns;
- (SBElementArray<OmniGraffleCharacter *> *) characters;
- (SBElementArray<OmniGraffleParagraph *> *) paragraphs;
- (SBElementArray<OmniGraffleWord *> *) words;

@property OmniGraffleOTta alignment;  // Alignment of the text.
@property double baselineOffset;  // Number of pixels shifted above or below the normal baseline.
@property (copy) NSColor *color;  // The color of the first character.
@property (copy) NSString *font;  // The name of the font of the first character.
@property NSInteger size;  // The size in points of the first character.
@property NSInteger superscript;  // The superscript level of the text.
@property (copy) NSString *text;  // The actual text content.
@property BOOL underlined;  // Is the first character underlined?

@end

// This subdivides the text into characters.
@interface OmniGraffleCharacter (ExtendedTextSuite)

- (SBElementArray<OmniGraffleAttributeRun *> *) attributeRuns;
- (SBElementArray<OmniGraffleCharacter *> *) characters;
- (SBElementArray<OmniGraffleParagraph *> *) paragraphs;
- (SBElementArray<OmniGraffleWord *> *) words;

@property OmniGraffleOTta alignment;  // Alignment of the text.
@property double baselineOffset;  // Number of pixels shifted above or below the normal baseline.
@property (copy) NSColor *color;  // The color of the first character.
@property (copy) NSString *font;  // The name of the font of the first character.
@property NSInteger size;  // The size in points of the first character.
@property NSInteger superscript;  // The superscript level of the text.
@property (copy) NSString *text;  // The actual text content.
@property BOOL underlined;  // Is the first character underlined?

@end

// This subdivides the text into paragraphs.
@interface OmniGraffleParagraph (ExtendedTextSuite)

- (SBElementArray<OmniGraffleAttributeRun *> *) attributeRuns;
- (SBElementArray<OmniGraffleCharacter *> *) characters;
- (SBElementArray<OmniGraffleParagraph *> *) paragraphs;
- (SBElementArray<OmniGraffleWord *> *) words;

@property OmniGraffleOTta alignment;  // Alignment of the text.
@property double baselineOffset;  // Number of pixels shifted above or below the normal baseline.
@property (copy) NSColor *color;  // The color of the first character.
@property (copy) NSString *font;  // The name of the font of the first character.
@property NSInteger size;  // The size in points of the first character.
@property NSInteger superscript;  // The superscript level of the text.
@property (copy) NSString *text;  // The actual text content.
@property BOOL underlined;  // Is the first character underlined?

@end

// Rich (styled) text
@interface OmniGraffleText (ExtendedTextSuite)

- (SBElementArray<OmniGraffleAttributeRun *> *) attributeRuns;
- (SBElementArray<OmniGraffleCharacter *> *) characters;
- (SBElementArray<OmniGraffleParagraph *> *) paragraphs;
- (SBElementArray<OmniGraffleWord *> *) words;

@property OmniGraffleOTta alignment;  // Alignment of the text.
@property double baselineOffset;  // Number of pixels shifted above or below the normal baseline.
@property (copy) NSColor *color;  // The color of the first character.
@property (copy) NSString *font;  // The name of the font of the first character.
@property NSInteger size;  // The size in points of the first character.
@property NSInteger superscript;  // The superscript level of the text.
@property (copy) NSString *text;  // The actual text content.
@property BOOL underlined;  // Is the first character underlined?

@end

// Represents an inline text attachment.  This class is used mainly for make commands.
@interface OmniGraffleTextAttachment (ExtendedTextSuite)

@property (copy) NSString *fileName;  // The path to the file for the attachment

@end

// This subdivides the text into words.
@interface OmniGraffleWord (ExtendedTextSuite)

- (SBElementArray<OmniGraffleAttributeRun *> *) attributeRuns;
- (SBElementArray<OmniGraffleCharacter *> *) characters;
- (SBElementArray<OmniGraffleParagraph *> *) paragraphs;
- (SBElementArray<OmniGraffleWord *> *) words;

@property OmniGraffleOTta alignment;  // Alignment of the text.
@property double baselineOffset;  // Number of pixels shifted above or below the normal baseline.
@property (copy) NSColor *color;  // The color of the first character.
@property (copy) NSString *font;  // The name of the font of the first character.
@property NSInteger size;  // The size in points of the first character.
@property NSInteger superscript;  // The superscript level of the text.
@property (copy) NSString *text;  // The actual text content.
@property BOOL underlined;  // Is the first character underlined?

@end



/*
 * OmniGraffle
 */

// OmniGraffle
@interface OmniGraffleApplication (OmniGraffle)

- (SBElementArray<OmniGraffleDocument *> *) documents;
- (SBElementArray<OmniGraffleWindow *> *) windows;

@property (copy, readonly) NSArray *availableTemplates;  // A list of document templates that are currently available.
@property (copy, readonly) OmniGraffleExportSettings *currentExportSettings;  // The current export settings
@property (readonly) BOOL demo;  // Is this the demo version of the application
@property (readonly) BOOL professional;  // Whether this application is OmniGraffle or OmniGraffle Professional
- (OmniGraffleGraphic *) objectSelf;  // Graphic clicked to start this script

@end

// A canvas
@interface OmniGraffleCanvas : OmniGraffleItem

- (SBElementArray<OmniGraffleGraphic *> *) graphics;
- (SBElementArray<OmniGraffleGroup *> *) groups;
- (SBElementArray<OmniGraffleLayer *> *) layers;
- (SBElementArray<OmniGraffleLine *> *) lines;
- (SBElementArray<OmniGraffleShape *> *) shapes;
- (SBElementArray<OmniGraffleSolid *> *) solids;
- (SBElementArray<OmniGraffleSubgraph *> *) subgraphs;

@property BOOL adjustsPages;  // Adjust number of pages on the canvas automatically?
@property (copy, readonly) OmniGraffleSolid *canvasBackground;  // Canvas background graphic
@property (copy) OmniGrafflePoint *canvasSize;  // Size of the canvas (page size multiplied by number of pages)
@property OmniGraffleOGha columnAlignment;  // Column alignment
@property double columnSpacing;  // Spacing between graphics in a column
@property (copy) OmniGraffleGrid *grid;  // Settings for the grid
@property NSInteger horizontalPages;  // Horizontal pages
- (NSInteger) id;  // Unique identifier
- (void) setId: (NSInteger) id;
@property (copy) OmniGraffleLayoutInfo *layoutInfo;  // Settings for automatic layout
@property (copy) NSString *name;  // Name of this canvas
@property (copy, readonly) OmniGrafflePoint *pageSize;  // Size of each page
@property OmniGraffleOGva rowAlignment;  // Row alignment
@property double rowSpacing;  // Spacing between graphics in a row
@property NSInteger verticalPages;  // Vertical pages


@end

// A column (vertical slice) of a table.
@interface OmniGraffleColumn : OmniGraffleItem

- (SBElementArray<OmniGraffleGraphic *> *) graphics;

@property (copy) OmniGrafflePoint *size;  // The size of this slice of the table
@property double width;  // The width of this table row or table column


@end

// An OmniGraffle document
@interface OmniGraffleDocument (OmniGraffle)

- (SBElementArray<OmniGraffleCanvas *> *) canvases;

@property BOOL alignmentGuidesEnabled;  // Whether smart alignment guides are enabled
@property BOOL distanceGuidesEnabled;  // Whether smart distance guides are enabled
@property BOOL linksVisible;  // Whether link indicators are visible
@property BOOL magnetsVisible;  // Whether magnets are visible
@property BOOL pageBreaksVisible;  // Whether page breaks are visible
@property BOOL showGuides;  // Whether manually set guides are visible
- (NSString *) template;  // Set this to an available template name, or to the path to a Graffle file to use as a template for this document.
- (void) setTemplate: (NSString *) template;

@end

// Export settings
@interface OmniGraffleExportSettings : OmniGraffleItem

@property OmniGraffleOGea areaType;  // The type of area to be exported
@property double borderAmount;  // The number of pixels of border area to include in exported graphics
@property BOOL copyLinkedImages;  // Whether to copy in any linked images when exporting in graffle format
@property BOOL drawsBackground;  // Draw the background canvas color (if false, leaves the background transparent during export).
@property BOOL exportReadOnly;  // Whether to export in graffle format as a read-only document
@property double exportScale;  // The scale to use during export
@property (copy) NSString *htmlImageType;  // The format to save the image in for HTML image map export
@property BOOL includeBorder;  // Whether or not to include a border area around the exported graphics
@property (copy) OmniGrafflePoint *origin;  // Origin of the manual export region (position of the upper-left corner of the bounding rectangle)
@property double resolution;  // The number of pixels per point in the resulting exported image (1.0 for 72 DPI).
@property (copy) OmniGrafflePoint *size;  // Size of the manual export region (width and height of the bounding rectangle)


@end

// A graphic
@interface OmniGraffleGraphic : OmniGraffleItem

- (SBElementArray<OmniGraffleIncomingLine *> *) incomingLines;
- (SBElementArray<OmniGraffleLine *> *) lines;
- (SBElementArray<OmniGraffleOutgoingLine *> *) outgoingLines;
- (SBElementArray<OmniGraffleUserDataItem *> *) userDataItems;

@property BOOL alignsEdgesToGrid;  // When snapped to the grid does this graphic align its edges to the grid? (The alternative is to align its center to the grid.)
@property BOOL allowsConnections;  // Does this graphic allow connections to it?
@property (copy, readonly) OmniGraffleCanvas *canvas;  // Canvas that this graphic is on
@property double cornerRadius;  // Curvature of corners in the stroke path
@property BOOL doubleStroke;  // Does this graphic have a double-lined stroke?
@property BOOL drawsShadow;  // Does this graphic draw its shadow?
@property BOOL drawsStroke;  // Does this graphic draw its stroke?
@property BOOL flippedHorizontally;  // Is this graphic flipped horizontally?
@property BOOL flippedVertically;  // Is this graphic flipped vertically?
@property (copy, readonly) OmniGraffleGroup *group;  // Which group (if any) this graphic is in
- (NSInteger) id;  // Unique identifier
@property (copy) OmniGraffleCanvas *jump;  // Destination canvas of jump action
@property (copy) OmniGraffleLayer *layer;  // Which layer this graphic is in
@property BOOL locked;  // Is this graphic locked?
@property (copy) OmniGraffleText *notes;  // Notes for this graphic
@property (copy) OmniGrafflePoint *origin;  // Origin of the graphic (position of the upper-left corner of the bounding rectangle)
@property NSInteger rankGroup;  // Rank group assigned to this graphic for hierarchical layout. There are two special groups: the maximum rank group (which is -1) and the minimum rank group (which is -2)
@property (copy) NSString *script;  // Source of attached AppleScript
@property BOOL shadowBeneath;  // Does this graphic draw its shadow immediately beneath itself?
@property (copy) NSColor *shadowColor;  // Color of the shadow
@property double shadowFuzziness;  // The 'fuzziness' of the graphic's shadow
@property (copy) OmniGrafflePoint *shadowVector;  // The direction of the graphic's shadow
@property (copy) OmniGrafflePoint *size;  // Size of the graphic (width and height of the bounding rectangle)
@property OmniGraffleOGSC strokeCap;  // Type of cap at ends of the stroke
@property (copy) NSColor *strokeColor;  // Color of the stroke
@property OmniGraffleOGSJ strokeJoin;  // Type of join between segments of the stroke
@property NSInteger strokePattern;  // Dash pattern of the stroke
@property (copy) NSString *tag;  // Arbitrary string tag attached to this graphic and available for script use, it is stored as part of user data
@property double thickness;  // Thickness of the stroke
@property (copy) NSString *url;  // Web link for this graphic
@property (copy) NSDictionary *userData;  // A dictionary attached to this graphic and available for script use
@property (copy) NSString *userName;  // Name of a graphic


@end

// The grid of a canvas
@interface OmniGraffleGrid : OmniGraffleItem

@property BOOL drawsInFront;  // Does the grid draw in front of all shapes?
@property BOOL major;  // Does the grid have 'major' lines?
@property NSInteger majorSpacing;  // The number of minor grid lines for each major line
@property (copy) NSColor *scriptGridColor;  // Color of the grid
@property (copy) NSColor *scriptMajorGridColor;  // Color of major lines
@property BOOL snaps;  // Do points snap to the grid?
@property double spacing;  // Number of pixels between minor grid lines
@property BOOL visible;  // Is the grid visible?


@end

// A grouped set of graphics
@interface OmniGraffleGroup : OmniGraffleGraphic

- (SBElementArray<OmniGraffleGraphic *> *) graphics;
- (SBElementArray<OmniGraffleGroup *> *) groups;
- (SBElementArray<OmniGraffleLine *> *) lines;
- (SBElementArray<OmniGraffleShape *> *) shapes;
- (SBElementArray<OmniGraffleSolid *> *) solids;
- (SBElementArray<OmniGraffleSubgraph *> *) subgraphs;

@property BOOL connectToGroupOnly;  // Only connect to the group?
@property (copy) NSArray *magnets;  // List of magnet points. (In a square from {-0.5,-0.5} to {0.5,0.5}.)
@property double rotation;  // Rotation of the group in degrees


@end

// Incoming line
@interface OmniGraffleIncomingLine : OmniGraffleGraphic

- (SBElementArray<OmniGraffleLabel *> *) labels;
- (SBElementArray<OmniGrafflePoint *> *) points;

@property (copy) NSArray *bezierPointList;  // A list containing all the points and control points of a bezier type line.
@property (copy) OmniGraffleGraphic *destination;  // Graphic that the head of the line is connected to.
@property NSInteger headMagnet;  // Which magnet of the destination graphic the line attaches to
@property double headScale;  // Scale of line ending on the head of the line (1.0 being the normal size)
@property (copy) NSString *headType;  // Type of line ending on the head of the line
@property OmniGraffleOGHT hopType;  // The behavior when one line crosses over another line.
@property OmniGraffleOGLT lineType;  // Type of the line
@property (copy) NSArray *pointList;  // A list containing all the points of the line.
@property (copy) OmniGraffleGraphic *source;  // Graphic that the tail of the line is connected to.
@property NSInteger tailMagnet;  // Which magnet of the source graphic the line attaches to
@property double tailScale;  // Scale of line ending on the tail of the line (1.0 being the normal size)
@property (copy) NSString *tailType;  // Type of line ending on the tail of the line


@end

// A layer
@interface OmniGraffleLayer : OmniGraffleItem

- (SBElementArray<OmniGraffleGraphic *> *) graphics;
- (SBElementArray<OmniGraffleGroup *> *) groups;
- (SBElementArray<OmniGraffleLine *> *) lines;
- (SBElementArray<OmniGraffleShape *> *) shapes;
- (SBElementArray<OmniGraffleSolid *> *) solids;
- (SBElementArray<OmniGraffleSubgraph *> *) subgraphs;

@property BOOL locked;  // are the layer's graphics locked?
@property BOOL prints;  // do the layer's graphics print?
@property BOOL visible;  // are the layer's graphics visible?


@end

// Automated layout for a canvas
@interface OmniGraffleLayoutInfo : OmniGraffleItem

@property BOOL automaticLayout;  // Enable/disable automatic layout
@property double circularLineLength;  // Circular layout line length (0-108)
@property OmniGraffleOGld direction;  // Hierarchical layout direction
@property double forceDirectedLineLength;  // Default line length in force directed layout (0.125 - 2.75)
@property double forceDirectedSeparation;  // Separation between objects in force directed layout (0-1)
@property double objectSeparation;  // Separation between objects in hieararchical layout (in inches)
@property double radialLineLength;  // Radial layout line length (9-200)
@property double radialSeparation;  // Separation between objects in radial layout (0-1)
@property double rankSeparation;  // Separation between ranks in hieararchical layout (in inches)
@property OmniGraffleOGlt type;  // Type of layout to perform


@end

// A line
@interface OmniGraffleLine : OmniGraffleGraphic

- (SBElementArray<OmniGraffleLabel *> *) labels;
- (SBElementArray<OmniGrafflePoint *> *) points;

@property (copy) NSArray *bezierPointList;  // A list containing all the points and control points of a bezier type line.
@property (copy) OmniGraffleGraphic *destination;  // Graphic that the head of the line is connected to.
@property NSInteger headMagnet;  // Which magnet of the destination graphic the line attaches to
@property double headScale;  // Scale of line ending on the head of the line (1.0 being the normal size)
@property (copy) NSString *headType;  // Type of line ending on the head of the line
@property OmniGraffleOGHT hopType;  // The behavior when one line crosses over another line.
@property OmniGraffleOGLT lineType;  // Type of the line
@property (copy) NSArray *pointList;  // A list containing all the points of the line.
@property (copy) OmniGraffleGraphic *source;  // Graphic that the tail of the line is connected to.
@property NSInteger tailMagnet;  // Which magnet of the source graphic the line attaches to
@property double tailScale;  // Scale of line ending on the tail of the line (1.0 being the normal size)
@property (copy) NSString *tailType;  // Type of line ending on the tail of the line


@end

// Outgoing line
@interface OmniGraffleOutgoingLine : OmniGraffleGraphic

- (SBElementArray<OmniGraffleLabel *> *) labels;
- (SBElementArray<OmniGrafflePoint *> *) points;

@property (copy) NSArray *bezierPointList;  // A list containing all the points and control points of a bezier type line.
@property (copy) OmniGraffleGraphic *destination;  // Graphic that the head of the line is connected to.
@property NSInteger headMagnet;  // Which magnet of the destination graphic the line attaches to
@property double headScale;  // Scale of line ending on the head of the line (1.0 being the normal size)
@property (copy) NSString *headType;  // Type of line ending on the head of the line
@property OmniGraffleOGHT hopType;  // The behavior when one line crosses over another line.
@property OmniGraffleOGLT lineType;  // Type of the line
@property (copy) NSArray *pointList;  // A list containing all the points of the line.
@property (copy) OmniGraffleGraphic *source;  // Graphic that the tail of the line is connected to.
@property NSInteger tailMagnet;  // Which magnet of the source graphic the line attaches to
@property double tailScale;  // Scale of line ending on the tail of the line (1.0 being the normal size)
@property (copy) NSString *tailType;  // Type of line ending on the tail of the line


@end

// A point
@interface OmniGrafflePoint : OmniGraffleItem

@property (readonly) double x;  // x position
@property (readonly) double y;  // y position


@end

// A row (horizontal slice) of a table.
@interface OmniGraffleRow : OmniGraffleItem

- (SBElementArray<OmniGraffleGraphic *> *) graphics;

@property (copy) OmniGrafflePoint *size;  // The size of this slice of the table
@property double width;  // The width of this table row or table column


@end

// A layer that can be shared by multiple canvases
@interface OmniGraffleSharedLayer : OmniGraffleLayer


@end

// Any graphic which is solid instead of a line. Includes polygons and shapes.
@interface OmniGraffleSolid : OmniGraffleGraphic

@property OmniGraffleOGta autosizing;  // Autosizing behavior of the solid around the text
@property (copy) NSColor *blendColor;  // For double linear and radial fills, this is the middle blending color.
@property double blendFraction;  // For double linear and radial fills, this is the position of the blend color from 0 to 1.
@property OmniGraffleOGFT fill;  // The type of fill for this solid
@property (copy) NSColor *fillColor;  // The fill color. For linear and radial gradient fills this is the starting color
@property double gradientAngle;  // Angle of a linear gradient fill.
@property (copy) OmniGrafflePoint *gradientCenter;  // Starting point of a radial gradient fill. (In a square from {-1,-1} to {1,1} so {0,0} is the center of the solid.)
@property (copy) NSColor *gradientColor;  // For linear and radial fills, this is the ending color.
@property (copy) NSString *image;  // Set to a file name to load an image fill.
@property (copy) OmniGrafflePoint *imageOffset;  // For manual image fills, the offset of the image in the solid
@property double imageScale;  // For manual image fills, the scale of the image
@property OmniGraffleOGIS imageSizing;  // How to size and display the image fill.
@property double intercharacterSpacing;  // Extra space (tracking or kerning) between characters of text
@property double interlineSpacing;  // Extra space (leading) between lines of text
@property (copy) OmniGraffleLine *labelConnection;  // If this graphic is a label, the line which it is connected to.
@property double labelOffset;  // If this graphic is a label, the offset from the line which it is connected to.
@property double labelPosition;  // If this graphic is a label, the position along the line which it is connected to.
@property OmniGraffleOGLO labelRotation;  // If this graphic is a label, the type of rotation around the line which it is connected to.
@property (copy) NSArray *magnets;  // List of magnet points. (In a square from {-0.5,-0.5} to {0.5,0.5}.)
@property BOOL relativeTextRotation;  // Whether the rotation of the text is from horizontal, or from the shape's existing rotation
@property double rotation;  // Rotation of the graphic in degrees
@property NSInteger sidePadding;  // Padding at the left and right of the graphic's text space
@property (copy) OmniGraffleText *text;  // The text inside the solid
@property OmniGraffleOGva textPlacement;  // Placement of the text inside the solid
@property (copy) OmniGrafflePoint *textPosition;  // Position of the graphic's text space in proportion to the graphic's size
@property double textRotation;  // Rotation of the graphic's text
@property (copy) OmniGrafflePoint *textSize;  // Size of the graphic's text space in proportion to the graphic's size
@property NSInteger verticalPadding;  // Padding at the top and bottom of the graphic's text space


@end

// This class is leftover from the scripting support in OmniGraffle 3. What were formerly polygons are now all custom shapes.
@interface OmniGrafflePolygon : OmniGraffleSolid

- (SBElementArray<OmniGrafflePoint *> *) points;

@property double arrowWidth;  // The arrow head width (in points) for shapes with "AdjustableArrow" and "AdjustableDoubleArrow" shape names.
@property double endAngle;  // The end angle for shapes with "AdjustableArc" and "AdjustableWedge" shape names.
@property double innerRadius;  // The inner radius (0.05 - 1) for shapes with "AdjustableStar" shape names.
@property (copy) NSString *name;  // name of the shape for a built-in tool ("Rectangle", "Circle", et cetera). A custom shape will be named "Bezier".
@property (copy) NSArray *pointList;  // A list containing all of the control knob points for a custom shape created by the pen tool.
@property double shaftHeight;  // The height of the arrow shaft relative to the height of the shape (0-1) for shapes with "AdjustableArrow" and "AdjustableDoubleArrow" shape names.
@property NSInteger starPoints;  // The number of points for shapes with "AdjustableStar" shape names.
@property double startAngle;  // The start angle for shapes with "AdjustableArc" and "AdjustableWedge" shape names.


@end

// A graphic with a shape
@interface OmniGraffleShape : OmniGraffleSolid

- (SBElementArray<OmniGrafflePoint *> *) points;

@property double arrowWidth;  // The arrow head width (in points) for shapes with "AdjustableArrow" and "AdjustableDoubleArrow" shape names.
@property double endAngle;  // The end angle for shapes with "AdjustableArc" and "AdjustableWedge" shape names.
@property double innerRadius;  // The inner radius (0.05 - 1) for shapes with "AdjustableStar" shape names.
@property (copy) NSString *name;  // name of the shape for a built-in tool ("Rectangle", "Circle", et cetera). A custom shape will be named "Bezier".
@property (copy) NSArray *pointList;  // A list containing all of the control knob points for a custom shape created by the pen tool.
@property double shaftHeight;  // The height of the arrow shaft relative to the height of the shape (0-1) for shapes with "AdjustableArrow" and "AdjustableDoubleArrow" shape names.
@property NSInteger starPoints;  // The number of points for shapes with "AdjustableStar" shape names.
@property double startAngle;  // The start angle for shapes with "AdjustableArc" and "AdjustableWedge" shape names.


@end

// A shape that can be connected between two graphics
@interface OmniGraffleConnectableShape : OmniGraffleShape

@property (copy) OmniGraffleGraphic *destination;  // Graphic that the shape is connected to.
@property (copy) OmniGraffleGraphic *source;  // Graphic that shape is connected from.


@end

// A label on a line
@interface OmniGraffleLabel : OmniGraffleShape


@end

// A grouped set graphics with a background graphic.  Can be collapsed to show as a single graphic.
@interface OmniGraffleSubgraph : OmniGraffleGroup

@property (copy, readonly) OmniGraffleShape *background;  // The background for the subgraph
@property double bottomMargin;
@property BOOL collapsed;  // Is the subgraph collapsed?
@property double leftMargin;
@property double rightMargin;
@property double topMargin;


@end

// A tabular grouping of graphics
@interface OmniGraffleTable : OmniGraffleGroup

- (SBElementArray<OmniGraffleColumn *> *) columns;
- (SBElementArray<OmniGraffleRow *> *) rows;


@end

// A slice (row or column) of a table
@interface OmniGraffleTableSlice : OmniGraffleItem

- (SBElementArray<OmniGraffleGraphic *> *) graphics;

@property (copy) OmniGrafflePoint *size;  // The size of this slice of the table
@property double width;  // The width of this table row or table column


@end

// A user-defined data value
@interface OmniGraffleUserDataItem : OmniGraffleItem

@property (copy, readonly) NSString *name;  // The name of this user-defined data value
@property (copy) NSString *value;  // User-supplied data value


@end

// An OmniGraffle window
@interface OmniGraffleWindow (OmniGraffle)

@property (copy) OmniGraffleCanvas *canvas;  // Current canvas this window is viewing
@property (copy) NSArray *selection;  // Selected graphics
@property double zoom;  // Current zoom (magnification) setting for this document window

@end



/*
 * Type Definitions
 */

@interface OmniGrafflePrintSettings : SBObject <OmniGraffleGenericMethods>

@property NSInteger copies;  // the number of copies of a document to be printed
@property BOOL collating;  // Should printed copies be collated?
@property NSInteger startingPage;  // the first page of the document to be printed
@property NSInteger endingPage;  // the last page of the document to be printed
@property NSInteger pagesAcross;  // number of logical pages laid across a physical page
@property NSInteger pagesDown;  // number of logical pages laid out down a physical page
@property (copy) NSDate *requestedPrintTime;  // the time at which the desktop printer should print the document
@property OmniGraffleEnum errorHandling;  // how errors are handled
@property (copy) NSString *faxNumber;  // for fax number
@property (copy) NSString *targetPrinter;  // for target printer


@end

