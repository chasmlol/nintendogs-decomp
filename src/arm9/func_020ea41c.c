#include "ctx.h"

extern void func_020ea508(u8 *p);
extern void func_020c8bd4(u8 *p);
extern void func_020c8ae8(u8 *p, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f);
extern u32 func_020c8164(u32 a, u32 b);
extern void func_020c6300(u8 *p, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g, u32 h, u32 i);
extern void func_020ea704(void);
extern void func_020ea69c(void);
extern void func_020ea658(void);
extern void func_020ea654(void);

void func_020ea41c(u8 *param_1)
{
    u32 iVar1;

    switch (*(s16 *)(param_1 + 0x90)) {
    case 0:
        break;
    case 1:
        func_020ea508(param_1);
        return;
    case 2:
        func_020c8bd4(param_1);
        return;
    case 3:
        func_020c8ae8(param_1, 0x40, 0x40, 0x60, 0x1ec, 0x802, 4);
        iVar1 = func_020c8164(*(u16 *)(param_1 + 160), *(u32 *)(param_1 + 0xf8));
        func_020c6300(param_1, *(u32 *)(param_1 + 0xf8), 0, 0, iVar1,
                      (u32)func_020ea704, (u32)func_020ea69c, 0, (u32)func_020ea658, (u32)func_020ea654);
        break;
    case 4:
        break;
    case 5:
        break;
    case 6:
        break;
    case 7:
        break;
    }
}
