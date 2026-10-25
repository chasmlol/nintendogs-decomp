#include "ctx.h"

typedef struct {
    u8 pad[0x10];
    u16 h10;
} Cfg;

extern Cfg data_02159198;
extern u32 data_02159074;
extern void func_0209f848(u32 a, u32 b);
extern void func_0209ea10(u32 a, u32 b);
extern void func_020a07f8(u32 a, u32 b);
extern void func_020a1d20(u32 a);

void func_0209ac44(void)
{
    func_0209f848(data_02159198.h10, 60);
    func_0209ea10(100, 60);
    func_020a07f8(127, 60);
    func_020a1d20(60);
    *(u32 *)((u8 *)&data_02159074 + 0x1c) = 0;
}
