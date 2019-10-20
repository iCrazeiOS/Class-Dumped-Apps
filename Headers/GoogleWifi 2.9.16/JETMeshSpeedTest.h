//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JETAccessPointGroup, JETGroupStateCache, JETMeshSpeedTestResult, NSMutableArray, NSMutableDictionary, NSString;
@protocol JETMeshSpeedTestDelegate, JETUserStateProtocol;

@interface JETMeshSpeedTest : NSObject
{
    _Bool _aborted;
    id <JETMeshSpeedTestDelegate> _delegate;
    JETAccessPointGroup *_group;
    JETGroupStateCache *_groupStateCache;
    id <JETUserStateProtocol> _userState;
    NSString *_groupRootID;
    NSMutableArray *_meshNodesToTest;
    NSMutableArray *_offlineMeshNodes;
    NSMutableArray *_failedMeshNodes;
    NSMutableDictionary *_resultsByAccessPointID;
}

@property(readonly, nonatomic) NSMutableDictionary *resultsByAccessPointID; // @synthesize resultsByAccessPointID=_resultsByAccessPointID;
@property(retain, nonatomic) NSMutableArray *failedMeshNodes; // @synthesize failedMeshNodes=_failedMeshNodes;
@property(retain, nonatomic) NSMutableArray *offlineMeshNodes; // @synthesize offlineMeshNodes=_offlineMeshNodes;
@property(retain, nonatomic) NSMutableArray *meshNodesToTest; // @synthesize meshNodesToTest=_meshNodesToTest;
@property(copy, nonatomic) NSString *groupRootID; // @synthesize groupRootID=_groupRootID;
@property(readonly, nonatomic) id <JETUserStateProtocol> userState; // @synthesize userState=_userState;
@property(readonly, nonatomic) JETGroupStateCache *groupStateCache; // @synthesize groupStateCache=_groupStateCache;
@property(readonly, nonatomic) JETAccessPointGroup *group; // @synthesize group=_group;
@property(readonly, nonatomic) __weak id <JETMeshSpeedTestDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isAborted) _Bool aborted; // @synthesize aborted=_aborted;
- (void).cxx_destruct;
- (void)testFinished;
- (void)testFailed;
- (void)meshNodeFailed:(id)arg1;
- (void)runNextTest;
- (void)setupTest;
- (void)refreshGroupStateCache;
@property(readonly, nonatomic) JETMeshSpeedTestResult *result;
- (void)start;
- (id)initWithDelegate:(id)arg1 userState:(id)arg2 group:(id)arg3;

@end

