//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface XRThreadDisplayObject : NSObject <NSCoding>
{
    unsigned int _tid;
    NSString *_threadName;
    NSString *_uniqueCachedDescription;
}

- (void).cxx_destruct;
- (id)description;
- (id)name;
- (id)threadNumber;
- (unsigned int)tid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithThread:(unsigned int)arg1 assignedName:(id)arg2;

@end

