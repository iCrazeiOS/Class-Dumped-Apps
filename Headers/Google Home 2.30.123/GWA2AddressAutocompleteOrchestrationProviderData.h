//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWA2AutocompleteOptionProviderData.h"

@class ORCH2AddressAutocompleteOrchestrationProviderData;

@interface GWA2AddressAutocompleteOrchestrationProviderData : GWA2AutocompleteOptionProviderData
{
    ORCH2AddressAutocompleteOrchestrationProviderData *_addressProviderExtension;
}

- (void).cxx_destruct;
- (unsigned long long)suggestionFieldIDFromFieldID:(int)arg1;
- (id)autocompleteOptionFromPostalAddress:(id)arg1;
- (id)optionsFromAddresses:(id)arg1;
- (void)fetchOptionsMatchingInput:(id)arg1 fieldID:(int)arg2 callback:(CDUnknownBlockType)arg3;
- (id)providerAttributes;
- (id)initWithData:(id)arg1 pageContext:(id)arg2;

@end

