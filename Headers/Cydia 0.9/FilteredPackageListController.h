//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PackageListController.h"

@interface FilteredPackageListController : PackageListController
{
    Function_4b36f001 filter_;
    Function_de9648d6 sorter_;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithDatabase:(id)arg1 title:(id)arg2 filter:(Function_4b36f001)arg3;
- (id)_reloadPackages;
- (void)setSorter:(Function_de9648d6)arg1;
- (void)setFilter:(Function_4b36f001)arg1;

@end

