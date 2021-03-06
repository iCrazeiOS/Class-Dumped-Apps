//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSString;

@interface PinContext : NSObject
{
    _Bool _hasRecap;
    NSError *_error;
    NSString *_pin;
    CDUnknownBlockType _pinValidationCallback;
    CDUnknownBlockType _recapPinValidationCallback;
    CDUnknownBlockType _willShowRecapHandler;
}

@property(readonly, nonatomic) CDUnknownBlockType willShowRecapHandler; // @synthesize willShowRecapHandler=_willShowRecapHandler;
@property(readonly, nonatomic) CDUnknownBlockType recapPinValidationCallback; // @synthesize recapPinValidationCallback=_recapPinValidationCallback;
@property(readonly, nonatomic) CDUnknownBlockType pinValidationCallback; // @synthesize pinValidationCallback=_pinValidationCallback;
@property(readonly) NSString *pin; // @synthesize pin=_pin;
@property(nonatomic) _Bool hasRecap; // @synthesize hasRecap=_hasRecap;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (id)initWithPin:(id)arg1 pinValidationCallback:(CDUnknownBlockType)arg2 recapPinValidationCallback:(CDUnknownBlockType)arg3 willShowRecapHandler:(CDUnknownBlockType)arg4;
- (void)clearPin;

@end

