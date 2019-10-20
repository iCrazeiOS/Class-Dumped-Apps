//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GHKBaseEscalationOption, GOOTextContentViewObject;

@interface GHKEscalationOptionObject : NSObject
{
    GOOTextContentViewObject *_contentViewObject;
    GHKBaseEscalationOption *_baseOption;
}

+ (id)detailTextFromOption:(id)arg1;
+ (id)waitTimeFromOption:(id)arg1;
+ (id)iconColorFromOption:(id)arg1;
+ (id)imageFromOption:(id)arg1;
+ (id)titleFromType:(int)arg1;
@property(retain, nonatomic) GHKBaseEscalationOption *baseOption; // @synthesize baseOption=_baseOption;
@property(retain, nonatomic) GOOTextContentViewObject *contentViewObject; // @synthesize contentViewObject=_contentViewObject;
- (void).cxx_destruct;
- (id)initWithBaseOption:(id)arg1;

@end

