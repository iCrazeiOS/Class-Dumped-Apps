//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Mantle/MTLModel.h>

#import "MTLJSONSerializing-Protocol.h"

@class NSString, NSURL;

@interface RDKLinkEmbeddedMedia : MTLModel <MTLJSONSerializing>
{
    NSString *_type;
    NSString *_authorName;
    NSString *_authorURL;
    NSURL *_providerURL;
    NSURL *_providerDescription;
    NSURL *_providerTitle;
    double _width;
    double _height;
    double _thumbnailWidth;
    double _thumbnailHeight;
    NSURL *_thumbnailURL;
}

+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *thumbnailURL; // @synthesize thumbnailURL=_thumbnailURL;
@property(nonatomic) double thumbnailHeight; // @synthesize thumbnailHeight=_thumbnailHeight;
@property(nonatomic) double thumbnailWidth; // @synthesize thumbnailWidth=_thumbnailWidth;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double width; // @synthesize width=_width;
@property(copy, nonatomic) NSURL *providerTitle; // @synthesize providerTitle=_providerTitle;
@property(copy, nonatomic) NSURL *providerDescription; // @synthesize providerDescription=_providerDescription;
@property(retain, nonatomic) NSURL *providerURL; // @synthesize providerURL=_providerURL;
@property(copy, nonatomic) NSString *authorURL; // @synthesize authorURL=_authorURL;
@property(copy, nonatomic) NSString *authorName; // @synthesize authorName=_authorName;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

