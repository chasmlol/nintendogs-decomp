#include "ctx.h"

extern u32 *func_020038b8(int a, int b);
extern void func_0206c3dc(int a, int b, int c, int d);
extern void func_0206c2d0(int a, int b, int c, int d);
extern void func_02094afc(int a, int b, int c);
extern void func_020dd534(int a, int b);
extern void func_020ddee0(int a, int b, int c);
extern u32 func_020e1fb0(int a, int b);
extern u32 func_020e1f90(int a, int b);
extern u32 func_020e1f58(void);
extern u64 func_0205e270(int a, int b);

u32 *func_ov010_0215d704(int param_1)
{
    u32 *puVar1;
    u32 uVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    u32 uVar9;
    u64 uVar10;
    u8 *pb;
    s32 iq;
    s16 *psVar8;
    s16 *psVar7;
    s32 zA;
    s32 zB;

    puVar1 = func_020038b8(param_1, 0xb164);
    pb = (u8 *)puVar1;
    func_0206c3dc(3, (int)(pb + 24), 0x11111111, 0x6000);
    func_0206c2d0(3, (int)(pb + 0x6018), 0xffff, 0x20);
    iVar3 = (int)(pb + 0x6038);
    *(u16 *)(pb + 0x601a) = 0xffff;
    *(u16 *)(pb + 0x601c) = 0;
    *(u16 *)(pb + 0x601e) = 0x1f;
    *(u16 *)(pb + 0x6020) = 0x3e0;
    *(u16 *)(pb + 0x6022) = 0x7c00;
    *(u16 *)(pb + 0x6024) = 0x7c1f;
    *(u16 *)(pb + 0x6026) = 0x3ff;
    *(u16 *)(pb + 0x6028) = 0x7fe0;
    *(u16 *)(pb + 0x602a) = 0x4220;
    *(u16 *)(pb + 0x602c) = 0x4410;
    *(u16 *)(pb + 0x602e) = 0x8210;
    *(u16 *)(pb + 0x6030) = 0x4420;
    *(u16 *)(pb + 0x6032) = 0x8220;
    *(u16 *)(pb + 0x6034) = 0x8410;
    *(u16 *)(pb + 0x6036) = 0x4210;
    func_0206c2d0(3, iVar3, 0, 0x600);
    {
        s32 cq;
        s32 inq;
        s32 oq;
        s32 sum;
        cq = 0;
        oq = 0;
        do {
            inq = 0;
            do {
                sum = inq + oq;
                *(s16 *)((pb + sum * 2 + 0x6000) + 0x38) = (s16)sum;
                inq = inq + 1;
            } while (inq < 0x20);
            cq = cq + 1;
            oq = oq + 0x20;
        } while (cq < 0x18);
    }
    iVar3 = 0;
    puVar1[0x198e] = 0;
    puVar1[0x198f] = 0;
    puVar1[0] = 0xffffffff;
    puVar1[1] = 0xffffffff;
    puVar1[2] = 0;
    *(s16 *)(puVar1 + 5) = 2;
    puVar1[3] = 1;
    puVar1[4] = 1;
    psVar8 = (s16 *)(pb + 0x6754);
    do {
        iq = 0;
        psVar7 = psVar8;
        do {
            func_02094afc((int)psVar7, iVar3, iq);
            iq = (s16)(iq + 1);
            psVar7 = psVar7 + 0x9e;
        } while (iq < 0x14);
        func_020dd534(iVar3, (int)psVar8);
        if (iVar3 == 0) {
            func_020ddee0(iVar3, 0xfffff, 1);
        } else {
            func_020ddee0(iVar3, 0x3fffffff, 0);
        }
        iVar3 = (s16)(iVar3 + 1);
        psVar8 = (s16 *)((u8 *)psVar8 + 0x18b0);
    } while (iVar3 < 3);
    iVar3 = 0;
    zA = iVar3;
    zB = iVar3;
    do {
        iVar6 = func_020e1fb0(iVar3, zA);
        *(u32 *)((pb + (u32)iVar3 * 4 + 0x6000) + 0x640) = iVar6;
        iVar6 = func_020e1f90(iVar3, zB);
        *(u32 *)((pb + iVar3 * 4 + 0x6000) + 0x690) = iVar6;
        iVar5 = iVar3 + 1;
        iVar3 = iVar5;
    } while (iVar5 < 0x14);
    puVar1[0x19d3] = 1;
    puVar1[0x19d4] = 1;
    puVar1[0x19ce] = 0;
    puVar1[0x19cf] = 0;
    uVar2 = func_020e1f58();
    puVar1[0x19d0] = uVar2;
    uVar10 = func_0205e270(0x100, puVar1[0x19d0]);
    puVar1[0x19d1] = (u32)uVar10;
    puVar1[0x19d2] = 0;
    return puVar1;
}
