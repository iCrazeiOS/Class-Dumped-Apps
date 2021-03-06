//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DYNDialog-Protocol.h"

@class GILClientVisualElement, NSArray, NSString;

@interface DYNAlertDialog : NSObject <DYNDialog>
{
    NSString *_title;
    NSString *_message;
    NSString *_accessibilityIdentifier;
    NSArray *_actions;
    GILClientVisualElement *_dialogVisualElement;
    GILClientVisualElement *_parentVisualElement;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GILClientVisualElement *parentVisualElement; // @synthesize parentVisualElement=_parentVisualElement;
@property(readonly, nonatomic) GILClientVisualElement *dialogVisualElement; // @synthesize dialogVisualElement=_dialogVisualElement;
@property(copy, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(retain, nonatomic) NSString *accessibilityIdentifier; // @synthesize accessibilityIdentifier=_accessibilityIdentifier;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)setDialogVisualElement:(id)arg1 withParentVisualElement:(id)arg2;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 buttonText:(id)arg3 action:(CDUnknownBlockType)arg4;
- (id)initWithQuestion:(id)arg1 subtitle:(id)arg2 buttonText:(id)arg3 buttonAccessibilityId:(id)arg4 actionBlock:(CDUnknownBlockType)arg5;
- (id)initWithErrorText:(id)arg1;
- (id)initWithTitle:(id)arg1 message:(id)arg2 accessibilityIdentifier:(id)arg3 actions:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

