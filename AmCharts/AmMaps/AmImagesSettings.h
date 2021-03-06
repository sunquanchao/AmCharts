// 
//  AmImagesSettings.h
//  AmCharts
// 
//  Created by Andrew on 4/28/14.
//  Copyright (c) 2014 Chimp Studios. All rights reserved.
// 

#import <Foundation/Foundation.h>


@interface AmImagesSettings : NSObject

/**
 Opacity of the image.
 */
@property(strong) NSNumber * alpha;

/**
 Text which is displayed in a roll-over balloon. You can use the following tags: [[title]], [[description]], [[value]] and [[percent]].
 */
@property(strong) NSString * balloonText;

/**
 Specifies if the image's center should be placed in the provided coordinates. If false, top-left corner will be at provided coordinates.
 */
@property(assign) BOOL centered;

/**
 Color of image. This will affect only predefined images (with "type" property set) and images with svgPath set. This property won't affect bitmap images and loaded SVG images.
 */
@property(strong) NSString * color;

/**
 Height of a description window.
 */
@property(strong) NSNumber * descriptionWindowHeight;

/**
 Width of a description window.
 */
@property(strong) NSNumber * descriptionWindowWidth;

/**
 X position of a description window.
 */
@property(strong) NSNumber * descriptionWindowX;

/**
 Y position of a description window.
 */
@property(strong) NSNumber * descriptionWindowY;

/**
 Label color.
 */
@property(strong) NSString * labelColor;

/**
 Font size of a label.
 */
@property(strong) NSNumber * labelFontSize;

/**
 Position of the label. Allowed values are: left, right, top, bottom and middle.
 */
@property(strong) NSString * labelPosition;

/**
 Label roll-over color. 
 */
@property(strong) NSString * labelRollOverColor;

/**
 Opacity of image outline. This will affect only predefined images (with "type" property set) and images with svgPath set. This property won't affect bitmap images and loaded SVG images.
 */
@property(strong) NSNumber * outlineAlpha;

/**
 Color of image outline. This will affect only predefined images (with "type" property set) and images with svgPath set. This property won't affect bitmap images and loaded SVG images.
 */
@property(strong) NSString * outlineColor;

/**
 Thickness of image outline. This will affect only predefined images (with "type" property set) and images with svgPath set. This property won't affect bitmap images and loaded SVG images.
 */
@property(strong) NSNumber * outlineThickness;

/**
 Color of image when hovered. This will affect only predefined images (with "type" property set) and images with svgPath set. This property won't affect bitmap images and loaded SVG images.
 */
@property(strong) NSString * rollOverColor;

/**
 Scale of the image when hovered. Use value like 1.5 - 2 to enlarge image when user rolls-over it.
 */
@property(strong) NSNumber * rollOverScale;

/**
 Label color in case the image is selected.
 */
@property(strong) NSString * selectedLabelColor;

/**
 Scale of the image if it is selected. Use value like 1.5 - 2 to enlarge selected image.
 */
@property(strong) NSNumber * selectedScale;

- (NSDictionary *)dictionaryRepresentation;
- (NSString *)javascriptRepresentation;

@end