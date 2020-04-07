//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "INSEventMessageNode-Protocol.h"

@class NSNumber, NSString;

@interface INSEventMessageNodeWrapper : NSObject <INSEventMessageNode>
{
    NSNumber *_authenticated;
    NSString *_name;
    long long _sequenceNumber;
}

+ (id)wrapperWithEnvelope:(id)arg1 authenticated:(_Bool)arg2;
@property(readonly, nonatomic) long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSNumber *authenticated; // @synthesize authenticated=_authenticated;
- (void).cxx_destruct;
- (id)initWithEnvelope:(id)arg1 authenticated:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

