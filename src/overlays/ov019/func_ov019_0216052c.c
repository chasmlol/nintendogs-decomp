#include "ctx.h"

extern s32 func_ov019_0215cca8(s32 a);
extern void func_ov019_0215ca88(s32 a, s32 *b);
extern void func_02067e34(s32 *a, void *b, s32 *c);

#define FX_SQ(x) ((s32)((((s64)(x) * (x)) + 0x800) >> 12))

void func_ov019_0216052c(u8 *param_1)
{
  s32 iVar4;
  s32 aStack[3];
  iVar4 = func_ov019_0215cca8((s16)*(s16 *)(param_1 + 0x2c));
  if (iVar4 == 0) {
    return;
  }
  if (*(s32 *)(param_1 + 0x34) > 0) {
    *(s32 *)(*(u8 **)(param_1 + 0xac) + 8) = 1;
  }
  if (*(s32 *)(*(u8 **)(param_1 + 0xac) + 8) != 0) {
    func_ov019_0215ca88(iVar4, aStack);
    func_02067e34(aStack, param_1 + 0x3c, aStack);
    *(s32 *)(param_1 + 0x30) = (*(s32 *)(param_1 + 0x30) + aStack[0]) >> 2;
    *(s32 *)(param_1 + 0x38) = (*(s32 *)(param_1 + 0x38) + aStack[2]) >> 2;
    if (FX_SQ(aStack[2]) + (FX_SQ(aStack[0]) + FX_SQ(aStack[1])) < 0x802) {
      *(u16 *)(param_1 + 0x1e) = 3;
    }
    return;
  }
}
