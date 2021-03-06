//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface LPKeyboardState : NSObject
{
    _Bool _visible;
    struct CGRect _frameBegin;
    struct CGRect _frameEnd;
}

+ (id)sharedInstance;
+ (void)load;
@property(readonly, nonatomic) struct CGRect frameEnd; // @synthesize frameEnd=_frameEnd;
@property(readonly, nonatomic) struct CGRect frameBegin; // @synthesize frameBegin=_frameBegin;
@property(readonly, nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)dealloc;
- (id)init;

@end

