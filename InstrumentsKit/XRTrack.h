//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <InstrumentsKit/XRStrategyDecorationRequest.h>

@class NSArray, NSMapTable, NSMutableArray, NSString;

@interface XRTrack : XRStrategyDecorationRequest
{
    NSMutableArray *_planes;
    NSMapTable *_groupPlaneMap;
    NSMutableArray *_planeDisplayNames;
    double _fixedHeightTotal;
    NSMutableArray *_delayedUpdateOps;
    int _trackType;
    unsigned long long _heightInDeckUnits;
    NSString *_displayContext;
}

+ (double)deckHeightInPointsForIdentifier:(id)arg1;
@property(copy, nonatomic) NSString *displayContext; // @synthesize displayContext=_displayContext;
@property(nonatomic) unsigned long long heightInDeckUnits; // @synthesize heightInDeckUnits=_heightInDeckUnits;
@property(readonly, nonatomic) NSArray *planeDisplayNames; // @synthesize planeDisplayNames=_planeDisplayNames;
@property(nonatomic) int trackType; // @synthesize trackType=_trackType;
- (void).cxx_destruct;
- (void)requiresOperationToCompleteBeforeLayout:(id)arg1;
- (void)doneAddingPlanes;
- (void)_layoutPlanes;
- (double)_determineHeightOfSinglePlane:(id)arg1 type:(unsigned long long)arg2 resizablePlaneHeight:(double)arg3 extraPixelHeight:(double)arg4;
- (double)_requiredHeightWithResizablePlaneHeight:(double)arg1;
- (void)_sortPlanes;
- (double)_totalInterplanePadding;
- (unsigned long long)_planeCount;
- (unsigned long long)_eventPlaneCountIncludingNested:(BOOL)arg1;
- (unsigned long long)_valuePlaneCountIncludingNested:(BOOL)arg1;
- (void)_shrinkFixedPlanes;
- (void)_addIntervalEventPlane:(id)arg1 order:(float)arg2 toGroupPlane:(id)arg3;
- (void)_addIntervalEventPlane:(id)arg1 order:(float)arg2;
- (void)_addPointEventPlane:(id)arg1 order:(float)arg2 toGroupPlane:(id)arg3;
- (void)_addPointEventPlane:(id)arg1 order:(float)arg2;
- (void)_addStatePlane:(id)arg1 order:(float)arg2 toGroupPlane:(id)arg3;
- (void)_addStatePlane:(id)arg1 order:(float)arg2;
- (void)_addValuePlane:(id)arg1 order:(float)arg2 toGroupPlane:(id)arg3;
- (void)_addValuePlane:(id)arg1 order:(float)arg2;
- (id)addGroupPlaneOrder:(float)arg1;
- (void)addPlane:(id)arg1 type:(unsigned long long)arg2 order:(float)arg3 toGroupPlane:(id)arg4;
- (void)addPlane:(id)arg1 type:(unsigned long long)arg2 order:(float)arg3;
@property(readonly, nonatomic) BOOL planesWereAdded;
- (void)removeAllPlanes;
- (id)initWithRunNumber:(long long)arg1 resolution:(unsigned long long)arg2;
- (id)initWithPlaneManager:(id)arg1 groupPlane:(id)arg2 runNumber:(long long)arg3 resolution:(unsigned long long)arg4 strategyIdentifier:(id)arg5;

@end
