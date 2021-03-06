//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChromeInternal/OGLAccountMenuPresenter-Protocol.h>

@class NSString, OGLAccountMenuSessionState;
@protocol OGLAccount, OGLAccountMenuTransition;

@protocol OGLAccountMenuSession <OGLAccountMenuPresenter>
@property(retain, nonatomic) id <OGLAccountMenuTransition> transition;
@property(readonly, nonatomic, getter=isActive) _Bool active;
@property(readonly, copy, nonatomic) NSString *identifier;
- (void)startManageAccountsOnDeviceWithState:(OGLAccountMenuSessionState *)arg1 completionHandler:(void (^)(OGLAccountMenuSessionCompletionHandlerParams *))arg2;
- (void)startWithPrimaryAccount:(id <OGLAccount>)arg1 completionHandler:(void (^)(id <OGLAccount>))arg2;
- (void)stopAnimated:(_Bool)arg1;
- (void)startWithState:(OGLAccountMenuSessionState *)arg1 completionHandler:(void (^)(OGLAccountMenuSessionCompletionHandlerParams *))arg2;
@end

