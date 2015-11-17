//
//  AppDelegate.h
//  WaveFormTest
//
//  Created by matata on 6/28/13.
// This software is free.
//

#import <Cocoa/Cocoa.h>
#import "WaveFormViewOSX.h"

@interface AppDelegate : NSObject <NSApplicationDelegate>

@property (assign) IBOutlet NSWindow *window;
@property (assign) IBOutlet WaveFormViewOSX *wfv;
- (IBAction)loadAudioFile:(id)sender;

@end
