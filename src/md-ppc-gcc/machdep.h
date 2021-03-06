/*
 * E-UAE - The portable Amiga Emulator
 *
 * Processor-specific definitions
 */

#ifndef MACHDEP_MACHDEP_H
#define MACHDEP_MACHDEP_H

#define MACHDEP_PPC
#define MACHDEP_NAME    "ppc"

#define HAVE_MACHDEP_TIMER

typedef uae_s32 frame_time_t;
#define MAX_FRAME_TIME ((1<<31)-1)

#endif
