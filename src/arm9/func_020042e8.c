#include "ctx.h"

#define R16(a) (*(vu16 *)(a))
#define R32(a) (*(vu32 *)(a))

extern u8 *data_0214e778;

extern void func_02068edc(u32 a);
extern void func_0206c834(u32 a, u32 b, u32 c);
extern void func_020689b0(void);
extern void func_02005fd0(void);
extern void func_02069724(u32 a);
extern void func_020695b8(u32 a);
extern void func_020694a4(u32 a);
extern void func_020693ec(u32 a);
extern void func_020691e8(u32 a);
extern void func_020690f4(u32 a);
extern void func_02068fb4(u32 a);
extern void func_02068e30(u32 a);
extern void func_02068db4(u32 a);
extern void func_02068d28(u32 a);
extern void func_02068c9c(u32 a);
extern void func_02068efc(u32 a);
extern void func_02068384(u32 a, u32 b, u32 c);
extern void func_02068368(u32 a);
extern void func_02077cec(void);
extern void func_0206a2ac(u16 a, u8 b, s16 c, u32 d, u32 e);
extern void func_0206a18c(u32 a);
extern void func_02004f10(void *p, u32 a);
extern void func_0200494c(void *p, u32 a);


#define reg_GX_DISPCNT (*(vu32 *)0x04000000)
#define reg_GXS_DB_DISPCNT (*(vu32 *)0x04001000)
typedef enum { GX_OBJVRAMMODE_CHAR_2D = 0, GX_OBJVRAMMODE_CHAR_1D_32K = 0x00000010, GX_OBJVRAMMODE_CHAR_1D_64K = 0x00100010, GX_OBJVRAMMODE_CHAR_1D_128K = 0x00200010, GX_OBJVRAMMODE_CHAR_1D_256K = 0x00300010 } GXOBJVRamModeChar;
typedef enum { GX_OBJVRAMMODE_BMP_2D_W128 = 0, GX_OBJVRAMMODE_BMP_2D_W256 = 0x00000020, GX_OBJVRAMMODE_BMP_1D_128K = 0x00000040, GX_OBJVRAMMODE_BMP_1D_256K = 0x00400040 } GXOBJVRamModeBmp;
static inline void GX_SetOBJVRamModeChar(GXOBJVRamModeChar mode)
{
    reg_GX_DISPCNT = (u32)(reg_GX_DISPCNT & ~(0x00300010) | mode);
}
static inline void GX_SetOBJVRamModeBmp(GXOBJVRamModeBmp mode)
{
    reg_GX_DISPCNT = (u32)(reg_GX_DISPCNT & ~(0x00400060) | mode);
}
static inline void GXS_SetOBJVRamModeChar(GXOBJVRamModeChar mode)
{
    reg_GXS_DB_DISPCNT = (u32)(reg_GXS_DB_DISPCNT & ~(0x00300010) | mode);
}
static inline void GXS_SetOBJVRamModeBmp(GXOBJVRamModeBmp mode)
{
    reg_GXS_DB_DISPCNT = (u32)(reg_GXS_DB_DISPCNT & ~(0x00000060) | mode);
}

