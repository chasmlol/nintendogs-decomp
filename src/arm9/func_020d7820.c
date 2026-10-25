#include "ctx.h"

extern u8 *data_0215ad40;
extern u8 data_0214498c[];

s32 func_020d5318(void);
void func_0206f448(u32 a, u32 b, void *c);
void func_0206fa0c(void *a, u32 b, void *c, s32 d, s32 e, s32 f);
s32 func_0206f284(void *a, u32 b);
void func_020d51d0(u32 a, u32 b);
void func_0206f380(void *a);
u16 func_020d530c(void);
void func_0206fc00(u32 a);
void func_0206f878(u32 a);
void func_0206f2bc(void);
u32 func_0206f1ec(void *a, u32 b);
void func_020d5130(u32 a, u32 b);
void func_020d74c0(void);

void func_020d7820(u16 *param_1)
{
    s32 iVar6;
    s32 sVar5;
    u16 uVar5;
    u32 uVar7;
    s32 i;
    u32 z;

    iVar6 = func_020d5318();
    uVar5 = *param_1;
    sVar5 = uVar5;
    if (sVar5 > 1) goto LAB_sw;
    if (sVar5 == 1) goto LAB_1d4;
    return;
LAB_sw:
    switch (sVar5) {
    case 8:
        if (iVar6 != 2) {
            return;
        }
        func_0206f448(0x200, 0x200, func_020d74c0);
        *(u16 *)(data_0215ad40 + 0x10a) = 2;
        i = 0;
        *(u32 *)(data_0215ad40 + 0x10c) = i;
        *(u32 *)(data_0215ad40 + 0x110) = i;
        z = i;
        do {
            ((u32 *)(data_0215ad40 + 0x40))[i] = z;
            i = i + 1;
        } while (i < 16);
        *(u32 *)(data_0215ad40 + 0x44) = *(u32 *)(data_0215ad40 + 0x120);
        func_0206fa0c(data_0215ad40 + 8, 0x438, data_0214498c, *(s32 *)(data_0215ad40 + 0x118),
                      *(s32 *)(data_0215ad40 + 0x11c), 0);
        if (*(u16 *)(param_1 + 4) != 7) {
            return;
        }
        uVar5 = (u16)func_0206f284(*(void **)(data_0215ad40 + 0x3c), 0x200);
        func_020d51d0(*(u32 *)(data_0215ad40 + 0x3c), (u32)uVar5);
        return;
    case 9:
    case 10:
    case 11:
        goto LAB_end;
    case 12:
        func_0206f380(func_020d74c0);
        *(u16 *)(data_0215ad40 + 0x10a) = 1;
        i = 0;
        *(u32 *)(data_0215ad40 + 0x10c) = i;
        *(u32 *)(data_0215ad40 + 0x110) = i;
        z = i;
        do {
            ((u32 *)(data_0215ad40 + 0x40))[i] = z;
            i = i + 1;
        } while (i < 16);
        *(u32 *)(data_0215ad40 + 0x40) = *(u32 *)(data_0215ad40 + 0x120);
        func_0206fa0c(data_0215ad40 + 8, 0x438, data_0214498c, *(s32 *)(data_0215ad40 + 0x118),
                      *(s32 *)(data_0215ad40 + 0x11c), 0);
        uVar5 = func_020d530c();
        func_0206fc00((u32)uVar5);
        return;
    case 14:
        goto LAB_a10;
    case 15:
        goto LAB_f;
    default:
        goto LAB_end;
    }
LAB_1d4:
    func_0206f878(0xffff);
    func_0206f2bc();
    *(u32 *)(data_0215ad40 + 4) = 0;
LAB_a10:
    if (*(u16 *)(param_1 + 2) != 10) {
        return;
    }
    if (iVar6 == 2) {
        uVar5 = (u16)func_0206f284(*(void **)(data_0215ad40 + 0x3c), 0x200);
        func_020d51d0(*(u32 *)(data_0215ad40 + 0x3c), (u32)uVar5);
        return;
    }
    if (iVar6 != 3) {
        return;
    }
    uVar7 = (u16)func_0206f1ec(*(void **)(data_0215ad40 + 0x3c), 0x200);
    func_020d5130(*(u32 *)(data_0215ad40 + 0x3c), uVar7);
    return;
LAB_f:
    if (iVar6 == 2) {
        uVar5 = (u16)func_0206f284(*(void **)(data_0215ad40 + 0x3c), 0x200);
        func_020d51d0(*(u32 *)(data_0215ad40 + 0x3c), (u32)uVar5);
        return;
    }
    if (iVar6 != 3) {
        return;
    }
    uVar7 = (u16)func_0206f1ec(*(void **)(data_0215ad40 + 0x3c), 0x200);
    func_020d5130(*(u32 *)(data_0215ad40 + 0x3c), uVar7);
LAB_end:
    return;
}
