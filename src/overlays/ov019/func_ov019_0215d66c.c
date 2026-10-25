#include "ctx.h"

extern void *func_ov019_021611a0(void);
extern void func_02066bdc(u32 *a, u32 *b);
extern void func_01ff810c(void *a, void *b, void *c);
extern void func_01ff8058(void *a, void *b, void *c);

void func_ov019_0215d66c(u8 *p)
{
    u8 *t;
    s32 idx;
    s32 mat[15];
    u32 auStack_44[13];

    idx = (s16)(*(s16 *)(p + 0x1c) - 3);
    if (idx < 0 || idx >= 50) {
        t = 0;
    } else {
        t = *(u8 **)((u8 *)func_ov019_021611a0() + idx * 4 + 4);
    }
    if (t == 0) {
        return;
    }
    if (((t != 0) ? *(s16 *)(t + 0x24) : -1) != 9) {
        return;
    }
    auStack_44[0] = 0x1000;
    auStack_44[1] = 0;
    auStack_44[2] = 0;
    auStack_44[3] = 0;
    auStack_44[4] = 0;
    auStack_44[5] = 0x1000;
    auStack_44[6] = 0;
    auStack_44[7] = 0xfffff000;
    auStack_44[8] = 0;
    func_02066bdc(auStack_44, auStack_44);
    func_01ff810c(auStack_44, t + 0x48, auStack_44);
    mat[0] = 0;
    mat[1] = 0x14d2;
    mat[2] = 0x2b3e;
    mat[3] = 0;
    mat[4] = -0x1000;
    mat[5] = 0;
    mat[6] = 0x1000;
    mat[7] = 0;
    mat[8] = 0;
    mat[9] = 0;
    mat[10] = 0;
    mat[11] = 0x1000;
    func_01ff810c(mat + 3, auStack_44, p + 0x48);
    func_01ff8058(mat, auStack_44, p + 0x3c);
}
