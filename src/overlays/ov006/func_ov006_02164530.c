#include "ctx.h"

typedef struct { u32 w[3]; } T3;

extern u32 data_ov006_02165f34;
extern u32 data_ov006_02165f38[];
extern u32 data_ov006_021661c0[];
extern s16 data_02126868[];

extern void func_ov006_0216452c(void);
extern void func_ov006_021646a4(u8 *p);
extern void func_0205f050();
extern u32 func_020038b8(u8 *p, u32 n);
extern u32 func_0207df48(u8 *buf);
extern u32 func_0208f43c(u8 *p, u32 a);
extern u32 func_0208fb00(u8 *p, u32 a, u32 b);
extern void func_0208f7e4(u8 *p, u32 a);
extern void func_0208f820(u8 *p, u32 a);
extern void func_0208f7d0(u8 *p, u32 a);
extern void func_0208f588(u8 *p, u8 *q);
extern void func_01ff8020(u8 *p, s32 a, s32 b);

void func_ov006_02164530(u8 *p1, u8 *p2, u8 *p3)
{
    u8 buf[64];
    u8 *obj;

    func_ov006_021646a4(p1);
    *(u32 *)(p1 + 0x28) = (u32)func_ov006_0216452c;
    *(u32 *)(p1 + 0x1c) = 0;
    *(u32 *)(p1 + 0x20) = (u32)p3;
    *(u32 *)(p1 + 0x2c) = func_020038b8(p2, 4);
    obj = *(u8 **)(p1 + 0x2c);
    if (obj == 0) {
        return;
    }
    func_0205f050(buf, 64, data_ov006_02165f38, data_ov006_02165f34);
    *(u32 *)obj = func_0208fb00(p2, 0x88, func_0208f43c(p2, func_0207df48(buf)));
    func_0208f7e4(*(u8 **)obj, 0x39ce);
    func_0208f820(*(u8 **)obj, 0x7fff);
    func_0208f7d0(*(u8 **)obj, 3);
    func_0208f588(*(u8 **)(data_ov006_021661c0) + 4, *(u8 **)obj);
    *(T3 *)(*(u8 **)obj + 0x30) = *(T3 *)(p3 + 8);
    *(T3 *)(*(u8 **)obj + 0x24) = *(T3 *)(p3 + 0x14);
    func_01ff8020(*(u8 **)obj + 60, data_02126868[(*(u16 *)(p3 + 4) >> 4) * 2], data_02126868[(*(u16 *)(p3 + 4) >> 4) * 2 + 1]);
}
