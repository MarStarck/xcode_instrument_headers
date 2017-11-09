//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <InstrumentsPlugIn/XRStrategyContextObject.h>

@class NSArray, NSOperation, PFTSymbolData, XRBacktraceRepository, XRCallTreeInformation, XRCodeManager;

@interface XRSourceAnnotationQuery : XRStrategyContextObject
{
    int _processIdentifier;
    NSArray *_comments;
    id <CommonSymbol> _selectedSymbol;
    PFTSymbolData *_concreteSymbol;
    XRCodeManager *_sourceManager;
    XRCallTreeInformation *_callTreeConstraint;
    XRBacktraceRepository *_backtraces;
    NSOperation *_completionOp;
    struct XRTimeRange _timeRangeFilter;
}

@property(retain, nonatomic) NSOperation *completionOp; // @synthesize completionOp=_completionOp;
@property(retain, nonatomic) XRBacktraceRepository *backtraces; // @synthesize backtraces=_backtraces;
@property(retain, nonatomic) XRCallTreeInformation *callTreeConstraint; // @synthesize callTreeConstraint=_callTreeConstraint;
@property(retain, nonatomic) XRCodeManager *sourceManager; // @synthesize sourceManager=_sourceManager;
@property(nonatomic) int processIdentifier; // @synthesize processIdentifier=_processIdentifier;
@property(retain, nonatomic) PFTSymbolData *concreteSymbol; // @synthesize concreteSymbol=_concreteSymbol;
@property(retain, nonatomic) id <CommonSymbol> selectedSymbol; // @synthesize selectedSymbol=_selectedSymbol;
@property(nonatomic) struct XRTimeRange timeRangeFilter; // @synthesize timeRangeFilter=_timeRangeFilter;
@property(copy, nonatomic) NSArray *comments; // @synthesize comments=_comments;
- (void).cxx_destruct;
- (id)init;

@end

