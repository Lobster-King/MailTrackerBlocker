//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMAP/IMAPSingleCommand.h>

@interface IMAPCapabilityCommand : IMAPSingleCommand
{
}

- (long long)maxAllowedConnectionState;	// IMP=0x0000000000022fbb
- (long long)minRequiredConnectionState;	// IMP=0x0000000000022fb0
- (BOOL)executeOnConnection:(id)arg1;	// IMP=0x0000000000022f95
- (BOOL)shouldSendAgainOnError;	// IMP=0x0000000000022f8a
- (id)activityString;	// IMP=0x0000000000022f1e
- (id)commandTypeString;	// IMP=0x0000000000022eff

@end
