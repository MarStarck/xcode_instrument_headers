//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XRStrategyContextObject.h"

@class DTTimelineGraphPlaneManager, DTTimelineGroupPlane, NSArray;

@interface XRStrategyDecorationRequest : XRStrategyContextObject
{
    unsigned long long _resolution;
    NSArray *_requestedBrushNames;
    DTTimelineGraphPlaneManager *_manager;
    DTTimelineGroupPlane *_groupPlane;
}

@property(readonly, nonatomic) DTTimelineGroupPlane *groupPlane; // @synthesize groupPlane=_groupPlane;
@property(readonly, nonatomic) __weak DTTimelineGraphPlaneManager *manager; // @synthesize manager=_manager;
@property(copy, nonatomic) NSArray *requestedBrushNames; // @synthesize requestedBrushNames=_requestedBrushNames;
@property(nonatomic) unsigned long long resolution; // @synthesize resolution=_resolution;
- (void).cxx_destruct;
- (void)addPlane:(id)arg1 groupPlane:(id)arg2;
- (id)initWithPlaneManager:(id)arg1 groupPlane:(id)arg2 runNumber:(long long)arg3 resolution:(unsigned long long)arg4 strategyIdentifier:(id)arg5;
- (id)init;

@end
