//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class XRIndexSet;

@interface XRCodeFragment : NSObject
{
    NSObject *_key;
    XRIndexSet *_lineSet;
    int _kind;
}

- (void).cxx_destruct;
- (id)fragmentWithLineSet:(id)arg1;
- (BOOL)isDisassembly;
- (BOOL)isBinary;
- (BOOL)isSource;
- (id)key;
- (id)initWithLineSet:(id)arg1 andKey:(id)arg2 ofKind:(int)arg3;
- (void)setLineSet:(id)arg1;
- (id)lineSet;
- (id)init;

@end

