//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class GOALSDebugLogger, UITextView;

@interface GOALSDebugLoggerViewController : UIViewController
{
    UITextView *_logView;
    GOALSDebugLogger *_debugLogger;
}

@property(retain, nonatomic) GOALSDebugLogger *debugLogger; // @synthesize debugLogger=_debugLogger;
@property(retain, nonatomic) UITextView *logView; // @synthesize logView=_logView;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

