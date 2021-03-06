//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@interface IOsGestureRecognizerTouchParser : UIGestureRecognizer
{
    weak_ptr_b050ed9e m_inputModel;
    struct vector<UITouch *, std::__1::allocator<UITouch *>> m_touches;
    unsigned long long m_activeTouches;
    struct CGSize _desktopSize;
}

@property(nonatomic) struct CGSize desktopSize; // @synthesize desktopSize=_desktopSize;
@property(nonatomic) weak_ptr_b050ed9e inputModel; // @synthesize inputModel=m_inputModel;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)canPreventGestureRecognizer:(id)arg1;
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)reset;
- (void)cancel;
- (id)init;
- (void)handleTouches;

@end

