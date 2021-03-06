//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class GRWMessageGeneralPromptUI, NSArray;

@interface GRWMessagePermissionPromptUI : NSObject <NSSecureCoding>
{
    GRWMessageGeneralPromptUI *_generalPromptUI;
    NSArray *_permissionTypes;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *permissionTypes; // @synthesize permissionTypes=_permissionTypes;
@property(readonly, nonatomic) GRWMessageGeneralPromptUI *generalPromptUI; // @synthesize generalPromptUI=_generalPromptUI;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToPermissionPromptUI:(id)arg1;
- (_Bool)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPermissionTypes:(id)arg1 generalPromptUI:(id)arg2;
- (id)initWithProto:(id)arg1;

@end

