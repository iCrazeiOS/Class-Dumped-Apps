//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTUBIEventFactoryLocation, SPTUBIMobileLocalFilesImport_DiscardDialogEventFactory, SPTUBIMobileLocalFilesImport_EverythingImportedDialogEventFactory, SPTUBIMobileLocalFilesImport_ImportConfirmationDialogEventFactory, SPTUBIMobileLocalFilesImport_NoFilesDialogEventFactory, SPTUBIMobileLocalFilesImport_SectionsEventFactory, SPTUBIMobileLocalFilesImport_ToolbarEventFactory;

@protocol SPTUBIMobileLocalFilesImportEventFactory <NSObject>
- (id <SPTUBIMobileLocalFilesImport_NoFilesDialogEventFactory>)noFilesDialogFactory;
- (id <SPTUBIMobileLocalFilesImport_EverythingImportedDialogEventFactory>)everythingImportedDialogFactory;
- (id <SPTUBIMobileLocalFilesImport_DiscardDialogEventFactory>)discardDialogFactory;
- (id <SPTUBIMobileLocalFilesImport_ImportConfirmationDialogEventFactory>)importConfirmationDialogFactory;
- (id <SPTUBIMobileLocalFilesImport_SectionsEventFactory>)sectionsFactory;
- (id <SPTUBIMobileLocalFilesImport_ToolbarEventFactory>)toolbarFactory;
- (id <SPTUBIEventFactoryLocation>)_location;
@end

