//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DTBAdUtitlity : NSObject
{
}

+ (id)sharedUtility;
- (id)preferredMarketPlace;
- (id)userSpecificMarketPlace;
- (id)configURL;
- (_Bool)saveAAXHostName:(id)arg1;
- (id)route53EnabledAAXCname;
- (id)aaxHostName;
- (_Bool)saveSISEndPoint:(id)arg1;
- (id)sisEndPoint;
- (id)dataToJSON:(id)arg1;
- (id)jsonToString:(id)arg1;
- (id)urlEncodedStr:(id)arg1;
- (id)md5String:(id)arg1;
- (id)sha1String:(id)arg1;

@end

