//
//  MPMRAIDInterstitialCustomEvent.h
//
//  Copyright 2018 Twitter, Inc.
//  Licensed under the MoPub SDK License Agreement
//  http://www.mopub.com/legal/sdk-license-agreement/
//

#import "MPInterstitialCustomEvent.h"
#import "MPMRAIDInterstitialViewController.h"
#import "MPPrivateInterstitialCustomEventDelegate.h"

@interface MPMRAIDInterstitialCustomEvent : MPInterstitialCustomEvent <MPInterstitialViewControllerDelegate>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-property-synthesis"
@property (nonatomic, weak) id<MPPrivateInterstitialCustomEventDelegate> delegate;
#pragma clang diagnostic pop

@end
