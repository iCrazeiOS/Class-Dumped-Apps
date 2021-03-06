//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IESLiveAlertFactory-Protocol.h"

@class NSString;
@protocol IESLiveSettings;

@interface AWELiveAlertFactoryImpl : NSObject <IESLiveAlertFactory>
{
    id <IESLiveSettings> _settings;
}

@property(retain, nonatomic) id <IESLiveSettings> settings; // @synthesize settings=_settings;
- (void).cxx_destruct;
- (long long)styleConversionFrom:(long long)arg1;
- (void)showActionSheetWithTitle:(id)arg1 buttonTitles:(id)arg2 styles:(id)arg3 blocks:(id)arg4;
- (void)_showNoWiFiToast;
- (_Bool)_isToday:(id)arg1;
- (void)dismissCurrentAlert:(id)arg1;
- (id)showAlertWithTitle:(id)arg1 AttributedDescription:(id)arg2 buttonTitles:(id)arg3 buttonBlocks:(id)arg4 configuration:(id)arg5;
- (id)showAlertWithTitle:(id)arg1 AttributedDescription:(id)arg2 buttonTitles:(id)arg3 buttonBlocks:(id)arg4 isButtonAlignedVertically:(_Bool)arg5;
- (id)showAlertWithTitle:(id)arg1 description:(id)arg2 buttonTitles:(id)arg3 buttonBlocks:(id)arg4;
- (id)showAlertWithTitle:(id)arg1 AttributedDescription:(id)arg2 actionButtonTitle:(id)arg3 cancelButtonTitle:(id)arg4 actionBlock:(CDUnknownBlockType)arg5 cancelBlock:(CDUnknownBlockType)arg6;
- (id)showAlertWithTitle:(id)arg1 description:(id)arg2 headerImage:(id)arg3 actionButtonTitle:(id)arg4 cancelButtonTitle:(id)arg5 actionBlock:(CDUnknownBlockType)arg6 cancelBlock:(CDUnknownBlockType)arg7;
- (id)showAlertWithTitle:(id)arg1 description:(id)arg2 actionButtonTitle:(id)arg3 cancelButtonTitle:(id)arg4 actionBlock:(CDUnknownBlockType)arg5 cancelBlock:(CDUnknownBlockType)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

