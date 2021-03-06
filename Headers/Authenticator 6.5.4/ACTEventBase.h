//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ACTEventProperties, NSMutableDictionary, NSString;

@interface ACTEventBase : NSObject
{
    unsigned long long sequence;
    NSMutableDictionary *semanticContextFields;
    NSMutableDictionary *semanticContextFieldsPii;
    NSMutableDictionary *semanticContextFieldsCustomerContent;
    NSMutableDictionary *customContextFields;
    NSMutableDictionary *boolCustomContextFields;
    NSMutableDictionary *dateCustomContextFields;
    NSMutableDictionary *longCustomContextFields;
    NSMutableDictionary *doubleCustomContextFields;
    NSMutableDictionary *UUIDCustomContextFields;
    NSMutableDictionary *customContextFieldsPii;
    NSMutableDictionary *customContextFieldsCustomerContent;
    unsigned short _retryCount;
    int _messageType;
    NSString *_tenantToken;
    NSString *_eventType;
    NSString *_myInitId;
    NSString *_recordId;
    ACTEventProperties *_customEventProperties;
    long long _rowId;
}

+ (id)backupCopy:(id)arg1 withNewEventName:(id)arg2 withNewPriority:(int)arg3;
+ (id)backupCopy:(id)arg1;
@property unsigned short retryCount; // @synthesize retryCount=_retryCount;
@property long long rowId; // @synthesize rowId=_rowId;
@property(retain, nonatomic) ACTEventProperties *customEventProperties; // @synthesize customEventProperties=_customEventProperties;
@property int messageType; // @synthesize messageType=_messageType;
@property(retain) NSString *recordId; // @synthesize recordId=_recordId;
@property(retain, nonatomic) NSString *myInitId; // @synthesize myInitId=_myInitId;
@property(retain, nonatomic) NSString *eventType; // @synthesize eventType=_eventType;
@property(retain, nonatomic) NSString *tenantToken; // @synthesize tenantToken=_tenantToken;
- (void).cxx_destruct;
- (void)populateEventContextFieldsCustomerContent:(id)arg1;
- (void)populateEventContextFieldsPii:(id)arg1;
- (void)populateUUIDContextFields:(id)arg1;
- (void)populateDoubleContextFields:(id)arg1;
- (void)populateLongContextFields:(id)arg1;
- (void)populateDateContextFields:(id)arg1;
- (void)populateBoolContextFields:(id)arg1;
- (void)populateEventContextFields:(id)arg1;
- (void)populateEventPropertiesCustomerContent:(id)arg1;
- (void)populateEventPropertiesPii:(id)arg1;
- (void)populateUUIDEventProperties:(id)arg1;
- (void)populateDoubleEventProperties:(id)arg1;
- (void)populateLongEventProperties:(id)arg1;
- (void)populateDateEventProperties:(id)arg1;
- (void)populateBoolEventProperties:(id)arg1;
- (void)populateEventProperties:(id)arg1;
- (void)populateSemanticProperties:(id)arg1;
- (void)insertNonEmptyValueFrom:(id)arg1 toProperties:(id)arg2;
- (void)injectCustomContextFieldsCustomerContent:(id)arg1;
- (void)injectCustomContextFieldsPii:(id)arg1;
- (void)injectUUIDCustomContextFields:(id)arg1;
- (void)injectDoubleCustomContextFields:(id)arg1;
- (void)injectLongCustomContextFields:(id)arg1;
- (void)injectDateCustomContextFields:(id)arg1;
- (void)injectBoolCustomContextFields:(id)arg1;
- (void)injectCustomContextFields:(id)arg1;
- (void)injectSemanticContextFieldsCustomerContent:(id)arg1;
- (void)injectSemanticContextFieldsPii:(id)arg1;
- (void)injectSemanticContextFields:(id)arg1;
- (id)eventPropertyValueCustomerContentTags;
- (id)eventPropertyValuePiiTags;
- (unsigned long long)sequence;
- (void)setSequence:(unsigned long long)arg1;
@property(readonly, nonatomic) long long timestamp;
@property(readonly, nonatomic) int eventPriority;
@property(readonly, copy, nonatomic) NSString *eventName;
- (void)dealloc;
- (id)initWithClientMessageType:(int)arg1 eventType:(id)arg2 eventProperties:(id)arg3;
- (void)copyPrivateVariablesFrom:(id)arg1;
- (id)privateCustomContextFieldsCustomerContent;
- (id)privateCustomContextFieldsPii;
- (id)privateUUIDCustomContextFields;
- (id)privateDoubleCustomContextFields;
- (id)privateLongCustomContextFields;
- (id)privateDateCustomContextFields;
- (id)privateBoolCustomContextFields;
- (id)privateCustomContextFields;
- (id)privateSemanticContextFieldsCustomerContent;
- (id)privateSemanticContextFieldsPii;
- (id)privateSemanticContextFields;
- (unsigned long long)privateSequence;

@end

