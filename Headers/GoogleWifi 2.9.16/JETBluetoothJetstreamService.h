//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CBService, JETBluetoothSetupAPI;

@interface JETBluetoothJetstreamService : NSObject
{
    _Bool _discoveredCharacteristics;
    CBService *_service;
    JETBluetoothSetupAPI *_API;
}

@property(retain, nonatomic) JETBluetoothSetupAPI *API; // @synthesize API=_API;
@property(nonatomic) _Bool discoveredCharacteristics; // @synthesize discoveredCharacteristics=_discoveredCharacteristics;
@property(retain, nonatomic) CBService *service; // @synthesize service=_service;
- (void).cxx_destruct;
- (_Bool)isDoneQuerying;

@end

