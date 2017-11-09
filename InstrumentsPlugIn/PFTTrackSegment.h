//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class PFTTraceDocument, XRRun;

@interface PFTTrackSegment : NSObject <NSCoding>
{
    XRRun *_runNotRetained;
    double _startTimeInUnits;
    double _endTimeInUnits;
    double _endTimeRange;
    BOOL _segmentLocked;
    BOOL _pauseEndedSegment;
    PFTTraceDocument *_traceDocument;
}

+ (void)initialize;
- (void).cxx_destruct;
- (BOOL)pauseEndedSegment;
- (void)setPauseEndedSegment:(BOOL)arg1;
- (void)lockAtEndTimeInUnits:(double)arg1;
- (BOOL)segmentComplete;
- (id)traceDocument;
- (void)setTraceDocument:(id)arg1;
- (id)parentRun;
- (void)setParentRun:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)clearGraphCache;
- (void)setupWithStartTime:(double)arg1;
- (id)initWithTraceDocument:(id)arg1;

@end

