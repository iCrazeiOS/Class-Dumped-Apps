//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray, NSString;
@protocol Optional, SRDSSearchFastTrackTextModel><Optional, SRDSSearchStyledTextModel><Optional;

@interface SRDSSearchAvailabilityModel : JSONModel
{
    NSArray<SRDSSearchStyledTextModel><Optional> *_offerMinimumOrderQuantityMessage;
    NSString<Optional> *_generalAvailability;
    NSString<Optional> *_secondaryAvailability;
    NSString<Optional> *_lowStockMessage;
    NSArray<SRDSSearchFastTrackTextModel><Optional> *_fastTrack;
}

@property(retain, nonatomic) NSArray<SRDSSearchFastTrackTextModel><Optional> *fastTrack; // @synthesize fastTrack=_fastTrack;
@property(retain, nonatomic) NSString<Optional> *lowStockMessage; // @synthesize lowStockMessage=_lowStockMessage;
@property(retain, nonatomic) NSString<Optional> *secondaryAvailability; // @synthesize secondaryAvailability=_secondaryAvailability;
@property(retain, nonatomic) NSString<Optional> *generalAvailability; // @synthesize generalAvailability=_generalAvailability;
@property(retain, nonatomic) NSArray<SRDSSearchStyledTextModel><Optional> *offerMinimumOrderQuantityMessage; // @synthesize offerMinimumOrderQuantityMessage=_offerMinimumOrderQuantityMessage;
- (void).cxx_destruct;

@end

