#pragma avoid_byte strb
#include "ctx.h"

extern u8 *data_0214f464;
extern u32 data_0215be34;
extern u32 data_02139ee0[];
extern void func_020264f4(u8 *p);
extern void func_020255a4(u8 *p);
extern void func_0202da00(u8 *p, u32 a);
extern void func_02081198(u32 a, u32 b, u32 c);
extern void func_02023590(u8 *p);
extern void func_020a1a40(u32 a);

static inline void SwapByte(u32 v, u8 *p) { *(u8 *)(p) = (u8)(v); }

void func_ov003_0215c20c(u8 *param_1)
{
    u32 *piVar1;
    s32 iVar2;

    iVar2 = *(s32 *)data_0214f464 * 0x10dcd + 1;
    *(s32 *)data_0214f464 = iVar2;
    *(u16 *)(param_1 + 0x152) = (u16)((u16)((u32)(iVar2 << 16) >> 31) + 500);
    SwapByte(2, param_1 + 151);
    func_020264f4(param_1);
    func_020255a4(param_1);
    func_0202da00(param_1, 6);
    piVar1 = (u32 *)data_0215be34;
    iVar2 = (piVar1 != 0) ? (s32)*piVar1 : 0;
    func_02081198(iVar2, 115, data_02139ee0[*(s8 *)(param_1 + 0x88)]);
    piVar1 = (u32 *)data_0215be34;
    iVar2 = (piVar1 != 0) ? (s32)*piVar1 : 0;
    func_02081198(iVar2, 114, data_02139ee0[*(s8 *)(param_1 + 0x88)]);
    piVar1 = (u32 *)data_0215be34;
    iVar2 = (piVar1 != 0) ? (s32)*piVar1 : 0;
    func_02081198(iVar2, 116, data_02139ee0[*(s8 *)(param_1 + 0x88)]);
    func_02023590(param_1);
    func_020a1a40(81);
}
