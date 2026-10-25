#include "ctx.h"
extern u8 data_0215be48[];
extern void func_02003d90(u32 a);
extern void func_02111b94(u32 a, s16 b, s16 c);
void func_0210e478(u32 *param_1)
{
    s32 iVar2;
    *param_1 = 0;
    iVar2 = *(s32 *)(*(u8 **)data_0215be48 + 0xbc);
    switch (iVar2) {
    case 7:
        func_02111b94(0x14, *(s16 *)((u8 *)param_1 + 0x1c18), *(s16 *)((u8 *)param_1 + 0x1c1a));
        return;
    case 12:
        func_02111b94(0x14, *(s16 *)((u8 *)param_1 + 0x1c18), *(s16 *)((u8 *)param_1 + 0x1c1a));
        return;
    case 3:
        func_02003d90(0x14);
        return;
    }
}
