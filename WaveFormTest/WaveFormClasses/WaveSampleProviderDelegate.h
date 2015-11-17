//
//  WaveSampleProviderDelegate.h
//  CoreAudioTest
//
//  Created by matata on 6/26/13.
// This software is free.
//

#import <Foundation/Foundation.h>
@class WaveSampleProvider;

@protocol WaveSampleProviderDelegate <NSObject>

- (void) sampleProcessed:(WaveSampleProvider *)provider;
- (void) statusUpdated:(WaveSampleProvider *)provider;

@end
