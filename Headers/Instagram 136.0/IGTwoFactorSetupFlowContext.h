//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGTwoFactorStatusInfo, NSString;

@interface IGTwoFactorSetupFlowContext : NSObject
{
    _Bool _isAuthAppSetUpManually;
    NSString *_confirmingPhoneNumber;
    NSString *_entryPoint;
    IGTwoFactorStatusInfo *_statusInfo;
}

@property(nonatomic) _Bool isAuthAppSetUpManually; // @synthesize isAuthAppSetUpManually=_isAuthAppSetUpManually;
@property(readonly, nonatomic) IGTwoFactorStatusInfo *statusInfo; // @synthesize statusInfo=_statusInfo;
@property(readonly, nonatomic) NSString *entryPoint; // @synthesize entryPoint=_entryPoint;
@property(retain, nonatomic) NSString *confirmingPhoneNumber; // @synthesize confirmingPhoneNumber=_confirmingPhoneNumber;
- (void).cxx_destruct;
- (id)initWithStatusInfo:(id)arg1 entryPoint:(id)arg2;

@end

