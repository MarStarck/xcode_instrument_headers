//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PFTSymbolData;

@interface PFTInlinedInstance : NSObject
{
    struct _CSRange instanceRange;
    PFTSymbolData *_inlinedCaller;
}

@property(retain, nonatomic) PFTSymbolData *inlinedCaller; // @synthesize inlinedCaller=_inlinedCaller;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (struct _CSRange)range;
- (id)initWithInlinedCaller:(id)arg1 andRange:(struct _CSRange)arg2;

@end

