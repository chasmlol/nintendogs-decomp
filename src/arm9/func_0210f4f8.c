#include "ctx.h"

extern u8 *data_0215be48;
extern u8 data_0214889c[];
extern BOOL func_02111b58(void);
extern void func_020fcf48(void);
extern void func_02111b3c(void);
extern void func_020fc610(s32 a, u8 *b, s32 c);
extern void func_021131dc(s32 a, u32 b, s32 c, s32 d);
extern s32 func_02101510(s32 a, s32 b, u32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j);

void func_0210f4f8(u8 *param_1)
{
    s32 iVar1;

    if (*(s32 *)(data_0215be48 + 0xbc) == 11 && (iVar1 = func_02111b58(), iVar1 == 0)) {
        return;
    }
    func_020fcf48();
    func_02111b3c();
    func_020fc610(14, data_0214889c, 3);
    func_021131dc(3, *(u32 *)(data_0215be48 + 0x2354), 0, 0x800);
    *(s32 *)(param_1 + 0x1c) = 0xffffff01;
    *(s32 *)(param_1 + 0x24) = 1;
    iVar1 = func_02101510(0, 3, *(u32 *)(data_0215be48 + 0x2354), 5, 10, 22, 8, 224, 0, 224);
    *(s32 *)(param_1 + 0x20) = iVar1;
}
