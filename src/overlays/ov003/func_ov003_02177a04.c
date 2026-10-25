#include "ctx.h"

extern u32 data_0214f460;
extern u32 data_02152cd8;
extern u32 data_0214f464;
extern void func_02039448(u8 *p);
extern void func_020ab064(u32 a, u8 *b);
extern void func_01ff832c(u32 a, u32 *b, u8 *c, u8 *d);
extern void func_02037450(u8 *p, u32 v);
extern void func_ov003_02179bb8(u8 *p, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g, u32 h, u32 i, u32 j, u32 k);

void func_ov003_02177a04(u8 *param_1)
{
    u32 local[3];
    s32 iVar1;
    u32 *pv;
    u32 nv;
    func_02039448(param_1);
    func_020ab064(data_0214f460, param_1 + 0x3b4);
    local[0] = *(u32 *)((u8 *)&data_02152cd8 + 0x4c);
    local[1] = *(u32 *)((u8 *)&data_02152cd8 + 0x58);
    local[2] = *(u32 *)((u8 *)&data_02152cd8 + 0x64);
    func_01ff832c(0x1000, local, param_1 + 0x3b4, param_1 + 0x278);
    iVar1 = 0;
    if (*(u16 *)(param_1 + 0xfc) > 200) {
        pv = *(u32 **)&data_0214f464;
        nv = *pv * 0x10dcd + 1;
        *pv = nv;
        if ((u16)(((u32)(u16)nv * 100) >> 16) == 0) {
            iVar1 = 1;
        }
    }
    func_ov003_02179bb8(param_1, 0, 0x1ff, 1, 1, 1, 1, iVar1, 0x30, 0, 1, 1);
}
