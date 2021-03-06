//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "QPSPredictiveCollectionViewDelegate-Protocol.h"
#import "QPSPredictiveSearchControllerDelegate-Protocol.h"
#import "QPSSearchResultsPresenterDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"

@class NSString, QPSPredictiveSearchController, QPSPredictiveSearchResult, QPSSearchResultsPresenter, UISearchBar, UIView;
@protocol QPSAnalyticsDelegate, UISearchBarDelegate;

@interface QPSPredictiveSearchViewController : UIViewController <UISearchBarDelegate, QPSPredictiveSearchControllerDelegate, QPSPredictiveCollectionViewDelegate, QPSSearchResultsPresenterDelegate>
{
    QPSPredictiveSearchController *searchController;
    QPSSearchResultsPresenter *_resultPresenter;
    _Bool isFullScreen;
    _Bool dropDownVisible;
    id <UISearchBarDelegate> searchBarDelegate;
    UIViewController *_targetViewController;
    UISearchBar *_searchBar;
    UIView *_containerView;
    id <QPSAnalyticsDelegate> _analyticsDeledate;
    QPSPredictiveSearchResult *_searchResult;
}

+ (_Bool)isPredictiveSearchEnabled;
+ (id)predictiveSearchViewController;
- (void).cxx_destruct;
@property(retain, nonatomic) QPSPredictiveSearchResult *searchResult; // @synthesize searchResult=_searchResult;
@property(nonatomic) __weak id <QPSAnalyticsDelegate> analyticsDeledate; // @synthesize analyticsDeledate=_analyticsDeledate;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(nonatomic) __weak UIViewController *targetViewController; // @synthesize targetViewController=_targetViewController;
@property(readonly, nonatomic, getter=isDropDownVisible) _Bool dropDownVisible; // @synthesize dropDownVisible;
@property(nonatomic) __weak id <UISearchBarDelegate> searchBarDelegate; // @synthesize searchBarDelegate;
- (void)didTapOutside:(id)arg1;
- (void)resultPresenter:(id)arg1 didSelectItemWithIndexPath:(id)arg2;
- (_Bool)locationPointsOnItem:(struct CGPoint)arg1;
- (void)resultPresenterDidUserInteraction:(id)arg1;
- (id)createAanalyticsDeledate;
- (void)predictiveSearchController:(id)arg1 willIgnoreSearchTerm:(id)arg2;
- (void)predictiveSearchController:(id)arg1 didReceiveSearchTerms:(id)arg2;
- (void)predictiveSearchController:(id)arg1 didFailWithError:(id)arg2;
- (_Bool)isOS7;
- (void)animateDropDownViewAppearance:(id)arg1 withShowBlock:(CDUnknownBlockType)arg2 withCompletitionBlock:(CDUnknownBlockType)arg3;
- (void)dropDown:(id)arg1 setHidden:(_Bool)arg2 animated:(_Bool)arg3 withCompletition:(CDUnknownBlockType)arg4;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (_Bool)searchBar:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)displayDropDownAnimated:(_Bool)arg1;
- (void)cancelDropDownDisplayAnimated:(_Bool)arg1;
- (void)initializePredictiveSearchController;
@property(readonly, nonatomic) QPSSearchResultsPresenter *resultPresenter;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

