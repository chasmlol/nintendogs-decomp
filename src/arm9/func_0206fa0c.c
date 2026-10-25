#include "ctx.h"

extern u32 func_02080b08(void);
extern void func_02080b1c(u32 x);
extern u32 *func_0206fc5c(void);
extern void func_0206fc4c(u32 *p);
extern void func_0206c924(void *a, u32 b, u32 c);
extern void func_0206c9b8(void *a, void *b, u32 c);

u32 func_0206fa0c(u32 *param_1, u32 param_2, u16 *param_3, s32 param_4, u32 param_5, u16 param_6)
{
  u32 r4;
  u32 *iVar1;
  u32 *iVar2;
  u32 *iVar3;
  r4 = func_02080b08();
  if (func_0206fc5c() == 0) {
    func_0206fc4c(param_1);
  } else {
    iVar3 = func_0206fc5c();
    iVar2 = *(u32 **)((u8 *)iVar3 + 0x28);
    while (iVar1 = iVar2, iVar1 != 0) {
      iVar3 = iVar1;
      iVar2 = *(u32 **)((u8 *)iVar1 + 0x28);
    }
    *(u32 **)((u8 *)iVar3 + 0x28) = param_1;
  }
  if (param_4 == 0) {
    *(u16 *)((u8 *)param_1 + 0x32) = 1;
  } else {
    param_1[0xb] = param_4;
    *(u16 *)((u8 *)param_1 + 0x32) = 0;
  }
  param_1[10] = 0;
  param_1[0] = param_2;
  param_1[1] = param_5;
  *(u16 *)(param_1 + 12) = param_6;
  if (param_3 != 0) {
    func_0206c9b8(param_3, param_1 + 2, 32);
  } else {
    func_0206c924(param_1 + 2, 0, 32);
  }
  func_02080b1c(r4);
  return 1;
}
