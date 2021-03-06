//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface GBTKeyboardHelper : NSObject
{
    NSDictionary *_listenersDictionary;
    _Bool _keyboardFullyShown;
    _Bool _keyboardVisible;
    struct CGRect _keyboardFrame;
}

+ (id)sharedHelper;
- (void).cxx_destruct;
- (id)description;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardFrameDidChange:(id)arg1;
- (void)keyboardFrameWillChange:(id)arg1;
- (double)keyboardHeightWithPresentingView:(id)arg1;
- (struct CGRect)keyboardFrameForView:(id)arg1;
@property(readonly, nonatomic) struct CGRect keyboardFrame; // @synthesize keyboardFrame=_keyboardFrame;
@property(readonly, nonatomic, getter=isKeyboardVisible) _Bool keyboardVisible; // @synthesize keyboardVisible=_keyboardVisible;
@property(readonly, nonatomic, getter=isKeyboardFullyShown) _Bool keyboardFullyShown; // @synthesize keyboardFullyShown=_keyboardFullyShown;
- (void)stopObserving;
- (void)startObserving;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1 notificationName:(id)arg2;
- (id)init;

@end

