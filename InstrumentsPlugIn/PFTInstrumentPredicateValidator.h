//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <InstrumentsPlugIn/PFTInstrumentEvaluator.h>

@class NSPredicate;

@interface PFTInstrumentPredicateValidator : PFTInstrumentEvaluator
{
    NSPredicate *_predicate;
}

@property(readonly, retain, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
- (void).cxx_destruct;
- (id)description;
- (BOOL)evaluateWithDevice:(id)arg1 variables:(id)arg2;
- (id)initBySanitizingExpression:(id)arg1 errorString:(id)arg2;
- (id)initWithPredicate:(id)arg1 errorString:(id)arg2;

@end

