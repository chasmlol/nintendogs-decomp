#pragma avoid_byte strb
#include "ctx.h"

typedef struct {
    u32 type;
    void *buffer;
    u32 size;
    u32 rate;
    BOOL loop_enable;
    void *full_callback;
    void *full_arg;
} MICAutoParam;

typedef struct {
    u16 count;
    u16 peakPos;
    u16 peak;
} MicResult;

extern u8 data_0215b228;
extern u8 data_02144a74;
extern s16 data_0215b25e[];
extern MicResult data_0215b258;
extern s32 data_0215b234;
extern s32 data_0215b238;
extern s32 data_0215b230;
extern s16 *data_0215b22c;
extern MICAutoParam data_0215b23c;

extern void *func_02001f04(void);
extern void func_0206c7bc(u16 data, void *dest, u32 size);
extern void func_020800d4(const void *addr, u32 size);

#define MATH_ABS(a) (((a) < 0) ? -(a) : (a))

static inline void MI_CpuFill16(void *dest, u16 data, u32 size)
{
    func_0206c7bc(*(u16 *)&data, dest, size);
}

static inline void MI_CpuClear16(void *dest, u32 size)
{
    MI_CpuFill16(dest, 0, size);
}

MicResult *func_020dfa1c(void)
{
    if (data_0215b228 != 0) {
        if (data_02144a74 != 0) {
            MI_CpuClear16(data_0215b25e, 0x10a);
            data_0215b258.count = 133;
            data_02144a74 = 0;
            data_0215b258.peakPos = 0;
            data_0215b258.peak = 0;
        }
        if (data_0215b228 != 255) {
            data_0215b228--;
        }
    } else if (data_0215b234 != 0 && data_0215b238 != 0 && data_0215b230 == 0) {
        s16 *end = func_02001f04();
        s16 peak = 0;
        s16 peakPos = 0;
        s16 count = 0;
        s16 *dst = data_0215b25e;
        func_020800d4((void *)((u32)data_0215b22c & ~31), 32);
        while (data_0215b22c != end && count < 500) {
            s16 v = *data_0215b22c;
            *dst++ = v;
            v = MATH_ABS(v);
            if (peak < v) {
                peak = v;
                peakPos = count;
            }
            count++;
            data_0215b22c++;
            if ((u32)data_0215b22c >= (u32)data_0215b23c.buffer + data_0215b23c.size) {
                data_0215b22c = data_0215b23c.buffer;
            }
            if (((u32)data_0215b22c & 31) == 0) {
                func_020800d4(data_0215b22c, 32);
            }
        }
        if (data_0215b22c != end) {
            data_0215b22c = end;
        }
        data_0215b258.peak = peak;
        data_0215b258.peakPos = peakPos;
        data_0215b258.count = count;
    } else {
        data_0215b258.count = 0;
    }
    if (data_0215b230 != 0) {
        data_0215b230--;
    }
    return &data_0215b258;
}
