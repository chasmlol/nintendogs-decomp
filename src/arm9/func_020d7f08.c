#include "ctx.h"

extern u32 data_0215ad4c[];
extern u8 *data_0215ad40;
extern void func_0206f2bc(void);
extern void func_020d7820(void);
extern void func_020d7b48(void);
extern void func_020d7804(void);
extern void func_020d5108(u32 a);
extern void func_020d511c(u32 a);
extern void func_020d50f4(u32 a);
extern void func_020d5488(void);

void func_020d7f08(void)
{
    s32 iVar4;

    func_0206f2bc();
    iVar4 = 0;
    do {
        data_0215ad4c[iVar4] = 0;
        iVar4 = iVar4 + 1;
    } while (iVar4 < 16);
    *(u32 *)(data_0215ad40 + 0x10c) = 0;
    *(u32 *)(data_0215ad40 + 0x110) = 0;
    *(u32 *)(data_0215ad40 + 0x124) = 0;
    *(u32 *)(data_0215ad40 + 0x128) = 0;
    func_020d5108((u32)func_020d7820);
    func_020d511c((u32)func_020d7b48);
    func_020d50f4((u32)func_020d7804);
    *(u16 *)(data_0215ad40 + 300) = 0;
    func_020d5488();
}
