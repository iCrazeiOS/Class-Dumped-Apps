//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MDCPathCommand.h"

@interface MDCPathQuadCurveCommand : MDCPathCommand
{
    struct CGPoint _control;
    struct CGPoint _end;
}

@property(nonatomic) struct CGPoint end; // @synthesize end=_end;
@property(nonatomic) struct CGPoint control; // @synthesize control=_control;
- (void)applyToCGPath:(struct CGPath *)arg1 transform:(struct CGAffineTransform *)arg2;

@end

