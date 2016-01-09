//
//  AKTriangleOscillatorAudioUnit.h
//  AudioKit
//
//  Autogenerated by scripts by Aurelius Prochazka. Do not edit directly.
//  Copyright (c) 2016 Aurelius Prochazka. All rights reserved.
//

#ifndef AKTriangleOscillatorAudioUnit_h
#define AKTriangleOscillatorAudioUnit_h

#import <AudioToolbox/AudioToolbox.h>

@interface AKTriangleOscillatorAudioUnit : AUAudioUnit
@property (nonatomic) float frequency;
@property (nonatomic) float amplitude;

- (void)start;
- (void)stop;
- (BOOL)isPlaying;
@end

#endif /* AKTriangleOscillatorAudioUnit_h */
