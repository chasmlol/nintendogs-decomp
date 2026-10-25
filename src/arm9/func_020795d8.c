#include "ctx.h"

extern u32 *data_02152f3c;

extern void func_020792d0(s32 *dst, u32 flags, u32 *src, u8 *obj);
extern void func_0207944c(s32 *dst, u32 flags, u32 *src, u8 *obj);
extern void func_02079b88(s32 *p);
extern void func_02078794(s32 *dst, u32 flags, u32 *src, u8 *obj);
extern void func_02078ae0(s32 *dst, u32 flags, u32 *src, u8 *obj);
extern s32 func_020785f4(s32 *dst, u8 *a, u8 *b, u32 c);
extern void func_020799c0(s32 *p);
extern void func_02078ee8(s32 *dst, u32 flags, u32 *src, u8 *obj);
extern void func_020790a0(s32 *dst, u32 flags, u32 *src, u8 *obj);
extern void func_02079b20(s32 *p);

void func_020795d8(u8 *param_1, s32 param_2, u32 param_3, s32 *param_4)
{
    int bVar1;
    u32 uVar2;
    s32 uVar7;
    u8 *iVar3;
    u32 *puVar4;
    u32 *obj;
    s32 buf[12];

    uVar2 = *(u16 *)(param_1 + param_2 * 2 + 0x14);
    uVar7 = *(u32 *)(param_1 + uVar2);
    iVar3 = param_1 + uVar2;
    if ((uVar7 & 1) != 0) {
        *param_4 = 7;
    } else {
        puVar4 = (u32 *)(iVar3 + 4);
        if ((param_3 & 0xfff) != 0 && (*(u32 *)(8 + param_1) & 1) != 0) {
            bVar1 = 1;
        } else {
            bVar1 = 0;
        }
        *param_4 = 0;
        if ((uVar7 & 6) == 0) {
            if ((uVar7 & 8) == 0) {
                if (bVar1) {
                    func_020792d0(param_4 + 0x13, param_3, puVar4, param_1);
                } else {
                    func_0207944c(param_4 + 0x13, param_3, puVar4, param_1);
                }
                puVar4 += 2;
            } else {
                param_4[0x13] = *puVar4;
                puVar4 += 1;
            }
            if ((uVar7 & 0x10) == 0) {
                if (bVar1) {
                    func_020792d0(param_4 + 0x14, param_3, puVar4, param_1);
                } else {
                    func_0207944c(param_4 + 0x14, param_3, puVar4, param_1);
                }
                puVar4 += 2;
            } else {
                param_4[0x14] = *puVar4;
                puVar4 += 1;
            }
            if ((uVar7 & 0x20) == 0) {
                if (bVar1) {
                    func_020792d0(param_4 + 0x15, param_3, puVar4, param_1);
                } else {
                    func_0207944c(param_4 + 0x15, param_3, puVar4, param_1);
                }
                puVar4 += 2;
            } else {
                param_4[0x15] = *puVar4;
                puVar4 += 1;
            }
        } else if ((uVar7 & 2) != 0) {
            *param_4 = *param_4 | 4;
        } else {
            func_02079b88(param_4);
        }
        if ((uVar7 & 0xc0) == 0) {
            if ((uVar7 & 0x100) == 0) {
                if (bVar1) {
                    func_02078794(param_4 + 10, param_3, puVar4, param_1);
                } else {
                    func_02078ae0(param_4 + 10, param_3, puVar4, param_1);
                }
                puVar4 = puVar4 + 2;
            } else {
                iVar3 = (u8 *)func_020785f4(param_4 + 10, param_1 + *(s32 *)(param_1 + 0xc),
                                            param_1 + *(s32 *)(param_1 + 0x10), *puVar4);
                if (iVar3 != 0) {
                    s32 a15 = param_4[15];
                    s32 a10 = param_4[10];
                    s32 a13 = param_4[13];
                    s32 a12 = param_4[12];
                    s32 a11 = param_4[11];
                    s32 a14 = param_4[14];
                    param_4[0x10] = (a11 * a15 - a12 * a14) >> 12;
                    param_4[0x11] = (a12 * a13 - a10 * a15) >> 12;
                    param_4[0x12] = (a10 * a14 - a11 * a13) >> 12;
                }
                puVar4 += 1;
            }
        } else if ((uVar7 & 0x40) != 0) {
            *param_4 = *param_4 | 2;
        } else {
            func_020799c0(param_4);
        }
        if ((uVar7 & 0x600) == 0) {
            if ((uVar7 & 0x800) == 0) {
                if (bVar1) {
                    func_02078ee8(&buf[0], param_3, puVar4, param_1);
                } else {
                    func_020790a0(&buf[0], param_3, puVar4, param_1);
                }
                buf[6] = buf[0];
                buf[9] = buf[1];
            } else {
                buf[6] = puVar4[0];
                buf[9] = puVar4[1];
            }
            if ((uVar7 & 0x1000) == 0) {
                if (bVar1) {
                    func_02078ee8(&buf[2], param_3, puVar4 + 2, param_1);
                } else {
                    func_020790a0(&buf[2], param_3, puVar4 + 2, param_1);
                }
                buf[7] = buf[2];
                buf[10] = buf[3];
            } else {
                buf[7] = puVar4[2];
                buf[10] = puVar4[3];
            }
            if ((uVar7 & 0x2000) == 0) {
                if (bVar1) {
                    func_02078ee8(&buf[4], param_3, puVar4 + 4, param_1);
                } else {
                    func_020790a0(&buf[4], param_3, puVar4 + 4, param_1);
                }
                buf[8] = buf[4];
                buf[11] = buf[5];
            } else {
                buf[8] = puVar4[4];
                buf[11] = puVar4[5];
            }
        } else if ((0x200 & uVar7) != 0) {
            *param_4 = *param_4 | 1;
        } else {
            func_02079b20(param_4);
            return;
        }
    }
    {
        s32 *pb;
        u32 flg = (*param_4 & 1) ? 4 : 0;
        obj = data_02152f3c;
        pb = &buf[6];
        ((void (*)(s32 *, s32 *, u32, u32))obj[0x3a])(param_4, pb, obj[0], flg);
    }
}
