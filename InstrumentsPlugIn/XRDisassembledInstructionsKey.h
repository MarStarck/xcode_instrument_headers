//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface XRDisassembledInstructionsKey : NSObject <NSCopying>
{
    unsigned long long _namehash;
    unsigned long long _pathhash;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSymbol:(id)arg1;
- (unsigned long long)path_hash;
- (unsigned long long)name_hash;
- (BOOL)isEqual:(id)arg1;

@end

