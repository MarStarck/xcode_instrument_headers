//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

#import "XRPackagedUserInterfaceAggregationColumn.h"

@class NSString, XRPackagedAggregationMethod, XRPackagedUserInterfaceAggregationSpec;

@interface XRPackagedUserInterfaceAggregationColumn : NSManagedObject <XRPackagedUserInterfaceAggregationColumn>
{
}

+ (id)fetchRequest;
- (id)parametersByName;

// Remaining properties
@property(nonatomic) BOOL hidden; // @dynamic hidden;
@property(retain, nonatomic) XRPackagedAggregationMethod *method; // @dynamic method;
@property(retain, nonatomic) XRPackagedUserInterfaceAggregationSpec *spec; // @dynamic spec;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end
