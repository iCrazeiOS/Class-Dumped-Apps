//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class IBGSurveyCache, IBGSurveyModel, NSString;
@protocol IBGSurveyViewControllerDelegate;

@protocol IBGSurveyUIPresenter
- (void)errorShowingWithMessage:(NSString *)arg1;
- (void)dismissSurvey;
- (void)showSurveyViewControllerWithSurvey:(IBGSurveyModel *)arg1 withDelegate:(id <IBGSurveyViewControllerDelegate>)arg2 appStoreURL:(NSString *)arg3 surveyCache:(IBGSurveyCache *)arg4;
@end

