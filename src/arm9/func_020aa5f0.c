#include "ctx.h"
extern u8 data_0215942c[];
extern u8 data_02159438[];
extern u8 *func_020038b8(u8 *p, s32 a);
extern void func_02005e18(u16 *a);
extern void func_020995b8(u16 *a);
extern u8 *func_0200563c(u8 *p, u16 *q);
extern void func_020054ec(u8 *p, s32 a, s32 b);
extern void func_0200560c(u8 *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g);
extern void func_020055dc(u8 *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g);
extern void func_020055b4(u8 *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
extern void func_02005514(u8 *p, s32 a, s32 b, s32 c, s32 d, s32 e);
extern void func_02099554(u8 *p);
extern void func_020054dc(u8 *p, s32 a);
extern void func_020054d4(u8 *p, s32 a);
extern void func_020054e4(u8 *p, s32 a);

void func_020aa5f0(u8 *param_1)
{
    u16 buf[20];
    u8 *puVar3;
    u8 *puVar5;
    u16 uVar1;
    u16 *puVar4;
    u8 *obj;

    puVar3 = func_020038b8(param_1, 20);
    *(u32 *)puVar3 = 0;
    *(u16 *)(puVar3 + 4) = 0;
    *(u16 *)(puVar3 + 6) = 0;
    *(s16 *)(puVar3 + 8) = -1;
    *(u16 *)(puVar3 + 10) = 0;
    *(u16 *)(puVar3 + 12) = 0;
    *(s32 *)(puVar3 + 16) = 3;
    if (**(u16 **)data_0215942c == 0xc002) {
        *(s32 *)(puVar3 + 16) = 0x13;
    }
    func_02005e18(buf);
    puVar4 = *(u16 **)data_0215942c;
    buf[1] = 0x11;
    buf[3] = 1;
    buf[5] = 1;
    buf[4] = 0;
    if (*puVar4 == 9 || *puVar4 == 12) {
        buf[2] = 0x16;
    } else {
        buf[2] = 0x14;
    }
    buf[6] = 0;
    if ((*puVar4 & 0x4000) != 0) {
        buf[2] = 0x18;
        buf[6] = 3;
    }
    if ((*puVar4 & 0x4000) == 0) {
        func_020995b8(buf);
    }
    buf[11] = 3;
    buf[12] = 0x10;
    uVar1 = *(u16 *)*(u8 **)data_0215942c;
    if ((uVar1 & 0x4000) == 0) {
        if (uVar1 == 9 || uVar1 == 12) {
            buf[7] = 8;
            buf[8] = 0x60;
            buf[14] = 4;
            buf[15] = 0x100;
        } else {
            buf[7] = 4;
            buf[8] = 0x60;
            buf[14] = 0x180;
            buf[15] = 8;
        }
    } else {
        buf[7] = 0x20;
        buf[8] = 0x40;
        buf[14] = 0x180;
        buf[19] = 0xc;
    }
    puVar5 = func_0200563c(param_1, buf);
    func_020054ec(puVar5, 1, 1);
    func_0200560c(puVar5 + 44, 2, 0, 0, 1, 5, 1, 0);
    if (*(u16 *)*(u8 **)data_0215942c == 9 || *(u16 *)*(u8 **)data_0215942c == 12) {
        func_020055dc(puVar5 + 120, 1, 0, 3, 0, 8, 2, 0);
        func_020055b4(puVar5 + 120, 2, 0, 3, 0, 12, 2);
    } else {
        func_020055b4(puVar5 + 120, 2, 0, 0, 0, 2, 1);
        func_02005514(puVar5 + 120, 0, 0, 1, 0, 0);
    }
    if ((*(u16 *)*(u8 **)data_0215942c & 0x4000) == 0) {
        func_02099554(puVar5);
    }
    func_020054dc(puVar5, 0x10);
    func_020054d4(puVar5, 0x00200010);
    if ((*(u16 *)*(u8 **)data_0215942c & 0x8000) != 0 && (*(u16 *)*(u8 **)data_0215942c & 0x4000) != 0) {
        func_020054e4(puVar5, 0x20);
    }
    *(u8 **)data_02159438 = puVar3;
    *(u8 **)puVar3 = puVar5;
    if ((*(u16 *)*(u8 **)data_0215942c & 0x4000) != 0) {
        *(u16 *)(puVar3 + 4) = (u16)(*(u16 *)(puVar3 + 4) | 1);
    } else {
        *(u16 *)(puVar3 + 4) = (u16)(*(u16 *)(puVar3 + 4) & ~1);
    }
}
