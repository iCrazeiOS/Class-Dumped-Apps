//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleAppsBigtopSyncClientImplTasksFactoryTaskImpl.h"

@class ComGoogleAppsBigtopServicesCommonUtilsCachedValue;

@interface ComGoogleAppsBigtopSyncClientImplTasksFactoryStandaloneTaskImpl : ComGoogleAppsBigtopSyncClientImplTasksFactoryTaskImpl
{
    _Bool initiallySnoozed_;
    ComGoogleAppsBigtopServicesCommonUtilsCachedValue *taskSource_;
    ComGoogleAppsBigtopServicesCommonUtilsCachedValue *iconImageCachedValue_;
}

- (void)dealloc;
- (_Bool)createSnoozed;
- (id)generateSummaryString;
- (id)getNotificationTitle;
- (_Bool)hasNotificationTitle;
- (id)getDetailedViewType;
- (id)getIcon;
- (_Bool)hasIcon;
- (id)getTaskSource;
- (id)getSaveMetricTag;
- (id)addTrashToTransactionWithComGoogleAppsBigtopSyncClientImplItemsTransactionApiTransaction:(id)arg1;
- (id)trashWithJBTCallback:(id)arg1 withJBTSpan:(id)arg2;
- (_Bool)canSetRecurrence;
- (id)getType;

@end

