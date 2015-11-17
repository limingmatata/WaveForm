//
//  WaveFormView.h
//  CoreAudioTest
//
//  Created by matata on 6/25/13.
// This software is free.
//

#import <Cocoa/Cocoa.h>
#include <AVFoundation/AVFoundation.h>
#import "WaveSampleProvider.h"
#import "WaveSampleProviderDelegate.h"

@interface WaveFormViewOSX : NSView<WaveSampleProviderDelegate>
{
	NSProgressIndicator *progress;
	CGPoint* sampleData;
	int sampleLength;
	WaveSampleProvider *wsp;	
	AVPlayer *player;
	float playProgress;
	NSString *infoString;
	NSString *timeString;
	NSColor *green;
	NSColor *gray;
	NSColor *lightgray;
	NSColor *darkgray;
	NSColor *white;
	NSColor *marker;
}

//- (void) openAudio:(NSString *)path;
- (void) openAudioURL:(NSURL *)url;
- (void)playerItemDidReachEnd:(NSNotification *)notification;
@end
