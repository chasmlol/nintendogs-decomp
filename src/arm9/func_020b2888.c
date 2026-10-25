#include "ctx.h"

extern u8 *data_02159450;
extern u8 *data_0214f130;
extern void *func_020038b8(s32 *p, u32 n);
extern void func_020b2918(u8 *p, u8 *q, u32 r);
extern void func_02006700(u32 a, void *b);
extern void func_020b2d24(void);

void func_020b2888(s32 *param_1)
{
    data_02159450 = (u8 *)func_020038b8(param_1, 0x14);
    *(u32 *)data_02159450 = 0xc000;
    *(u16 *)(data_02159450 + 0x10) = 0xffff;
    *(u16 *)(data_02159450 + 4) = 0;
    *(u16 *)(data_02159450 + 6) = 0;
    *(u32 *)(data_02159450 + 8) = 0;
    *(u32 *)(data_02159450 + 0xc) = 0;
    func_020b2918(data_02159450, data_0214f130 + 44, 1);
    func_02006700(13, (void *)func_020b2d24);
}
