//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IMAPMailboxes, MFMailbox, NSArray, NSString;

@interface _IMAPMailboxEntry : NSObject
{
    NSArray *_filteredChildren;	// 8 = 0x8
    BOOL _subscribed;	// 16 = 0x10
    BOOL _isNoSelect;	// 17 = 0x11
    BOOL _hasEnabledDescendants;	// 18 = 0x12
    NSString *_name;	// 24 = 0x18
    NSString *_path;	// 32 = 0x20
    NSArray *_children;	// 40 = 0x28
    MFMailbox *_mailbox;	// 48 = 0x30
    _IMAPMailboxEntry *_parent;	// 56 = 0x38
    IMAPMailboxes *_controller;	// 64 = 0x40
}

@property(nonatomic) __weak IMAPMailboxes *controller; // @synthesize controller=_controller;
@property(retain, nonatomic) _IMAPMailboxEntry *parent; // @synthesize parent=_parent;
@property(nonatomic) BOOL hasEnabledDescendants; // @synthesize hasEnabledDescendants=_hasEnabledDescendants;
@property(nonatomic) BOOL isNoSelect; // @synthesize isNoSelect=_isNoSelect;
@property(retain, nonatomic) MFMailbox *mailbox; // @synthesize mailbox=_mailbox;
@property(retain, nonatomic) NSArray *children; // @synthesize children=_children;
@property(nonatomic) BOOL subscribed; // @synthesize subscribed=_subscribed;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
// - (void).cxx_destruct;	// IMP=0x000000010017eaee
@property(readonly, nonatomic) BOOL isValidForCurrentFilter;
@property(readonly, nonatomic) BOOL isPathValidForCurrentFilter;
@property(copy, nonatomic) NSArray *filteredChildren;
- (long long)compare:(id)arg1;	// IMP=0x000000010017e58c

@end
