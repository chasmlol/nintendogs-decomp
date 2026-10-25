#include "ctx.h"

extern u32 data_0214f460;
extern u32 data_0214f464;
extern void func_02039448(u8 *p);
extern void func_02037450(u8 *p, s32 a);
extern void func_0203e8cc(u8 *p, s32 a, s32 b);
extern void func_020ab064(void *a, void *b);
extern void func_ov003_02179bb8(u8 *p, s32 a, s32 b, s32 c, s32 d, s32 e,
                                s32 f, s32 g, s32 h, s32 i, s32 j, s32 k);

void func_ov003_021791b4(u8 *param_1)
{
  s32 iVar1;
  u32 uVar2;
  u8 *P;

  func_02039448(param_1);
  func_02037450(param_1, 0x300);
  if (*(s8 *)(param_1 + 0xa0) == 0 && *(s8 *)(param_1 + 0xa1) == 0) {
    func_0203e8cc(param_1, 0, 0x118);
  }
  func_020ab064(*(void **)&data_0214f460, param_1 + 0x3b4);
  iVar1 = 0;
  if (*(u16 *)(param_1 + 0xfc) >= 150) {
    P = *(u8 **)&data_0214f464;
    uVar2 = *(u32 *)P * 0x10dcd + 1;
    *(u32 *)P = uVar2;
    if ((u16)((((u32)(u16)uVar2 * 30)) >> 16) == 0) {
      iVar1 = 1;
    }
  }
  func_ov003_02179bb8(param_1, 0, 0x180, 1, 0, 1, 0, iVar1, 0x30, 0, 3, 0);
  return;
}
