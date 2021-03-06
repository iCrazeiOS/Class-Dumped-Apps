//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIColor;
@protocol SKTAuthenticationDelegate;

@interface SKTSettings : NSObject
{
    _Bool _allowOfflineUsage;
    _Bool _enableAppDelegateSwizzling;
    _Bool _enableUserNotificationCenterDelegateOverride;
    _Bool _requestPushPermissionOnFirstMessage;
    NSString *_appId;
    NSString *_integrationId;
    NSString *_authCode;
    NSString *_region;
    UIColor *_conversationAccentColor;
    UIColor *_userMessageTextColor;
    long long _conversationStatusBarStyle;
    NSArray *_allowedMenuItems;
    unsigned long long _notificationDisplayTime;
    id <SKTAuthenticationDelegate> _authenticationDelegate;
    NSString *_configBaseUrl;
    NSString *_sessionToken;
    NSString *_appUserId;
    NSString *_userId;
    NSString *_jwt;
}

+ (id)settingsWithIntegrationId:(id)arg1 andAuthCode:(id)arg2;
+ (id)settingsWithIntegrationId:(id)arg1;
@property(copy, nonatomic) NSString *jwt; // @synthesize jwt=_jwt;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(copy, nonatomic) NSString *appUserId; // @synthesize appUserId=_appUserId;
@property(copy, nonatomic) NSString *sessionToken; // @synthesize sessionToken=_sessionToken;
@property(copy, nonatomic) NSString *configBaseUrl; // @synthesize configBaseUrl=_configBaseUrl;
@property(retain) id <SKTAuthenticationDelegate> authenticationDelegate; // @synthesize authenticationDelegate=_authenticationDelegate;
@property _Bool requestPushPermissionOnFirstMessage; // @synthesize requestPushPermissionOnFirstMessage=_requestPushPermissionOnFirstMessage;
@property _Bool enableUserNotificationCenterDelegateOverride; // @synthesize enableUserNotificationCenterDelegateOverride=_enableUserNotificationCenterDelegateOverride;
@property _Bool enableAppDelegateSwizzling; // @synthesize enableAppDelegateSwizzling=_enableAppDelegateSwizzling;
@property unsigned long long notificationDisplayTime; // @synthesize notificationDisplayTime=_notificationDisplayTime;
@property _Bool allowOfflineUsage; // @synthesize allowOfflineUsage=_allowOfflineUsage;
@property(retain, nonatomic) NSArray *allowedMenuItems; // @synthesize allowedMenuItems=_allowedMenuItems;
@property long long conversationStatusBarStyle; // @synthesize conversationStatusBarStyle=_conversationStatusBarStyle;
@property(retain, nonatomic) UIColor *userMessageTextColor; // @synthesize userMessageTextColor=_userMessageTextColor;
@property(retain, nonatomic) UIColor *conversationAccentColor; // @synthesize conversationAccentColor=_conversationAccentColor;
@property(copy, nonatomic) NSString *region; // @synthesize region=_region;
@property(copy, nonatomic) NSString *authCode; // @synthesize authCode=_authCode;
@property(copy, nonatomic) NSString *integrationId; // @synthesize integrationId=_integrationId;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void).cxx_destruct;
- (_Bool)isAuthenticatedUser;
- (id)initWithIntegrationId:(id)arg1 andAuthCode:(id)arg2;
- (id)initWithIntegrationId:(id)arg1;
- (id)init;

@end

