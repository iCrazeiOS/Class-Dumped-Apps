//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WalmartCore/_TtC17FinancialServices25DynamicFormViewController.h>

@class NSString;

@interface _TtC17FinancialServices25DynamicFormViewController (FinancialServices)
- (void)backPressed;
- (void)didCancelStoreChooser;
- (void)didTouchCancelButton;
- (void)didTouchDoneButton;
- (void)sectionController:(id)arg1 pushViewController:(id)arg2 animated:(_Bool)arg3;
- (void)sectionController:(id)arg1 presentViewController:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)sectionController:(id)arg1 popViewController:(_Bool)arg2;
- (void)sectionController:(id)arg1 popToRootViewControllerAnimated:(_Bool)arg2;
- (void)sectionController:(id)arg1 dismissViewControllerAnimated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentAmountEditVC:(id)arg1 viewController:(id)arg2;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (id)customAttributesFor:(long long)arg1;
@property(nonatomic, readonly) _Bool manuallyTrackButtonTap;
@property(nonatomic, readonly) _Bool manuallyTrackPageView;
@property(nonatomic, readonly) NSString *analyticsPageName;
- (void)showUpdateAlert;
- (void)showImageProcessingAlert;
- (void)presentCameraVC:(id)arg1 cameraViewController:(id)arg2;
- (void)presentImagePicker:(id)arg1 imagePickerController:(id)arg2;
@end

