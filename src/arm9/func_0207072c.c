#include "ctx.h"

typedef struct { u8 pad0[0x2c]; u8 b2c; u8 pad2d[15]; u8 b3c; u8 pad3d[7]; } N68;
typedef struct { u8 l0[12]; u8 l1[12]; u32 x18; u32 x1c; u8 b20; u8 pad21[3]; } E36;

extern u8 data_021517f8[];
extern u8 data_021517ec[];
extern N68 data_02151804[16];
extern E36 data_02151c44[32];
extern void func_0207d0ac(void *list, u32 offset);
extern void func_0207d018(void *list, void *obj);

void func_0207072c(void)
{
    s32 i;

    func_0207d0ac(data_021517f8, 20);
    func_0207d0ac(data_021517ec, 20);
    for (i = 0; i < 16; i++) {
        data_02151804[i].b2c = 0;
        data_02151804[i].b3c = i;
        func_0207d018(data_021517ec, &data_02151804[i]);
    }
    for (i = 0; i < 32; i++) {
        func_0207d0ac(data_02151c44[i].l0, 12);
        func_0207d0ac(data_02151c44[i].l1, 0);
        data_02151c44[i].b20 = 127;
        data_02151c44[i].x18 = 1;
        data_02151c44[i].x1c = 0;
    }
}
