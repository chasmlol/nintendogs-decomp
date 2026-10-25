#pragma opt_loop_invariants off
#include "ctx.h"


typedef struct {
    u32 magic;
    u16 sum;
    u16 flag;
} SaveFooter;

typedef struct {
    u16 unk0;
    u16 num;
    s32 size;
    u32 unk8;
    u32 unkC;
    u8 *bufA;
    u8 *bufB;
} SaveInfo;

extern void func_02096a20(SaveInfo *info, u16 idx, s32 b);
extern void func_0206c7d4(void *src, void *dst, s32 size);

static inline BOOL CS12(u8 *data, SaveFooter *f, s32 size)
{
    u32 n;
    u16 sum;
    u32 j;
    if (f->magic == 0x544f5458)
        return FALSE;
    sum = 0;
    n = size - 4;
    for (j = 0; j < n; j++)
        sum += data[j];
    if (f->sum != sum)
        return FALSE;
    return TRUE;
}

s32 func_02096624(SaveInfo *info)
{
    s32 size;
    s32 ret;
    u16 i;

    ret = 0;
    size = info->size;
    for (i = 0; i < info->num; i++) {
        BOOL broken;
        SaveFooter *fb;
        SaveFooter *fa;
        BOOL empty;
        s32 state;
        s32 off;
        u8 *a;
        u8 *b;
        BOOL va;
        BOOL vb;

        off = info->size * i;
        a = info->bufA + off;
        b = info->bufB + off;
        state = 0;
        broken = FALSE;
        empty = FALSE;
        va = FALSE;
        fa = (SaveFooter *)(a + size - 8);
        if (*(u32 *)fa == 0x444f473f || *(u32 *)fa == 0x544f5458)
            va = TRUE;
        if (va) {
            if (CS12(a, fa, size))
                state |= 1;
            else
                broken = TRUE;
        } else {
            empty = TRUE;
        }
        vb = FALSE;
        fb = (SaveFooter *)(b + size - 8);
        if (*(u32 *)fb == 0x444f473f || *(u32 *)fb == 0x544f5458)
            vb = TRUE;
        if (vb) {
            if (CS12(b, fb, size))
                state |= 2;
            else
                broken = TRUE;
        } else {
            empty = TRUE;
        }
        switch (state) {
        case 0:
            func_02096a20(info, i, 1);
            if (broken)
                ret = 1;
            else if (empty)
                ret = 2;
            break;
        case 1:
            fb->flag |= 1;
            func_0206c7d4(a, b, size);
            break;
        case 2:
            fa->flag |= 1;
            func_0206c7d4(b, a, size);
            break;
        }
    }
    return ret;
}


