//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSSet, XRStrategyFilter;

@interface XRStrategyController : NSObject
{
    NSMutableArray *_sources;
    id <XRStrategyControllerDelegate> _delegate;
    long long _runNumber;
    XRStrategyFilter *_filter;
    NSSet *_allObjects;
    NSSet *_filteredObjects;
    NSArray *_objectsFilter;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
@property(nonatomic) __weak id <XRStrategyControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long runNumber; // @synthesize runNumber=_runNumber;
- (void).cxx_destruct;
- (id)_modifyOrReplaceBaseUIPlan:(id)arg1;
- (id)_assignCursorToNavigator:(id)arg1;
- (void)_addFiltersToNavigator:(id)arg1;
- (void)_prepareBaseFilter:(id)arg1 tableID:(unsigned int)arg2;
- (void)_existenceProjectorsDidChange;
- (void)recordDeviceInformation;
- (void)_invalidateStrategyFilter;
- (void)prepareBaseFilter:(id)arg1 tableID:(unsigned int)arg2;
- (id)prepareNavigator:(id)arg1;
- (void)reloadData;
@property(retain, nonatomic) NSArray *objectsFilter;
@property(retain, nonatomic) NSSet *filteredObjects;
@property(retain, nonatomic) NSSet *allObjects;
- (void)reloadRunList;
- (void)refreshAllObjects;
- (id)_makeStrategyFilter;
- (id)participatingRuns;
- (id)initWithRunNumber:(long long)arg1 delegate:(id)arg2;
- (id)strategyFilter;
- (BOOL)getDataSource:(out struct NSObject **)arg1 forInstrument:(id)arg2;
- (void)enumerateRunsAndSources:(CDUnknownBlockType)arg1;

@end
