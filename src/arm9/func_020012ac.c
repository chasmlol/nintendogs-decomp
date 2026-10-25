#include "ctx.h"

typedef struct { s16 x, y, sx, sy; } Out;

extern u32 func_02080b08(void);
extern void func_02080b1c(u32 irq);

#define reg_CP_DIVCNT (*(vu16 *)0x04000280)
#define reg_CP_DIV_NUMER_L (*(vu32 *)0x04000290)
#define reg_CP_DIV_DENOM (*(volatile u64 *)0x04000298)
#define reg_CP_DIV_RESULT_L (*(vu32 *)0x040002a0)

static inline void CP_SetDivControl(u16 mode)
{
    reg_CP_DIVCNT = mode;
}

static inline void CP_SetDivImm32_32(u32 numer, u32 denom)
{
    reg_CP_DIV_NUMER_L = numer;
    reg_CP_DIV_DENOM = denom;
}

static inline void CP_SetDiv32_32(u32 numer, u32 denom)
{
    CP_SetDivControl(0);
    CP_SetDivImm32_32(numer, denom);
}

static inline void CP_WaitDiv(void)
{
    while (reg_CP_DIVCNT & 0x8000) {
    }
}

static inline s32 CP_GetDivResult32(void)
{
    CP_WaitDiv();
    return (s32)reg_CP_DIV_RESULT_L;
}

u32 func_020012ac(Out *out, u16 x1, u16 y1, u16 u1, u16 v1, u16 x2, u16 y2, u16 u2, u16 v2)
{
    u32 irq;
    s32 r;
    s32 dy, dv;

    if (x1 >= 4096 || y1 >= 4096 || x2 >= 4096 || y2 >= 4096) {
        return 1;
    }
    if (u1 >= 256 || u2 >= 256 || v1 >= 192 || v2 >= 192) {
        return 1;
    }
    if (u1 == u2 || v1 == v2 || x1 == x2 || y1 == y2) {
        return 1;
    }
    irq = func_02080b08();
    CP_SetDiv32_32((x1 - x2) << 8, u1 - u2);
    dy = y1 - y2;
    dv = v1 - v2;
    r = CP_GetDivResult32();
    CP_SetDiv32_32(dy << 8, dv);
    if (r >= 0x8000 || r < -0x8000) {
        func_02080b1c(irq);
        return 1;
    }
    out->sx = r;
    r = (s16)((((x1 + x2) << 8) - out->sx * (u1 + u2)) >> 7);
    if (r >= 0x8000 || r < -0x8000) {
        func_02080b1c(irq);
        return 1;
    }
    out->x = r;
    r = CP_GetDivResult32();
    func_02080b1c(irq);
    if (r >= 0x8000 || r < -0x8000) {
        return 1;
    }
    out->sy = r;
    r = (s16)((((y1 + y2) << 8) - out->sy * (v1 + v2)) >> 7);
    if (r >= 0x8000 || r < -0x8000) {
        return 1;
    }
    out->y = r;
    return 0;
}
