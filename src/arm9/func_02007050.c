#include "ctx.h"

extern u32 data_0214f130;
extern void func_02001658(void);
extern s32 func_020015d8(u16 *p);
extern void func_020071f0(void);
extern void func_0206d68c(u32 a, u32 b, u32 c, u32 d);

typedef struct {
    u16 a;
    u16 b;
    u16 c;
    u16 d;
} Four16;

void func_02007050(void)
{
    s32 iVar1;
    Four16 local_10;
    func_02001658();
    iVar1 = func_020015d8((u16 *)&local_10);
    if (iVar1 == 0) {
        Four16 *dst = (Four16 *)(data_0214f130 + 0x3c);
        *dst = local_10;
    }
    iVar1 = data_0214f130;
    func_0206d68c(iVar1, iVar1 + 0x10, (u32)func_020071f0, iVar1);
}
