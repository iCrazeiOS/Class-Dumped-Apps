//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CaptchaHandlerViewDelegate-Protocol.h"
#import "EmailRequiredDelegate-Protocol.h"
#import "RegisterDelegate-Protocol.h"

@class NSString;
@protocol DBLoginControllerProtocol;

@protocol RegisterViewDelegate <EmailRequiredDelegate, RegisterDelegate, CaptchaHandlerViewDelegate>
- (void)loginControllerShortPassword:(id <DBLoginControllerProtocol>)arg1;
- (void)loginControllerEmptyPassword:(id <DBLoginControllerProtocol>)arg1;
- (void)loginControllerEmptyLastName:(id <DBLoginControllerProtocol>)arg1;
- (void)loginControllerEmptyFirstName:(id <DBLoginControllerProtocol>)arg1;
- (void)loginControllerTermsOfService:(id <DBLoginControllerProtocol>)arg1;
- (NSString *)loginControllerLastName:(id <DBLoginControllerProtocol>)arg1;
- (NSString *)loginControllerFirstName:(id <DBLoginControllerProtocol>)arg1;
- (NSString *)loginControllerPassword:(id <DBLoginControllerProtocol>)arg1;

@optional
- (_Bool)loginControllerShowEmailSuggestion:(id <DBLoginControllerProtocol>)arg1;
@end

