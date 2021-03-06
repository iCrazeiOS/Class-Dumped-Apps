//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <drive_extension_framework/MDCButtonScheming-Protocol.h>

@protocol MDCColorScheming, MDCShapeScheming, MDCTypographyScheming;

@interface MDCButtonScheme : NSObject <MDCButtonScheming>
{
    id <MDCColorScheming> _colorScheme;
    id <MDCShapeScheming> _shapeScheme;
    id <MDCTypographyScheming> _typographyScheme;
    double _cornerRadius;
    double _minimumHeight;
}

- (void).cxx_destruct;
@property(nonatomic) double minimumHeight; // @synthesize minimumHeight=_minimumHeight;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) id <MDCTypographyScheming> typographyScheme; // @synthesize typographyScheme=_typographyScheme;
@property(retain, nonatomic) id <MDCShapeScheming> shapeScheme; // @synthesize shapeScheme=_shapeScheme;
@property(retain, nonatomic) id <MDCColorScheming> colorScheme; // @synthesize colorScheme=_colorScheme;
- (id)init;

@end

