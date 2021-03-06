//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ICEStackLayoutPrimitive.h"

#import "ICEMutableLayoutPrimitive-Protocol.h"

@class ICEAccessibility, ICEBehavior, ICEStyle, ICEVisualElementLogInfo, NSArray, NSString;

@interface ICEMutableStackLayoutPrimitive : ICEStackLayoutPrimitive <ICEMutableLayoutPrimitive>
{
}


// Remaining properties
@property(copy, nonatomic) NSString *UID;
@property(copy, nonatomic) ICEAccessibility *accessibility;
@property(copy, nonatomic) ICEBehavior *behavior;
@property(nonatomic) float childAlignmentConstraintPriority; // @dynamic childAlignmentConstraintPriority;
@property(copy, nonatomic) NSArray *childComponents;
@property(nonatomic) float crossAxisCompressionResistanceConstraintPriority; // @dynamic crossAxisCompressionResistanceConstraintPriority;
@property(nonatomic) float crossAxisHuggingConstraintPriority; // @dynamic crossAxisHuggingConstraintPriority;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) float itemArrangementConstraintPriority; // @dynamic itemArrangementConstraintPriority;
@property(copy, nonatomic) NSArray *layoutConstraints;
@property(copy, nonatomic) NSArray *layoutGuideUIDs;
@property(copy, nonatomic) ICEVisualElementLogInfo *logInfo;
@property(nonatomic) long long stackDirection; // @dynamic stackDirection;
@property(copy, nonatomic) ICEStyle *style;
@property(readonly) Class superclass;
@end

