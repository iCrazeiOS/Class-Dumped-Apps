//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAAutoMigratingStorage.h>

#import <Core/WAPersistentRequestManagerRegistering-Protocol.h>

@class NSObject, NSString, WAContactSpotlightIndexer, WANameDirectory, WASpotlightManager;
@protocol OS_dispatch_queue, WAContactsStorageDelegate;

@interface WAContactsStorage : WAAutoMigratingStorage <WAPersistentRequestManagerRegistering>
{
    WAContactSpotlightIndexer *_spotlightIndexer;
    NSString *_eTag;
    _Bool _needsRefreshContacts;
    _Bool _needsRefreshStatus;
    _Bool _contactsAvailable;
    NSObject<OS_dispatch_queue> *_contactsSerialQueue;
    id <WAContactsStorageDelegate> _delegate;
    WANameDirectory *_nameDirectory;
    WASpotlightManager *_spotlightManager;
}

+ (id)predicateForFetchingInvitableContacts;
+ (id)predicateForFetchingSidelistContacts;
+ (id)predicateForFetchingWhatsAppableContacts;
+ (id)predicateForFetchingAddressBookContacts;
+ (id)primaryDatabaseContextConcurrencyType;
+ (long long)internalFetchAuthorizationStatus;
+ (_Bool)contactsAccessRequestNecessary;
+ (_Bool)contactsAccessAuthorized;
+ (void)initialize;
+ (id)variantsForPhoneNumber:(id)arg1;
+ (id)variantsWithCountryCodeExpansionForPhoneNumber:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) WASpotlightManager *spotlightManager; // @synthesize spotlightManager=_spotlightManager;
@property(retain, nonatomic) WANameDirectory *nameDirectory; // @synthesize nameDirectory=_nameDirectory;
@property(nonatomic) __weak id <WAContactsStorageDelegate> delegate; // @synthesize delegate=_delegate;
- (id)personsForJIDs:(id)arg1 profilePictures:(id)arg2;
- (void)registerHandlersForPersistentRequestManager:(id)arg1;
- (id)sharedObjectKeyForPersistentRequestManager:(id)arg1;
- (id)addressBookContactArraysForJIDs:(id)arg1 inContext:(id)arg2 filteringPredicate:(id)arg3;
- (id)contactsWithIdentifiers:(id)arg1 inContext:(id)arg2;
- (id)normalizedPhoneNumbersForContactWithIdentifier:(id)arg1;
- (void)fetchAboutTextForContact:(id)arg1;
- (id)aboutTextForJID:(id)arg1;
- (id)anyABContactForJID:(id)arg1;
- (id)allWhatsAppableJIDs;
- (void)allWhatsAppableContactsWithCompletion:(CDUnknownBlockType)arg1;
- (id)allWhatsAppableContactsInContext:(id)arg1;
- (id)allWhatsAppableContacts;
- (void)performSeriallyOnQueue:(id)arg1 block:(CDUnknownBlockType)arg2;
- (_Bool)needsDatabaseMigrationForMetadata:(id)arg1;
- (id)managedObjectContext;
@property(readonly, nonatomic) _Bool contactsAvailable;
- (id)initWithXMPPConnection:(id)arg1;
- (id)initWithStoreURL:(id)arg1 xmppConnection:(id)arg2;
- (id)inNetworkJIDsForPhoneNumbers:(id)arg1;
- (id)jidForPhoneNumberVariants:(id)arg1;
- (id)inNetworkContactsForJIDs:(id)arg1;
- (id)contactsForJIDs:(id)arg1 includeUnknownContacts:(_Bool)arg2;
- (id)addressBookContactArraysForNameDirectoryByJIDs:(id)arg1 inContext:(id)arg2;
- (id)addressBookContactsForNameDirectoryByJIDs:(id)arg1 inContext:(id)arg2;
- (id)contactForJID:(id)arg1;
- (void)fetchAllInvitableContactsWithEmailAddresses:(CDUnknownBlockType)arg1;
- (id)emailsFromContactStoreForContacts:(id)arg1;
- (void)fetchAllInvitableContactsWithPhoneNumbers:(CDUnknownBlockType)arg1;
- (id)allContactsWithOptions:(long long)arg1;
- (id)allContactsSectionsForJIDs:(id)arg1;
- (id)allContactsInSectionsWithOptions:(long long)arg1;
- (id)jidsToExcludeForOptions:(long long)arg1;
- (id)allOutOfNetworkContacts;
- (id)contactsMapMatchingOrExcludingJIDs:(_Bool)arg1 inSet:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

