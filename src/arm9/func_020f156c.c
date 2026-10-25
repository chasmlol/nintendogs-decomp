typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u32 data_0215be40;
extern u32 func_0210f100(u32 a, s32 b);
extern u8 func_0208d368(u32 a);
u32 func_020f156c(u32 param_1, s32 param_2)
{
    u32 uVar4;
    u32 t;
    *(u32 *)(*(u8 **)&data_0215be40 + 0x24) = func_0210f100(param_1, (s32)(s16)param_2);
    *(u16 *)(*(u8 **)&data_0215be40 + 0x10) = *(u16 *)(*(u8 **)(*(u8 **)&data_0215be40 + 0x24) + 0x10);
    uVar4 = *(u32 *)(*(u8 **)&data_0215be40 + 0x18);
    if (uVar4 != 0) {
        return uVar4;
    }
    *(u32 *)(*(u8 **)&data_0215be40 + 0x14) = 1;
    t = *(u32 *)*(u32 *)&data_0215be40;
    if (t == 0) {
        return t;
    }
    return (u32)func_0208d368(*(u32 *)(*(u8 **)&data_0215be40 + 0x1c));
}
