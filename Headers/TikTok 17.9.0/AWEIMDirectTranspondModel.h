//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class AWEIMShareModel, AWEIMUser, NSString;

@interface AWEIMDirectTranspondModel : NSObject <NSCopying>
{
    _Bool _isSelected;
    _Bool _isSent;
    long long _modelType;
    AWEIMShareModel *_shareModel;
    AWEIMUser *_userModel;
    NSString *_indexTitle;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isSent; // @synthesize isSent=_isSent;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(copy, nonatomic) NSString *indexTitle; // @synthesize indexTitle=_indexTitle;
@property(retain, nonatomic) AWEIMUser *userModel; // @synthesize userModel=_userModel;
@property(retain, nonatomic) AWEIMShareModel *shareModel; // @synthesize shareModel=_shareModel;
@property(nonatomic) long long modelType; // @synthesize modelType=_modelType;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

