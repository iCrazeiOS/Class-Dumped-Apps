//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelegramUI/PSCoding-Protocol.h>

@class NSData, NSDictionary, NSString;

@interface TGUser : NSObject <PSCoding>
{
    _Bool _contactIdInitialized;
    _Bool _formattedPhoneInitialized;
    struct _opaque_pthread_mutex_t _TG_SYNCHRONIZED__cachedValues;
    int _uid;
    int _sex;
    int _contactId;
    int _kind;
    int _botKind;
    int _botInfoVersion;
    int _flags;
    NSString *_phoneNumber;
    long long _phoneNumberHash;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_userName;
    NSString *_phonebookFirstName;
    NSString *_phonebookLastName;
    NSString *_photoUrlSmall;
    NSString *_photoUrlMedium;
    NSString *_photoUrlBig;
    NSData *_photoFileReferenceSmall;
    NSData *_photoFileReferenceBig;
    NSString *_photoFullUrlSmall;
    NSString *_photoFullUrlBig;
    NSString *_restrictionReason;
    NSString *_contextBotPlaceholder;
    NSDictionary *_customProperties;
    NSString *_about;
    NSString *_cachedFormattedNumber;
    CDStruct_0fa87f8c _presence;
}

+ (CDStruct_0fa87f8c)approximatePresenceFromPresence:(CDStruct_0fa87f8c)arg1 currentTime:(double)arg2;
@property(retain, nonatomic) NSString *cachedFormattedNumber; // @synthesize cachedFormattedNumber=_cachedFormattedNumber;
@property(retain, nonatomic) NSString *about; // @synthesize about=_about;
@property(retain, nonatomic) NSDictionary *customProperties; // @synthesize customProperties=_customProperties;
@property(retain, nonatomic) NSString *contextBotPlaceholder; // @synthesize contextBotPlaceholder=_contextBotPlaceholder;
@property(retain, nonatomic) NSString *restrictionReason; // @synthesize restrictionReason=_restrictionReason;
@property(nonatomic) int flags; // @synthesize flags=_flags;
@property(nonatomic) int botInfoVersion; // @synthesize botInfoVersion=_botInfoVersion;
@property(nonatomic) int botKind; // @synthesize botKind=_botKind;
@property(nonatomic) int kind; // @synthesize kind=_kind;
@property(nonatomic) int contactId; // @synthesize contactId=_contactId;
@property(nonatomic) CDStruct_0fa87f8c presence; // @synthesize presence=_presence;
@property(retain, nonatomic) NSString *photoFullUrlBig; // @synthesize photoFullUrlBig=_photoFullUrlBig;
@property(retain, nonatomic) NSString *photoFullUrlSmall; // @synthesize photoFullUrlSmall=_photoFullUrlSmall;
@property(retain, nonatomic) NSData *photoFileReferenceBig; // @synthesize photoFileReferenceBig=_photoFileReferenceBig;
@property(retain, nonatomic) NSData *photoFileReferenceSmall; // @synthesize photoFileReferenceSmall=_photoFileReferenceSmall;
@property(retain, nonatomic) NSString *photoUrlBig; // @synthesize photoUrlBig=_photoUrlBig;
@property(retain, nonatomic) NSString *photoUrlMedium; // @synthesize photoUrlMedium=_photoUrlMedium;
@property(retain, nonatomic) NSString *photoUrlSmall; // @synthesize photoUrlSmall=_photoUrlSmall;
@property(nonatomic) int sex; // @synthesize sex=_sex;
@property(retain, nonatomic) NSString *phonebookLastName; // @synthesize phonebookLastName=_phonebookLastName;
@property(retain, nonatomic) NSString *phonebookFirstName; // @synthesize phonebookFirstName=_phonebookFirstName;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(retain, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(nonatomic) long long phoneNumberHash; // @synthesize phoneNumberHash=_phoneNumberHash;
@property(retain, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(nonatomic) int uid; // @synthesize uid=_uid;
- (void).cxx_destruct;
@property(nonatomic) _Bool botInlineGeo;
@property(nonatomic) _Bool minimalRepresentation;
@property(nonatomic) _Bool hasExplicitContent;
@property(nonatomic) _Bool isContextBot;
@property(nonatomic) _Bool isVerified;
- (int)differenceFromUser:(id)arg1;
- (_Bool)isEqualToUser:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)formattedPhoneNumber;
- (id)compactName;
- (id)displayFirstName;
- (id)displayRealName;
- (id)displayName;
- (id)realLastName;
- (id)realFirstName;
@property(readonly, nonatomic) _Bool isDeleted;
@property(readonly, nonatomic) _Bool isBot;
- (_Bool)hasAnyName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithKeyValueCoder:(id)arg1;
- (id)initWithKeyValueCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

