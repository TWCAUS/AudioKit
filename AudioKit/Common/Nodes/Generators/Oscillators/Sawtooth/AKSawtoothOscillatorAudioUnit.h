//
//  AKSawtoothOscillatorAudioUnit.h
//  AudioKit
//
//  Autogenerated by scripts by Aurelius Prochazka. Do not edit directly.
//  Copyright (c) 2016 Aurelius Prochazka. All rights reserved.
//

#ifndef AKSawtoothOscillatorAudioUnit_h
#define AKSawtoothOscillatorAudioUnit_h

#import <AudioToolbox/AudioToolbox.h>

@interface AKSawtoothOscillatorAudioUnit : AUAudioUnit
@property (nonatomic) float frequency;
@property (nonatomic) float amplitude;

- (void)start;
- (void)stop;
- (BOOL)isPlaying;
@end

#endif /* AKSawtoothOscillatorAudioUnit_h */
