//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@class NSOrderedSet, NSString;

@interface XRIssueMO : NSManagedObject
{
}

+ (id)fetchRequest;

// Remaining properties
@property(retain, nonatomic) NSOrderedSet *children; // @dynamic children;
@property(nonatomic) int count; // @dynamic count;
@property(copy, nonatomic) NSString *message; // @dynamic message;
@property(retain, nonatomic) XRIssueMO *parent; // @dynamic parent;
@property(nonatomic) long long relativeTimestamp; // @dynamic relativeTimestamp;
@property(nonatomic) short subtype; // @dynamic subtype;
@property(nonatomic) short type; // @dynamic type;

@end
