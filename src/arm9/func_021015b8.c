#include "ctx.h"

extern u32 data_0215be4c;
extern u32 data_02159058;
extern void func_02085e28(u32 *p, s32 v);
extern void func_02086390(u32 *p, u8 *q, u32 a, u32 b, u16 c, u32 d);

void func_021015b8(u32 a0, s32 p2, u32 p3, u32 p4, u16 p5, u32 p6)
{
    u8 *iv;
    u32 *pv;

    iv = *(u8 **)&data_0215be4c + 4;
    iv = iv + p2 * 440;
    pv = *(u32 **)&data_02159058;
    func_02085e28(pv, 0xe011);
    func_02086390(pv, iv + 0x24, p3, p4, p5, p6);
    *(u32 *)(iv + 0x38) = 1;
}
