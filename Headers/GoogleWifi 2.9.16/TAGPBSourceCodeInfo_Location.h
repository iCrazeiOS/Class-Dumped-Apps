//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TAGPBGeneratedMessage.h"

@class NSString, TAGPBMutableArray;

@interface TAGPBSourceCodeInfo_Location : TAGPBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasLeadingComments; // @dynamic hasLeadingComments;
@property(nonatomic) _Bool hasLeadingDetachedCommentsArray; // @dynamic hasLeadingDetachedCommentsArray;
@property(nonatomic) _Bool hasPathArray; // @dynamic hasPathArray;
@property(nonatomic) _Bool hasSpanArray; // @dynamic hasSpanArray;
@property(nonatomic) _Bool hasTrailingComments; // @dynamic hasTrailingComments;
@property(retain, nonatomic) NSString *leadingComments; // @dynamic leadingComments;
@property(retain, nonatomic) TAGPBMutableArray *leadingDetachedCommentsArray; // @dynamic leadingDetachedCommentsArray;
@property(retain, nonatomic) TAGPBMutableArray *pathArray; // @dynamic pathArray;
@property(retain, nonatomic) TAGPBMutableArray *spanArray; // @dynamic spanArray;
@property(retain, nonatomic) NSString *trailingComments; // @dynamic trailingComments;

@end

