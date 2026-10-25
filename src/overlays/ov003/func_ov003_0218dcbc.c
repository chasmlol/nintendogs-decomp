#include "ctx.h"

extern u32 *data_0214f464;

extern void func_0203e908(u8 *p, s32 v);
extern s32 func_0202e29c(u8 *p);

#define LCG_STEP(v) do { (v) = *data_0214f464 * 0x10dcd + 1; *data_0214f464 = (v); } while (0)

u32 func_ov003_0218dcbc(u8 *param_1)
{
    u32 v;
    u32 c;

    switch (*(s8 *)(param_1 + 0x8d)) {
    case 2:
        LCG_STEP(v);
        switch ((u16)((((u32)(u16)v) * 5u) >> 16)) {
        case 0: func_0203e908(param_1, 0x387); return 1;
        case 1: func_0203e908(param_1, 0x394); return 1;
        case 2: func_0203e908(param_1, 0x393); return 1;
        case 3: func_0203e908(param_1, 0x38e); return 1;
        case 4: func_0203e908(param_1, 0x389); return 1;
        }
        goto ret0;
    case 0:
        LCG_STEP(v);
        switch ((u16)((((u32)(u16)v) * 6u) >> 16)) {
        case 0: func_0203e908(param_1, 0x387); return 1;
        case 1: func_0203e908(param_1, 0x394); return 1;
        case 2: func_0203e908(param_1, 0x392); return 1;
        case 3: func_0203e908(param_1, 0x393); return 1;
        case 4: func_0203e908(param_1, 0x38e); return 1;
        case 5: func_0203e908(param_1, 0x388); return 1;
        }
        goto ret0;
    case 3:
        LCG_STEP(v);
        switch ((u16)((((u32)(u16)v) * 7u) >> 16)) {
        case 0: func_0203e908(param_1, 0x387); return 1;
        case 1: func_0203e908(param_1, 0x394); return 1;
        case 2: func_0203e908(param_1, 0x388); return 1;
        case 3: func_0203e908(param_1, 0x395); return 1;
        case 4: func_0203e908(param_1, 0x389); return 1;
        case 5: func_0203e908(param_1, 0x393); return 1;
        case 6: func_0203e908(param_1, 0x38e); return 1;
        }
        goto ret0;
    case 4:
        LCG_STEP(v);
        c = (u16)((v << 16) >> 30);
        if (c == 0) goto a4A;
        if (c == 1) goto a4B;
    a4A:
        func_0203e908(param_1, 0x387);
        return 1;
    a4B:
        func_0203e908(param_1, 0x394);
        return 1;
    case 1:
        LCG_STEP(v);
        switch ((u16)((((u32)(u16)v) * 5u) >> 16)) {
        case 0: func_0203e908(param_1, 0x387); return 1;
        case 1: func_0203e908(param_1, 0x394); return 1;
        case 2: func_0203e908(param_1, 0x386); return 1;
        case 3: func_0203e908(param_1, 0x392); return 1;
        case 4: func_0203e908(param_1, 0x389); return 1;
        }
        goto ret0;
    case 5:
        LCG_STEP(v);
        c = (u16)((v << 16) >> 31);
        switch (c) {
        case 0: goto a5A;
        case 1: goto a5B;
        }
        goto ret0;
    a5A:
        func_0203e908(param_1, 0x386);
        return 1;
    a5B:
        func_0203e908(param_1, 0x397);
        return 1;
    case 6:
        if (func_0202e29c(param_1) == 0) {
            goto step2;
        }
        LCG_STEP(v);
        c = (u16)((v << 16) >> 31);
        switch (c) {
        case 0: goto a6A;
        case 1: goto a6B;
        }
        goto ret0;
    a6A:
        func_0203e908(param_1, 0x386);
        return 1;
    a6B:
        func_0203e908(param_1, 0x388);
        return 1;
    step2:
        LCG_STEP(v);
        c = (u16)((v << 16) >> 31);
        switch (c) {
        case 0: goto s6A;
        case 1: goto s6B;
        }
        goto ret0;
    s6A:
        func_0203e908(param_1, 0x387);
        return 1;
    s6B:
        func_0203e908(param_1, 0x388);
        return 1;
    case 7:
        LCG_STEP(v);
        c = (u16)((v << 16) >> 31);
        switch (c) {
        case 0: goto a7A;
        case 1: goto a7B;
        }
        goto ret0;
    a7A:
        func_0203e908(param_1, 0x399);
        return 1;
    a7B:
        func_0203e908(param_1, 0x395);
        return 1;
    case 8:
        if (func_0202e29c(param_1) == 0) {
            goto step2b;
        }
        LCG_STEP(v);
        c = (u16)((v << 16) >> 31);
        switch (c) {
        case 0: goto a8A;
        case 1: goto a8B;
        }
        goto ret0;
    a8A:
        func_0203e908(param_1, 0x395);
        return 1;
    a8B:
        func_0203e908(param_1, 0x39a);
        return 1;
    step2b:
        LCG_STEP(v);
        c = (u16)((v << 16) >> 31);
        switch (c) {
        case 0: goto s8A;
        case 1: goto s8B;
        }
        goto ret0;
    s8A:
        func_0203e908(param_1, 0x387);
        return 1;
    s8B:
        func_0203e908(param_1, 0x39a);
        return 1;
    default:
        goto ret0;
    }
ret0:
    return 0;
}
