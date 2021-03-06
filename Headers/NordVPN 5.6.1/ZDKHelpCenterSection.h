//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface ZDKHelpCenterSection : NSObject
{
    _Bool _outdated;
    NSNumber *_identifier;
    NSNumber *_category_id;
    NSString *_name;
    NSString *_sectionDescription;
    long long _position;
    NSString *_locale;
    NSString *_sourceLocale;
    NSString *_url;
    NSString *_html_url;
    NSString *_sorting;
    NSString *_createdAt;
    NSString *_updatedAt;
}

+ (id)parseSections:(id)arg1;
+ (id)parseSection:(id)arg1;
@property(nonatomic) _Bool outdated; // @synthesize outdated=_outdated;
@property(copy, nonatomic) NSString *updatedAt; // @synthesize updatedAt=_updatedAt;
@property(copy, nonatomic) NSString *createdAt; // @synthesize createdAt=_createdAt;
@property(copy, nonatomic) NSString *sorting; // @synthesize sorting=_sorting;
@property(copy, nonatomic) NSString *html_url; // @synthesize html_url=_html_url;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *sourceLocale; // @synthesize sourceLocale=_sourceLocale;
@property(copy, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property(nonatomic) long long position; // @synthesize position=_position;
@property(copy, nonatomic) NSString *sectionDescription; // @synthesize sectionDescription=_sectionDescription;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSNumber *category_id; // @synthesize category_id=_category_id;
@property(copy, nonatomic) NSNumber *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;

@end

