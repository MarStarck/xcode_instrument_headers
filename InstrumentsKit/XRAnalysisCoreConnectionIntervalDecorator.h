//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTTimelineDecorator.h"

@class XRAnalysisCoreConnectionIntervalModel, XRTheme, XRTrace;

__attribute__((visibility("hidden")))
@interface XRAnalysisCoreConnectionIntervalDecorator : DTTimelineDecorator
{
    unsigned int _tableID;
    unsigned char _uuidColumnID;
    unsigned char _sourceUUIDColumnID;
    unsigned char _sinkUUIDColumnID;
    unsigned char _metadataColumnID;
    unsigned char _filterColumnID;
    unsigned char _colorColumnID;
    XRTheme *_theme;
    set_4cedab1c _highlightUUIDs;
    struct _opaque_pthread_rwlock_t _imageRdWrLock;
    struct unordered_map<NSString *__unsafe_unretained, std::__1::vector<NSImage *, std::__1::allocator<NSImage *>>, std::__1::hash<NSString *__unsafe_unretained>, std::__1::equal_to<NSString *__unsafe_unretained>, std::__1::allocator<std::__1::pair<NSString *const __unsafe_unretained, std::__1::vector<NSImage *, std::__1::allocator<NSImage *>>>>> _imageCache;
    XRTrace *_trace;
    long long _runNumber;
    XRAnalysisCoreConnectionIntervalModel *_model;
    unsigned long long _filterValue;
}

@property(nonatomic) unsigned long long filterValue; // @synthesize filterValue=_filterValue;
@property(retain, nonatomic) XRAnalysisCoreConnectionIntervalModel *model; // @synthesize model=_model;
@property(nonatomic) long long runNumber; // @synthesize runNumber=_runNumber;
@property(nonatomic) unsigned int tableID; // @synthesize tableID=_tableID;
@property(nonatomic) __weak XRTrace *trace; // @synthesize trace=_trace;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)decorateInspectionRanges:(id)arg1;
- (void)decorateContainer:(struct DTTimelineDecorationContainer *)arg1 qualityOfService:(unsigned int)arg2 priority:(int)arg3 group:(id)arg4;
- (void)clearAllHighlights;
- (void)applyHighlightsForUUIDs:(const unsigned long long *)arg1 count:(unsigned int)arg2;
- (void)setDefaultsForPlane:(id)arg1;
- (void)_getImage:(id *)arg1 forType:(unsigned char)arg2 andImage:(id *)arg3 forType:(unsigned char)arg4 withColorNamed:(id)arg5;
- (void)dealloc;
- (id)initWithTableID:(unsigned int)arg1;

@end

