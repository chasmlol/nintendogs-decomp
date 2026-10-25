#include "ctx.h"

extern void func_020bdd1c(u8 *p, u32 n);
extern void func_020e8d3c(void);
extern void func_020e8a34(void);
extern void func_020e8e90(void);
extern u32 func_020038b8(void *p, u32 n);
extern u32 func_020f1300(u32 n);
extern void func_020f125c(u32 n, u8 *p);

void func_020e8f10(u8 *param_1, void *param_2)
{
  u32 *piVar4;
  u32 iVar3;
  func_020bdd1c(param_1, 58);
  *(u32 *)(param_1 + 0x1f4) = (u32)func_020e8d3c;
  *(u32 *)(param_1 + 0x1f8) = (u32)func_020e8a34;
  *(u32 *)(param_1 + 0x1f0) = (u32)func_020e8e90;
  *(u32 *)(param_1 + 0x214) = func_020038b8(param_2, 4);
  piVar4 = *(u32 **)(param_1 + 0x214);
  iVar3 = func_020f1300(25);
  *piVar4 = iVar3;
  func_020f125c(25, param_1);
  *(u16 *)(param_1 + 166) = 2;
}
