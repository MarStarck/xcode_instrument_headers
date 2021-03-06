//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class XRAnalysisCoreRowArray;

@interface XRConsoleControlIntervalMonitor : NSObject
{
    unsigned char _timeColumnID;
    unsigned char _textColumnID;
    unsigned int _numRowsProcessed;
    XRAnalysisCoreRowArray *_rowArray;
}

@property(nonatomic) unsigned char textColumnID; // @synthesize textColumnID=_textColumnID;
@property(nonatomic) unsigned char timeColumnID; // @synthesize timeColumnID=_timeColumnID;
@property(nonatomic) unsigned int numRowsProcessed; // @synthesize numRowsProcessed=_numRowsProcessed;
@property(retain, nonatomic) XRAnalysisCoreRowArray *rowArray; // @synthesize rowArray=_rowArray;
- (void).cxx_destruct;

@end

