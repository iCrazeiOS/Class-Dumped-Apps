//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface FBSDKCodelessParameterComponent : NSObject
{
    NSString *_name;
    NSString *_value;
    NSArray *_path;
    NSString *_pathType;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *pathType; // @synthesize pathType=_pathType;
@property(readonly, nonatomic) NSArray *path; // @synthesize path=_path;
@property(readonly, copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)initWithJSON:(id)arg1;

@end

