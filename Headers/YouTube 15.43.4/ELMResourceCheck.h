//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface ELMResourceCheck : NSObject
{
    NSString *_buildLabel;
    NSArray *_resourceStatuses;
}

+ (id)resourceCheckWithBuildLabel:(id)arg1 resourceStatuses:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *resourceStatuses; // @synthesize resourceStatuses=_resourceStatuses;
@property(readonly, nonatomic) NSString *buildLabel; // @synthesize buildLabel=_buildLabel;
- (id)description;
- (id)initWithBuildLabel:(id)arg1 resourceStatuses:(id)arg2;

@end

