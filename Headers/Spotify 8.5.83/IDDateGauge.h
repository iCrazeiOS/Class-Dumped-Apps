//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IDGauge.h"

@class NSDate;
@protocol IDDateGaugeDelegate;

@interface IDDateGauge : IDGauge
{
    id <IDDateGaugeDelegate> _delegate;
    NSDate *_date;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) __weak id <IDDateGaugeDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleAction:(id)arg1 info:(id)arg2;

@end

