//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CommonSymbol.h"
#import "NSCopying.h"
#import "XRUIStackFrame.h"

@class NSString, PFTSymbolData;

@interface PFTDisplaySymbol : NSObject <NSCopying, CommonSymbol, XRUIStackFrame>
{
    unsigned long long _address;
    NSString *_sourcePath;
    unsigned long long _lineNumber;
    int _pid;
    NSString *_symbolName;
    NSString *_libraryName;
    NSString *_libraryPath;
    PFTSymbolData *_resolvedSymbol;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)lineNumberForDisplay;
- (id)pathForDisplay;
- (id)symbolNameForUse;
- (id)symbolNameForDisplay;
- (id)libraryForDisplay;
- (id)resolvedSymbol;
- (id)libraryPath;
- (id)libraryName;
- (id)symbolName;
- (int)pid;
- (unsigned long long)lineNumber;
- (id)sourcePath;
- (unsigned long long)address;
@property(readonly, copy) NSString *description;
- (id)initWithAddress:(unsigned long long)arg1 sourcePath:(id)arg2 lineNumber:(unsigned long long)arg3 pid:(int)arg4 symbolName:(id)arg5 libraryName:(id)arg6 libraryPath:(id)arg7 andResolvedSymbol:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
