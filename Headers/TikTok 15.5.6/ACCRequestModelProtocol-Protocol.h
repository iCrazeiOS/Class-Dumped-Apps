//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, NSURL;

@protocol ACCRequestModelProtocol <NSObject>
@property(copy, nonatomic) NSString *targetPath;
@property(copy, nonatomic) CDUnknownBlockType bodyBlock;
@property(copy, nonatomic) NSString *fileName;
@property(retain, nonatomic) NSURL *fileURL;
@property(retain, nonatomic) Class objectClass;
@property(nonatomic) double timeout;
@property(retain, nonatomic) NSDictionary *headerField;
@property(nonatomic) _Bool needCommonParams;
@property(copy, nonatomic) NSDictionary *params;
@property(copy, nonatomic) NSString *urlString;
@property(nonatomic) unsigned long long requestType;
@end

