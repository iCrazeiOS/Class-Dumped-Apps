//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HUBSerializable-Protocol.h"

@class NSArray, NSDate, NSDictionary, NSString;
@protocol HUBComponentModel, HUBViewModelBuilder;

@protocol HUBViewModel <HUBSerializable>
- (id <HUBViewModelBuilder>)createBuilder;
@property(nonatomic, readonly) NSDate *buildDate;
@property(nonatomic, readonly) NSDictionary *customData;
@property(nonatomic, readonly) NSArray *overlayComponentModels;
@property(nonatomic, readonly) NSArray *bodyComponentModels;
@property(nonatomic, readonly) id <HUBComponentModel> headerComponentModel;
@property(nonatomic, readonly) NSString *navigationBarTitle;
@property(nonatomic, readonly) NSString *identifier;
@end

