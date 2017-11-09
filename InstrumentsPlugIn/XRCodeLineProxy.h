//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSProxy.h"

#import "XRCodeLineProtocol.h"

@class NSString;

@interface XRCodeLineProxy : NSProxy <XRCodeLineProtocol>
{
    int _kind;
    id <XRCodeLineProtocol><NSObject> _line;
    unsigned long long _symbolBaseAddress;
    id <XRCodeProvider><NSObject> _codeProvider;
    NSString *_locationBase;
    unsigned long long _lineNo;
    struct {
        unsigned int capabilitiesChecked:1;
        unsigned int hasAttributedLine:1;
        unsigned int inKernel:1;
    } _flags;
}

- (void).cxx_destruct;
- (id)attributedLineString;
- (unsigned long long)absoluteAddress;
- (id)locationReference;
- (unsigned long long)lineNumber;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)initWithCodeLine:(id)arg1 ofKind:(int)arg2 lineNumber:(unsigned long long)arg3 baseSymbolAddress:(unsigned long long)arg4 locationBase:(id)arg5 inKernel:(BOOL)arg6 andProvider:(id)arg7;

// Remaining properties
@property(readonly, nonatomic) unsigned long long byteOffset; // @dynamic byteOffset;
@property(readonly, nonatomic) unsigned long long length; // @dynamic length;
@property(readonly, nonatomic) NSString *lineString; // @dynamic lineString;

@end
