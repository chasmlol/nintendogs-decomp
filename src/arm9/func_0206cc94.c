#include "ctx.h"

extern u32 data_02150eac[];
extern u32 func_02080b08(void);
extern void func_02080b1c(u32 o);

typedef union { u32 raw; struct { u32 idx:5; u32 flag:1; u32 rest:26; } b; } B;

void func_0206cc94(void)
{
    B local;
    s32 st;
    u32 old;
    u32 idx;
    u32 v;
    void (*h)(u32, u32, s32);
    vu16 *status = (vu16 *)0x04000184;
    vu32 *out = (vu32 *)0x04000188;
    vu32 *src = (vu32 *)0x04100000;

loop:
    if ((*status & 0x4000) != 0) {
        *status = *status | 0xc000;
        st = -3;
    } else {
        old = func_02080b08();
        if ((*status & 0x100) != 0) {
            func_02080b1c(old);
            st = -4;
        } else {
            local.raw = *src;
            func_02080b1c(old);
            st = 0;
        }
    }
    if (st == -4) {
        return;
    }
    if (st == -3) {
        goto loop;
    }
    idx = local.b.idx;
    if (idx == 0) {
        goto loop;
    }
    h = (void (*)(u32, u32, s32))data_02150eac[idx];
    if (h != 0) {
        h(idx, local.b.rest, local.b.flag);
        goto loop;
    }
    if (local.b.flag != 0) {
        goto loop;
    }
    local.b.flag = 1;
    if ((*status & 0x4000) != 0) {
        *status = *status | 0xc000;
        goto loop;
    }
    old = func_02080b08();
    if ((*status & 2) != 0) {
        func_02080b1c(old);
        goto loop;
    }
    *out = local.raw;
    func_02080b1c(old);
    goto loop;
}
