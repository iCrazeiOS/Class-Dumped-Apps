//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class GAMSDocsAppLoadInvariants, GAMSDocsEditorInvariants, GAMSDriveViewerInvariants;

@interface GAMSAppInvariants : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GAMSDocsAppLoadInvariants *docsAppLoad; // @dynamic docsAppLoad;
@property(retain, nonatomic) GAMSDocsEditorInvariants *docsEditor; // @dynamic docsEditor;
@property(retain, nonatomic) GAMSDriveViewerInvariants *driveViewer; // @dynamic driveViewer;
@property(nonatomic) _Bool hasDocsAppLoad; // @dynamic hasDocsAppLoad;
@property(nonatomic) _Bool hasDocsEditor; // @dynamic hasDocsEditor;
@property(nonatomic) _Bool hasDriveViewer; // @dynamic hasDriveViewer;

@end

