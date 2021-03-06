//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GOOBaseContentView.h>

#import "GDKPersonActivityCVODelegate-Protocol.h"

@class GDKPersonActivityCVO, GDKPersonActivityView, NSString;

@interface GDKPersonActivityCV : GOOBaseContentView <GDKPersonActivityCVODelegate>
{
    GDKPersonActivityView *_personActivityView;
}

+ (double)heightForObject:(id)arg1 constrainedToWidth:(double)arg2;
+ (_Bool)requiresConstraintBasedLayout;
- (void).cxx_destruct;
@property(retain, nonatomic) GDKPersonActivityView *personActivityView; // @synthesize personActivityView=_personActivityView;
- (void)prepareForReuse;
- (void)viewObjectWasUpdated:(id)arg1;
- (void)updateViewWithObject:(id)arg1;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) GDKPersonActivityCVO *object; // @dynamic object;
@property(readonly) Class superclass;

@end

