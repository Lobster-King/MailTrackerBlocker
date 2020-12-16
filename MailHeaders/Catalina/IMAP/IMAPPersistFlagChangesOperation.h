//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMAP/IMAPPersistenceTaskOperation.h>

@class NSDictionary;
@protocol IMAPPersistFlagChangesOperationDelegate;

@interface IMAPPersistFlagChangesOperation : IMAPPersistenceTaskOperation
{
    id <IMAPPersistFlagChangesOperationDelegate> _delegate;	// 8 = 0x8
    NSDictionary *_flagChangesByServerMessage;	// 16 = 0x10
}

@property(readonly, copy, nonatomic) NSDictionary *flagChangesByServerMessage; // @synthesize flagChangesByServerMessage=_flagChangesByServerMessage;
@property(readonly, nonatomic) __weak id <IMAPPersistFlagChangesOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x000000000004dfcc
- (void)main;	// IMP=0x000000000004dbd3
- (id)description;	// IMP=0x000000000004db13
- (id)initWithDataSource:(id)arg1;	// IMP=0x000000000004da44
- (id)initWithDataSource:(id)arg1 flagChangesByServerMessage:(id)arg2 delegate:(id)arg3;	// IMP=0x000000000004d977

@end
