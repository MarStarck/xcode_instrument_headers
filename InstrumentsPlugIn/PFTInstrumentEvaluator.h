//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface PFTInstrumentEvaluator : NSObject
{
    NSString *_uiError;
}

+ (id)no;
+ (id)yes;
+ (void)initialize;
@property(readonly, copy, nonatomic) NSString *uiError; // @synthesize uiError=_uiError;
- (void).cxx_destruct;
- (id)uiErrorForDevice:(id)arg1;
- (BOOL)evaluateWithDevice:(id)arg1 variables:(id)arg2;
- (id)initWithErrorString:(id)arg1;

@end

