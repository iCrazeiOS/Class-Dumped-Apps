//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AWEAwemeModel, AWEShareContext, NSArray, NSString, UIViewController;
@protocol AWEShareIMPanelExtension, AWESharePanel, AWESharePublishExtension, AWEShareTask;

@protocol AWEShareAweme <NSObject>
- (void)fetchFeedShareGuideLabelAndIconWithAweme:(AWEAwemeModel *)arg1 lastType:(NSString *)arg2 completion:(void (^)(NSString *, UIImage *))arg3;
- (UIViewController<AWESharePanel> *)showPanelWithAweme:(AWEAwemeModel *)arg1 configurationHandler:(void (^)(id <AWEShareConfiguration>))arg2 onViewController:(UIViewController *)arg3;
- (AWEShareContext *)contextWithAweme:(AWEAwemeModel *)arg1;

@optional
+ (NSString *)sharingTitleForPublishedAwemeForPlatform:(long long)arg1;
- (NSArray *)newUserShareGuideIconsWithAweme:(AWEAwemeModel *)arg1;
- (void)showAfterDownloadPanelWithAweme:(AWEAwemeModel *)arg1 usingContext:(void (^)(AWEShareContext *))arg2 onViewController:(UIViewController *)arg3;
- (void)showGIFPanelWithContext:(AWEShareContext *)arg1 onViewController:(UIViewController *)arg2;
- (void)showAfterDownloadPanelWithContext:(AWEShareContext *)arg1 onViewController:(UIViewController *)arg2;
- (id <AWESharePublishExtension>)sharePublishExtensionWithAweme:(AWEAwemeModel *)arg1 configurationHandler:(void (^)(id <AWEShareConfiguration>))arg2;
- (id <AWEShareTask>)sharePublishedAweme:(AWEAwemeModel *)arg1 usingContext:(void (^)(AWEShareContext *))arg2 toPlatform:(long long)arg3;
- (UIViewController<AWESharePanel> *)showMorePanelWithAweme:(AWEAwemeModel *)arg1 configurationHandler:(void (^)(id <AWEShareConfiguration>))arg2 onViewController:(UIViewController *)arg3;
- (id <AWEShareIMPanelExtension>)shareIMPanelExtensionWithAweme:(AWEAwemeModel *)arg1 configurationHandler:(void (^)(id <AWEShareConfiguration>))arg2;
@end

