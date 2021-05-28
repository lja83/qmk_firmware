#pragma once

#ifdef AUDIO_ENABLE
    #define STARTUP_SONG SONG(PLANCK_SOUND)
    // #define STARTUP_SONG SONG(NO_SOUND)

    #define DEFAULT_LAYER_SONGS { SONG(QWERTY_SOUND), \
                                  SONG(COLEMAK_SOUND), \
                                  SONG(DVORAK_SOUND) \
                                }
#endif

/*
 * MIDI options
 */

/* enable basic MIDI features:
   - MIDI notes can be sent when in Music mode is on
*/

#define MIDI_BASIC

/* enable advanced MIDI features:
   - MIDI notes can be added to the keymap
   - Octave shift and transpose
   - Virtual sustain, portamento, and modulation wheel
   - etc.
*/
//#define MIDI_ADVANCED

/* override number of MIDI tone keycodes (each octave adds 12 keycodes and allocates 12 bytes) */
//#define MIDI_TONE_KEYCODE_OCTAVES 2

// Most tactile encoders have detents every 4 stages
#define ENCODER_RESOLUTION 4

#define AUDIO_CLICKY
// #ifdef AUDIO_CLICKY
//     #define AUDIO_CLICKY_FREQ_DEFAULT 261.63f
//     #define AUDIO_CLICKY_FREQ_MIN 65.41f
//     #define AUDIO_CLICKY_FREQ_MAX 1046.5f
//     #define AUDIO_CLICKY_FREQ_FACTOR 1.18921f
//     #define AUDIO_CLICKY_FREQ_RANDOMNESS 17.0f
// #endif
