//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PMKUtilities/NSCoding-Protocol.h>

@class NSDictionary, NSString;

@interface _TtC12PMKUtilities14ExperimentData : NSObject <NSCoding>
{
    // Error parsing type: , name: identifier
    // Error parsing type: , name: name
    // Error parsing type: , name: segment
    // Error parsing type: , name: metadata
}

- (void).cxx_destruct;
- (id)init;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(nonatomic, readonly) _Bool isTestSegment;
@property(nonatomic, readonly) NSDictionary *metadata;
@property(nonatomic, readonly) NSString *segmentLetter;
@property(nonatomic, readonly) NSString *segment;

@end

