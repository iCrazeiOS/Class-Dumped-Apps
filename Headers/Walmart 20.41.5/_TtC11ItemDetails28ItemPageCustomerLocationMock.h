//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class NSArray, NSString;
@protocol _TtP16WalmartIOSShared15DeliveryAddress_, _TtP16WalmartIOSShared5Store_, _TtP16WalmartIOSShared8Location_;

@interface _TtC11ItemDetails28ItemPageCustomerLocationMock : _TtCs12_SwiftObject
{
    // Error parsing type: , name: customerLocation
    // Error parsing type: , name: deliveryAddress
    // Error parsing type: , name: accessPointPreferenceId
    // Error parsing type: , name: storeNameAccessPointId
    // Error parsing type: , name: shouldPromptLocationEntry
    // Error parsing type: , name: shouldPromptLocationEntryIgnoringFrequency
    // Error parsing type: , name: rankedStores
    // Error parsing type: , name: hubStore
    // Error parsing type: , name: preferredStore
    // Error parsing type: , name: isDefaultData
    // Error parsing type: , name: isOGEnabled
}

@property(nonatomic) _Bool isOGEnabled; // @synthesize isOGEnabled;
@property(nonatomic) _Bool isDefaultData; // @synthesize isDefaultData;
@property(nonatomic, retain) id <_TtP16WalmartIOSShared5Store_> preferredStore; // @synthesize preferredStore;
@property(nonatomic, retain) id <_TtP16WalmartIOSShared5Store_> hubStore; // @synthesize hubStore;
@property(nonatomic, readonly) NSArray *pickUpLocations;
@property(nonatomic, readonly) NSArray *walmartStores;
@property(nonatomic, readonly) NSArray *stores;
@property(nonatomic, copy) NSArray *rankedStores;
@property(nonatomic) _Bool shouldPromptLocationEntryIgnoringFrequency; // @synthesize shouldPromptLocationEntryIgnoringFrequency;
@property(nonatomic) _Bool shouldPromptLocationEntry; // @synthesize shouldPromptLocationEntry;
@property(nonatomic, copy) NSString *storeNameAccessPointId;
@property(nonatomic, copy) NSString *accessPointPreferenceId;
@property(nonatomic, retain) id <_TtP16WalmartIOSShared15DeliveryAddress_> deliveryAddress; // @synthesize deliveryAddress;
@property(nonatomic, retain) id <_TtP16WalmartIOSShared8Location_> customerLocation; // @synthesize customerLocation;

@end

