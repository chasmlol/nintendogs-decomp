#include "ctx.h"

extern u32 data_0215942c;
extern u32 data_02159428;

extern u32 *func_020038b8(void *p, u32 n);
extern void func_020a757c(u32 *a, u32 b, u32 c);
extern s32 func_0209531c(void);
extern void func_0209af44(u32 a);
extern void func_0209b18c(u32 a);

u32 *func_020a7500(u8 *param_1, u32 param_2, u32 param_3)
{
  u32 *puVar1;
  s32 iVar2;
  puVar1 = func_020038b8(param_1, 0x2c);
  func_020a757c(puVar1, param_2, param_3);
  if (**(u16 **)&data_0215942c == 0xd && (iVar2 = func_0209531c(), iVar2 == 0)) {
    func_0209af44(0);
  } else {
    func_0209b18c(*(u16 *)((u8 *)puVar1 + 6));
  }
  data_02159428 = (u32)puVar1;
  return puVar1;
}
