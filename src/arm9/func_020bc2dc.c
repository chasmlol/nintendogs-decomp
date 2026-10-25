#include "ctx.h"

extern u8 *data_02159464;
extern u8 data_02126968[];
extern u8 data_021426a4[];
extern u8 func_020bba14[];
extern u8 func_020bb8b8[];
extern u8 *func_020038b8(s32 *p, s32 n);
extern void func_020be270(s32 *p);
extern void func_0208eeb0(u8 *p);
extern void func_0208f544(u8 *p, s32 v);
extern void func_02006700(u32 a, s32 b);

s32 func_020bc2dc(s32 *param_1)
{
    u8 *g;

    data_02159464 = func_020038b8(param_1, 0x340);
    func_020be270(param_1);
    func_0208eeb0(data_02159464);
    func_0208f544(data_02159464, (s32)func_020bba14);
    g = data_02159464;
    *(u16 *)(g + 0x6c) = *(s16 *)(data_02126968 + 0xc4);
    *(u16 *)(g + 0x6e) = *(s16 *)(data_02126968 + 0xc6);
    *(u32 *)(data_02159464 + 0x74) = 0x1000;
    *(u32 *)(data_02159464 + 0x78) = 0x2bc000;
    *(u32 *)(data_02159464 + 0x34) = 0x8000;
    *(u32 *)(data_02159464 + 0x7c) = 0;
    *(u16 *)(data_02159464 + 0x82) = 1;
    *(u16 *)(data_02159464 + 0x84) = 0;
    *(u16 *)(data_02159464 + 0x86) = 0;
    *(u16 *)(data_02159464 + 0x80) = 0;
    func_020be270(param_1);
    func_02006700(*(u16 *)data_021426a4, (s32)func_020bb8b8);
    return (s32)data_02159464;
}
