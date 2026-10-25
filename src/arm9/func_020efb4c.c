#include "ctx.h"

typedef struct {
    u32 a[6];
} T6;

extern u8 data_02144eec[];

extern void func_020efd1c(u8 *p);
extern void func_020c8bd4(u8 *p);
extern void func_020c8ae8(u8 *p, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f);
extern s32 func_020c8164(u32 a, u32 b);
extern void func_020c6300(u8 *p, u32 a, u8 *b, u8 *c, s32 d, u32 e, u32 f, u32 g, u32 h, u32 i);
extern void func_020c87ec(u8 *p, u32 a, u32 *b);
extern void func_020c8758(u8 *p, u32 a);
extern void func_020c866c(u8 *p);
extern void func_020efed4(void);
extern void func_020efea0(void);
extern void func_020efe84(void);
extern void func_020efe78(void);
extern void func_020efca8(void);

void func_020efb4c(u8 *param_1)
{
    s32 iVar1;
    u8 *iv;
    u32 loc[6];

    switch (*(s16 *)(param_1 + 0x90)) {
    case 2:
        func_020c8bd4(param_1);
        return;
    case 3:
        iv = *(u8 **)(*(u8 **)(param_1 + 0x214));
        func_020c8ae8(param_1, *(u32 *)(iv + 0x48), *(u32 *)(iv + 0x4c), *(u32 *)(iv + 0x50),
                      *(u32 *)(iv + 0x54), *(u32 *)(iv + 0x58), 4);
        iVar1 = func_020c8164(*(u16 *)(param_1 + 0xa0), *(u32 *)(param_1 + 0xf8));
        func_020c6300(param_1, *(u32 *)(param_1 + 0xf8), param_1 + 0xfc, param_1 + 0x108, iVar1,
                      (u32)func_020efed4, 0, (u32)func_020efea0, (u32)func_020efe84,
                      (u32)func_020efe78);
        return;
    case 1:
        func_020efd1c(param_1);
        return;
    case 4:
        *(T6 *)loc = *(T6 *)data_02144eec;
        func_020c87ec(param_1, (u32)func_020efca8, loc);
        return;
    case 5:
        func_020c8758(param_1, 0x1000);
        return;
    case 8:
        func_020c866c(param_1);
        break;
    }
}
