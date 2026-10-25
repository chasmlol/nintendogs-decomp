#include "ctx.h"

extern u8 *data_0215be48;
extern u8 data_02147ba8;
extern s32 func_02111b58(void);
extern void func_020fcf48(void);
extern void func_02111b3c(void);
extern void func_020fc610(u32 a, u32 b, u32 c);
extern void func_021131dc(u32 a, u32 b, u32 c, u32 d);
extern s32 func_02101510(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g, u32 h, u32 i, u32 j);

void func_020ff7f0(u8 *param_1)
{
    s32 iVar1;

    if (*(s32 *)(*(u8 **)&data_0215be48 + 0xbc) == 11) {
        iVar1 = func_02111b58();
        if (iVar1 == 0) {
            return;
        }
    }
    func_020fcf48();
    func_02111b3c();
    func_020fc610(11, (u32)&data_02147ba8, 3);
    func_021131dc(3, *(u32 *)(*(u8 **)&data_0215be48 + 0x2354), 0, 0x800);
    *(u32 *)(param_1 + 0x940) = 0xffffff01;
    *(u32 *)(param_1 + 0x948) = 1;
    iVar1 = func_02101510(0, 3, *(u32 *)(*(u8 **)&data_0215be48 + 0x2354), 5, 10, 22, 8, 224, 0, 224);
    *(s32 *)(param_1 + 0x944) = iVar1;
}
