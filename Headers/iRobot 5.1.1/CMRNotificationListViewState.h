//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface CMRNotificationListViewState : NSObject
{
    _Bool _isOptIn;
    _Bool _isNewContentDismissed;
    NSString *_configuration;
    NSString *_listHeaderTitleId;
    NSString *_listHeaderIconId;
    NSString *_navigationActionIconId;
    NSArray *_readNotificationItems;
    NSArray *_unreadNotificationItems;
    NSString *_initialListDescriptionId;
    NSString *_emptyListDescriptionId;
    NSString *_optInDescriptionId;
    NSString *_optInNotificationActionTitleId;
    NSString *_navigationActionAccessibilityText;
}

+ (id)NotificationListViewStateWithConfiguration:(id)arg1 listHeaderTitleId:(id)arg2 listHeaderIconId:(id)arg3 navigationActionIconId:(id)arg4 readNotificationItems:(id)arg5 unreadNotificationItems:(id)arg6 initialListDescriptionId:(id)arg7 emptyListDescriptionId:(id)arg8 isOptIn:(_Bool)arg9 optInDescriptionId:(id)arg10 optInNotificationActionTitleId:(id)arg11 isNewContentDismissed:(_Bool)arg12 navigationActionAccessibilityText:(id)arg13;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *navigationActionAccessibilityText; // @synthesize navigationActionAccessibilityText=_navigationActionAccessibilityText;
@property(readonly, nonatomic) _Bool isNewContentDismissed; // @synthesize isNewContentDismissed=_isNewContentDismissed;
@property(readonly, nonatomic) NSString *optInNotificationActionTitleId; // @synthesize optInNotificationActionTitleId=_optInNotificationActionTitleId;
@property(readonly, nonatomic) NSString *optInDescriptionId; // @synthesize optInDescriptionId=_optInDescriptionId;
@property(readonly, nonatomic) _Bool isOptIn; // @synthesize isOptIn=_isOptIn;
@property(readonly, nonatomic) NSString *emptyListDescriptionId; // @synthesize emptyListDescriptionId=_emptyListDescriptionId;
@property(readonly, nonatomic) NSString *initialListDescriptionId; // @synthesize initialListDescriptionId=_initialListDescriptionId;
@property(readonly, nonatomic) NSArray *unreadNotificationItems; // @synthesize unreadNotificationItems=_unreadNotificationItems;
@property(readonly, nonatomic) NSArray *readNotificationItems; // @synthesize readNotificationItems=_readNotificationItems;
@property(readonly, nonatomic) NSString *navigationActionIconId; // @synthesize navigationActionIconId=_navigationActionIconId;
@property(readonly, nonatomic) NSString *listHeaderIconId; // @synthesize listHeaderIconId=_listHeaderIconId;
@property(readonly, nonatomic) NSString *listHeaderTitleId; // @synthesize listHeaderTitleId=_listHeaderTitleId;
@property(readonly, nonatomic) NSString *configuration; // @synthesize configuration=_configuration;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithConfiguration:(id)arg1 listHeaderTitleId:(id)arg2 listHeaderIconId:(id)arg3 navigationActionIconId:(id)arg4 readNotificationItems:(id)arg5 unreadNotificationItems:(id)arg6 initialListDescriptionId:(id)arg7 emptyListDescriptionId:(id)arg8 isOptIn:(_Bool)arg9 optInDescriptionId:(id)arg10 optInNotificationActionTitleId:(id)arg11 isNewContentDismissed:(_Bool)arg12 navigationActionAccessibilityText:(id)arg13;

@end

