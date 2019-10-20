//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JETGroupAwareViewController.h"

@class NSString;

@interface JETGuestAccessSharedDevicesIntroViewController : JETGroupAwareViewController
{
    NSString *_SSID;
    NSString *_PSK;
}

@property(copy, nonatomic) NSString *PSK; // @synthesize PSK=_PSK;
@property(copy, nonatomic) NSString *SSID; // @synthesize SSID=_SSID;
- (void).cxx_destruct;
- (void)infoButtonTapped;
- (void)nextButtonTapped;
- (void)closeButtonTapped;
- (id)navigationStyle;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithUserState:(id)arg1 group:(id)arg2;
- (id)initWithUserState:(id)arg1 group:(id)arg2 SSID:(id)arg3 PSK:(id)arg4;

@end

