//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@protocol FBSDKContainerViewControllerDelegate;

@interface FBSDKContainerViewController : UIViewController
{
    id <FBSDKContainerViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <FBSDKContainerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)displayChildController:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;

@end

