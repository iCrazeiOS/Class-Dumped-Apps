//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMPPUnifiedSyncItemBase.h"

@class NSString;

@interface XMPPUnifiedSyncItemBusiness : XMPPUnifiedSyncItemBase
{
    NSString *_certificateSerial;
    long long _profileTag;
}

- (void).cxx_destruct;
@property(nonatomic) long long profileTag; // @synthesize profileTag=_profileTag;
@property(copy, nonatomic) NSString *certificateSerial; // @synthesize certificateSerial=_certificateSerial;
- (id)serialize;

@end