void func_020042e8(u8 *param_1)
{
    u32 rv;
    u32 rv2;
    vu32 z4;
    vu32 z8;
    vu32 zC;
    vu32 z10;
    vu32 z14;
    u32 uVar6;

    data_0214e778 = param_1;
    func_02068edc(0x1ff);
    zC = 0;
    func_0206c834(zC, 0x6800000, 0xa4000);
    func_020689b0();
    z4 = 0xc0;
    func_0206c834(z4, 0x7000000, 0x400);
    z8 = 0xc0;
    func_0206c834(z8, 0x7000400, 0x400);
    z10 = 0;
    func_0206c834(z10, 0x5000000, 0x400);
    z14 = 0;
    func_0206c834(z14, 0x5000400, 0x400);
    func_02005fd0();
    if (*(u16 *)(data_0214e778 + 14) != 0) {
        func_02069724(*(u16 *)(data_0214e778 + 14));
    }
    if (*(u16 *)(data_0214e778 + 16) != 0) {
        func_020695b8(*(u16 *)(data_0214e778 + 16));
    }
    if (*(u16 *)(data_0214e778 + 18) != 0) {
        func_020694a4(*(u16 *)(data_0214e778 + 18));
    }
    if (*(u16 *)(data_0214e778 + 20) != 0) {
        func_020693ec(*(u16 *)(data_0214e778 + 20));
    }
    if (*(u16 *)(data_0214e778 + 22) != 0) {
        func_020691e8(*(u16 *)(data_0214e778 + 22));
    }
    if (*(u16 *)(data_0214e778 + 24) != 0) {
        func_020690f4(*(u16 *)(data_0214e778 + 24));
    }
    if (*(u16 *)(data_0214e778 + 26) != 0) {
        func_02068fb4(*(u16 *)(data_0214e778 + 26));
    }
    if (*(u16 *)(data_0214e778 + 28) != 0) {
        func_02068e30(*(u16 *)(data_0214e778 + 28));
    }
    if (*(u16 *)(data_0214e778 + 30) != 0) {
        func_02068db4(*(u16 *)(data_0214e778 + 30));
    }
    if (*(u16 *)(data_0214e778 + 32) != 0) {
        func_02068d28(*(u16 *)(data_0214e778 + 32));
    }
    if (*(u16 *)(data_0214e778 + 34) != 0) {
        func_02068c9c(*(u16 *)(data_0214e778 + 34));
    }
    if (*(u16 *)(data_0214e778 + 36) != 0) {
        func_02068efc(*(u16 *)(data_0214e778 + 36));
    }
    if (*(u16 *)(data_0214e778 + 38) != 0) {
        func_02068edc(*(u16 *)(data_0214e778 + 38));
    }
    func_02068384(*(u16 *)(param_1 + 6), *(u16 *)(param_1 + 8), *(u16 *)(param_1 + 10));
    R32(0x04000000) = (R32(0x04000000) & 0xffffe0ff) | ((u32)*(u16 *)(param_1 + 2) << 8);
    func_02068368(*(u16 *)(param_1 + 12));
    R32(0x04001000) = (R32(0x04001000) & 0xffffe0ff) | ((u32)*(u16 *)(param_1 + 4) << 8);
    if (*(u16 *)(param_1 + 10) == 1) {
        func_02077cec();
        R16(0x04000060) = R16(0x04000060) & 0xffffcffd;
        R16(0x04000060) = (R16(0x04000060) & 0xffffcfff) | 0x10;
        uVar6 = 0x7fff;
        R16(0x04000060) = (R16(0x04000060) & 0xffffcfff) | 4;
        R16(0x04000340) = 0;
        R16(0x04000060) = (R16(0x04000060) & 0xffffcfff) | 8;
        R16(0x04000050) = 0;
        R32(0x04000540) = ((u32)*(u8 *)(*(u8 **)(param_1 + 0x74) + 3) << 1) | (u32)*(u8 *)(*(u8 **)(param_1 + 0x74) + 2);
        func_0206a2ac(**(u16 **)(param_1 + 0x74) & uVar6, (**(u16 **)(param_1 + 0x74) & 0x8000) >> 15, uVar6, 0x3f, 0);
    }
    if ((*(u16 *)(param_1 + 2) & 1) != 0) {
        u16 *pf = (u16 *)(param_1 + 44);
        R16(0x04000008) = (R16(0x04000008) & 0xfffffffc) | pf[0];
        if (pf[1] != 0) {
            R16(0x04000008) = R16(0x04000008) | 0x40;
        } else {
            R16(0x04000008) = R16(0x04000008) & 0xffffffbf;
        }
        if (*(u16 *)(param_1 + 10) == 1) {
            func_0206a18c(0);
        } else {
            R32(0x04000010) = 0;
            R16(0x04000008) = (((u32)pf[2] << 14) | (R16(0x04000008) & 0x43)) | ((u32)pf[3] << 7) | ((u32)pf[4] << 8) | ((u32)pf[5] << 2) | ((u32)pf[6] << 13);
        }
    }
    if ((*(u16 *)(param_1 + 4) & 1) != 0) {
        u16 *pf = (u16 *)(param_1 + 120);
        vu16 *puVar3;
        vu16 *puVar7;
        R32(0x04001010) = 0;
        puVar3 = (vu16 *)0x04001008;
        *puVar3 = (*puVar3 & 0xfffffffc) | pf[0];
        puVar7 = (vu16 *)0x04001008;
        if (pf[1] != 0) {
            *puVar3 = *puVar3 | 0x40;
        } else {
            *puVar3 = *puVar3 & 0xffffffbf;
        }
        *puVar7 = (((u32)pf[2] << 14) | (*puVar7 & 0x43)) | ((u32)pf[3] << 7) | ((u32)pf[4] << 8) | ((u32)pf[5] << 2) | ((u32)pf[6] << 13);
    }
    if ((*(u16 *)(param_1 + 2) & 2) != 0) {
        u16 *pf = (u16 *)(param_1 + 60);
        vu16 *puVar3;
        vu16 *puVar7;
        R32(0x04000014) = 0;
        puVar3 = (vu16 *)0x0400000a;
        *puVar3 = (*puVar3 & 0xfffffffc) | pf[0];
        puVar7 = (vu16 *)0x0400000a;
        if (pf[1] != 0) {
            *puVar3 = *puVar3 | 0x40;
        } else {
            *puVar3 = *puVar3 & 0xffffffbf;
        }
        *puVar7 = (((u32)pf[2] << 14) | (*puVar7 & 0x43)) | ((u32)pf[3] << 7) | ((u32)pf[4] << 8) | ((u32)pf[5] << 2) | ((u32)pf[6] << 13);
    }
    if ((*(u16 *)(param_1 + 4) & 2) != 0) {
        u16 *pf = (u16 *)(param_1 + 136);
        vu16 *puVar3;
        vu16 *puVar7;
        R32(0x04001014) = 0;
        puVar3 = (vu16 *)0x0400100a;
        *puVar3 = (*puVar3 & 0xfffffffc) | pf[0];
        puVar7 = (vu16 *)0x0400100a;
        if (pf[1] != 0) {
            *puVar3 = *puVar3 | 0x40;
        } else {
            *puVar3 = *puVar3 & 0xffffffbf;
        }
        *puVar7 = (((u32)pf[2] << 14) | (*puVar7 & 0x43)) | ((u32)pf[3] << 7) | ((u32)pf[4] << 8) | ((u32)pf[5] << 2) | ((u32)pf[6] << 13);
    }
    if ((*(u16 *)(param_1 + 2) & 4) != 0) {
        func_02004f10(param_1 + 76, 1);
    }
    if ((*(u16 *)(param_1 + 4) & 4) != 0) {
        func_02004f10(param_1 + 152, 0);
    }
    if ((*(u16 *)(param_1 + 2) & 8) != 0) {
        func_0200494c(param_1 + 92, 1);
    }
    if ((*(u16 *)(param_1 + 4) & 8) != 0) {
        func_0200494c(param_1 + 168, 0);
    }
    if ((*(u16 *)(param_1 + 2) & 0x10) != 0) {
        GX_SetOBJVRamModeChar(*(GXOBJVRamModeChar *)(param_1 + 0x6c));
        GX_SetOBJVRamModeBmp(*(GXOBJVRamModeBmp *)(param_1 + 0x70));
    }
    if ((*(u16 *)(param_1 + 4) & 0x10) != 0) {
        GXS_SetOBJVRamModeChar(*(GXOBJVRamModeChar *)(param_1 + 0xb8));
        GXS_SetOBJVRamModeBmp(*(GXOBJVRamModeBmp *)(param_1 + 0xbc));
    }
    R16(0x04000304) = R16(0x04000304) | 0x8000;
}
