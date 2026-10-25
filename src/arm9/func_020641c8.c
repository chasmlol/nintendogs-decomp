#include "ctx.h"

extern u8 data_0214f9b8[];
extern u8 *data_0214f9b4;

extern s32 func_0207fcb0(u8 *a, u16 **b, u32 c);
extern void func_020800d4(u32 a, u32 b);
extern void func_020800f0(u32 a, u32 b);
extern void func_0206c360(u32 a, u32 b, u16 *c, u32 d);
extern s32 func_0206cdb8(u32 a, u32 b, u32 c);
extern void func_0207fd5c(u8 *a, u16 *b, u32 c);
extern void func_0207fbfc(u8 *a, u16 *b, u32 c);

u32 func_020641c8(u32 p0, u32 p1, u32 p2, u32 p3)
{
    u16 *apu[2];
    s32 iVar1;
    s32 ret;
    u16 cnt;
    u32 *puVar2;
    s32 i;
    u32 v;
    iVar1 = func_0207fcb0(data_0214f9b8, apu, 0);
    if (iVar1 == 0) {
        return 8;
    }
    func_020800d4((u32)apu[0], 2);
    if ((*apu[0] & 0x8000) == 0) {
        func_0207fbfc(data_0214f9b8, apu[0], 1);
        return 8;
    }
    if (*(u16 *)&p1 == 0) {
        func_020800f0(*(u32 *)(data_0214f9b4 + 0xc), 0x100);
        func_020800d4((u32)apu[0], 0x100);
        func_0206c360((u32)*(u16 *)(data_0214f9b4 + 0x14), *(u32 *)(data_0214f9b4 + 0xc), apu[0], 0x100);
    }
    *apu[0] = (u16)p0;
    puVar2 = (u32 *)((u32)&p1 & ~3u) + 1;
    cnt = *(u16 *)&p1;
    i = 0;
    if ((s32)cnt > 0) {
        do {
            puVar2 = puVar2 + 1;
            v = puVar2[-1];
            *(u32 *)((u8 *)apu[0] + (u32)i * 4 + 4) = v;
            i = i + 1;
        } while (i < (s32)cnt);
    }
    func_020800f0((u32)apu[0], 0x100);
    ret = func_0206cdb8(10, (u32)apu[0], 0);
    func_0207fd5c(data_0214f9b8, apu[0], 1);
    if (ret < 0) {
        return 8;
    }
    return 2;
}
