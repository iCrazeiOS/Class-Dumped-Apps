//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSOrderedSet, NSString;

@interface IBGSurveyTarget : NSManagedObject
{
}

+ (id)surveyTargetFromDictionary:(id)arg1 withContext:(id)arg2;

// Remaining properties
@property(retain, nonatomic) NSOrderedSet *conditions; // @dynamic conditions;
@property(nonatomic) long long frequencyInterval; // @dynamic frequencyInterval;
@property(nonatomic) long long frequencyType; // @dynamic frequencyType;
@property(nonatomic) long long triggerAfter; // @dynamic triggerAfter;
@property(nonatomic) long long triggerType; // @dynamic triggerType;
@property(copy, nonatomic) NSString *triggerUserEventName; // @dynamic triggerUserEventName;

@end

