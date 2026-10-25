#include "ctx.h"

typedef struct { u16 w[20]; } T40;
extern void func_02005728(u8 *p, u32 v);

void func_020056a0(u16 *param_1, u16 *param_2)
{
    *(T40 *)param_1 = *(T40 *)param_2;
    *(u32 *)((u8 *)param_1 + 0x28) = 0;
    func_02005728((u8 *)param_1 + 0x2c, param_2[4]);
    func_02005728((u8 *)param_1 + 0x78, param_2[6]);
    *(u32 *)((u8 *)param_1 + 0x74) = 0;
    *(u32 *)((u8 *)param_1 + 0xc4) = 0;
    *(u32 *)((u8 *)param_1 + 0xc8) = 0;
    *(u32 *)((u8 *)param_1 + 0xcc) = 0;
    *(u32 *)((u8 *)param_1 + 0xd0) = 0;
    *(u32 *)((u8 *)param_1 + 0xd4) = 0;
    *(u32 *)((u8 *)param_1 + 0xd8) = 0;
    *(u32 *)((u8 *)param_1 + 0xdc) = 0;
    *(u32 *)((u8 *)param_1 + 0xc0) = 0;
}
