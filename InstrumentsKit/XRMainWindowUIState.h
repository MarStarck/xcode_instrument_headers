//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSMutableDictionary, NSProgress, NSString, XRContext;

@interface XRMainWindowUIState : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _pinnedGraphHidden;
    double _splitterValue;
    unsigned long long _inspectionTime;
    unsigned long long _nanosecondsPerPoint;
    unsigned long long _trackTimeOffset;
    double _trackYOffset;
    double _pinnedGraphHeight;
    NSMutableDictionary *_currentViewStatesByContextDescr;
    id <NSCoding><NSObject> _displayedDetailContextValue;
    XRContext *_displayedContext;
    NSString *_mode;
    NSProgress *_progressForMode;
    struct XRTimeRange _selectedTimeRange;
}

+ (id)stateForData:(id)arg1;
+ (id)dataForState:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)keyPathsForValuesAffectingInspectionTimeInSeconds;
+ (id)keyPathsForValuesAffectingLowerDisplayHidden;
+ (id)keyPathsForValuesAffectingExtendedDetailInspectorHidden;
+ (id)keyPathsForValuesAffectingSelectedStrategy;
+ (long long)version;
@property(retain, nonatomic) NSProgress *progressForMode; // @synthesize progressForMode=_progressForMode;
@property(retain, nonatomic) NSString *mode; // @synthesize mode=_mode;
@property(retain, nonatomic) XRContext *displayedContext; // @synthesize displayedContext=_displayedContext;
@property(retain, nonatomic) id <NSCoding><NSObject> displayedDetailContextValue; // @synthesize displayedDetailContextValue=_displayedDetailContextValue;
@property(readonly, nonatomic) NSMutableDictionary *currentViewStatesByContextDescr; // @synthesize currentViewStatesByContextDescr=_currentViewStatesByContextDescr;
@property(nonatomic) BOOL pinnedGraphHidden; // @synthesize pinnedGraphHidden=_pinnedGraphHidden;
@property(nonatomic) double pinnedGraphHeight; // @synthesize pinnedGraphHeight=_pinnedGraphHeight;
@property(nonatomic) double trackYOffset; // @synthesize trackYOffset=_trackYOffset;
@property(nonatomic) unsigned long long trackTimeOffset; // @synthesize trackTimeOffset=_trackTimeOffset;
@property(nonatomic) unsigned long long nanosecondsPerPoint; // @synthesize nanosecondsPerPoint=_nanosecondsPerPoint;
@property(nonatomic) struct XRTimeRange selectedTimeRange; // @synthesize selectedTimeRange=_selectedTimeRange;
@property(nonatomic) unsigned long long inspectionTime; // @synthesize inspectionTime=_inspectionTime;
@property(nonatomic) double splitterValue; // @synthesize splitterValue=_splitterValue;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) double inspectionTimeInSeconds;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

