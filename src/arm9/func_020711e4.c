#include "ctx.h"

typedef enum { SND_WAVE_FORMAT_PCM8, SND_WAVE_FORMAT_PCM16 } SNDWaveFormat;
typedef enum { SND_CAPTURE_FORMAT_PCM16, SND_CAPTURE_FORMAT_PCM8 } SNDCaptureFormat;

typedef void (*NNSSndCaptureCallback)(void *buf0, void *buf1, u32 len, s32 format, void *arg);

typedef struct {
    s32 origin;
    s32 target;
    s32 counter;
    s32 frame;
} NNSSndFader;

typedef struct {
    BOOL active;
    s32 type;
    s32 format;
    void *buffer_p0;
    void *buffer_p1;
    u32 bufSize;
    u32 blockSize;
    u32 curBlock;
    u32 lockChBitMask;
    u32 chBitMask;
    u32 capBitMask;
    s32 alarmNo;
    s32 interrupts;
    NNSSndCaptureCallback callback;
    void *arg;
    NNSSndFader fader;
    s32 f4c;
    s32 volume;
} CaptureWork;

extern CaptureWork data_0215216c;

extern void func_0208010c(const void *p, u32 size);
extern s32 func_0206ff70(void);
extern BOOL func_0206ffd0(u32 mask);
extern void func_0206ff50(s32 alarmNo);
extern void func_0206ffb4(u32 mask);
extern BOOL func_0207002c(u32 mask);
extern void func_0208974c(s32 ch, SNDWaveFormat format, const void *data, s32 loop, s32 loopStart, s32 len, s32 volume, s32 shift, s32 timer, s32 pan);
extern void func_020898a8(s32 cap, SNDCaptureFormat format, void *buf, s32 len, BOOL loop, s32 in, s32 out);
extern void func_02089864(s32 alarmNo, u32 tick, u32 period, void (*handler)(void *), void *arg);
extern void func_02089694(s32 a, s32 b, s32 c, s32 d);
extern void func_02089964(u32 chBitMask, u32 capBitMask, u32 alarmBitMask, u32 flags);
extern void func_02073658(NNSSndFader *f);
extern void func_02073628(NNSSndFader *f, s32 target, s32 frames);
extern void func_02070ee4(void *arg);

static inline u32 BytesToSamples(u32 bytes, BOOL isPcm8)
{
    if (!isPcm8) {
        bytes >>= 1;
    }
    return bytes;
}

BOOL func_020711e4(s32 type, void *buffer_p0, void *buffer_p1, u32 bufSize, s32 format, s32 in, s32 out,
                   BOOL repeat, s32 sampleRate, s32 volume, s32 pan0, s32 pan1, s32 interrupts,
                   NNSSndCaptureCallback callback, void *arg)
{
    SNDCaptureFormat capFormat;
    SNDWaveFormat waveFormat;
    u32 chBitMask = 0;
    u32 alarmPeriod;
    s32 timer;
    s32 alarmNo = -1;
    u32 alarmOffset;
    BOOL isPcm8;
    CaptureWork *work = &data_0215216c;

    func_0208010c(buffer_p0, bufSize);
    func_0208010c(buffer_p1, bufSize);
    isPcm8 = (format == 1);
    timer = 16756991 / sampleRate;
    if (callback != NULL) {
        s32 t;
        u32 samples = BytesToSamples(bufSize, isPcm8);
        timer = (timer + 16) & ~31;
        t = timer >> 5;
        alarmPeriod = t * (samples / interrupts);
        alarmOffset = 32;
        if (!isPcm8) {
            alarmOffset >>= 1;
        }
        alarmOffset *= t;
    }
    waveFormat = isPcm8 ? SND_WAVE_FORMAT_PCM8 : SND_WAVE_FORMAT_PCM16;
    capFormat = isPcm8 ? SND_CAPTURE_FORMAT_PCM8 : SND_CAPTURE_FORMAT_PCM16;
    if (type != 2) {
        chBitMask = (1 << 1) | (1 << 3);
    }
    if (callback != NULL) {
        alarmNo = func_0206ff70();
        if (alarmNo < 0) {
            return FALSE;
        }
    }
    if (!func_0206ffd0(3)) {
        if (alarmNo >= 0) {
            func_0206ff50(alarmNo);
        }
        return FALSE;
    }
    if (!func_0207002c((1 << 1) | (1 << 3))) {
        if (alarmNo >= 0) {
            func_0206ff50(alarmNo);
        }
        func_0206ffb4(3);
        return FALSE;
    }
    func_0208974c(1, waveFormat, buffer_p0, repeat ? 1 : 2, 0, (s32)(bufSize >> 2), volume, 0, timer, pan0);
    func_020898a8(0, capFormat, buffer_p0, (s32)(bufSize >> 2), repeat, in, out);
    func_0208974c(3, waveFormat, buffer_p1, repeat ? 1 : 2, 0, (s32)(bufSize >> 2), volume, 0, timer, pan1);
    func_020898a8(1, capFormat, buffer_p1, (s32)(bufSize >> 2), repeat, in, out);
    if (alarmNo >= 0) {
        func_02089864(alarmNo, alarmPeriod + alarmOffset, alarmPeriod, func_02070ee4, work);
    }
    if (type == 1) {
        func_02089694(1, 2, 1, 1);
    }
    func_02089964(chBitMask, 3, alarmNo >= 0 ? 1 << alarmNo : 0, 0);
    work->active = TRUE;
    work->type = type;
    work->lockChBitMask = (1 << 1) | (1 << 3);
    work->chBitMask = chBitMask;
    work->capBitMask = 3;
    work->alarmNo = alarmNo;
    work->format = format;
    work->buffer_p0 = buffer_p0;
    work->buffer_p1 = buffer_p1;
    work->bufSize = bufSize;
    work->blockSize = bufSize / interrupts;
    work->curBlock = 0;
    work->interrupts = interrupts;
    work->callback = callback;
    work->arg = arg;
    work->volume = volume;
    func_02073658(&work->fader);
    func_02073628(&work->fader, volume << 8, 1);
    work->f4c = 0;
    return TRUE;
}
