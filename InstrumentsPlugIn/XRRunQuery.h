//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSArray, PFTSymbolData, XRCallTreeInformation, XRCodeManager, XRRun;

@interface XRRunQuery : NSOperation
{
    XRRun *_runToQuery;
    id <CommonSymbol> _selectedSymbol;
    PFTSymbolData *_concreteSymbol;
    int _processIdentifier;
    XRCallTreeInformation *_selectedCallTreeInformation;
    NSArray *_comments;
    BOOL _isConcurrent;
    XRCodeManager *_srcManager;
}

- (void).cxx_destruct;
- (BOOL)isCancelled;
- (void)main;
- (int)processIdentifier;
- (id)concreteSymbol;
- (id)selectedSymbol;
- (id)comments;
- (id)filename;
- (id)run;
- (BOOL)isConcurrent;
- (id)initDataForRun:(id)arg1 involvingSymbol:(id)arg2 withConcreteSymbol:(id)arg3 inSourceManager:(id)arg4 callTreeInformation:(id)arg5 callbackTarget:(id)arg6 action:(SEL)arg7;
- (id)initDataForRun:(id)arg1 involvingSymbol:(id)arg2 withConcreteSymbol:(id)arg3 forProcess:(int)arg4 inSourceManager:(id)arg5 callTreeInformation:(id)arg6 callbackTarget:(id)arg7 action:(SEL)arg8;

@end
