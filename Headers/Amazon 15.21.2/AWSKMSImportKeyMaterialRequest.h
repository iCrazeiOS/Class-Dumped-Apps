//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWSRequest.h"

@class NSData, NSDate, NSString;

@interface AWSKMSImportKeyMaterialRequest : AWSRequest
{
    NSData *_encryptedKeyMaterial;
    long long _expirationModel;
    NSData *_importToken;
    NSString *_keyId;
    NSDate *_validTo;
}

+ (id)validToJSONTransformer;
+ (id)expirationModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSDate *validTo; // @synthesize validTo=_validTo;
@property(retain, nonatomic) NSString *keyId; // @synthesize keyId=_keyId;
@property(retain, nonatomic) NSData *importToken; // @synthesize importToken=_importToken;
@property(nonatomic) long long expirationModel; // @synthesize expirationModel=_expirationModel;
@property(retain, nonatomic) NSData *encryptedKeyMaterial; // @synthesize encryptedKeyMaterial=_encryptedKeyMaterial;
- (void).cxx_destruct;

@end

