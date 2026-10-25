#include "ctx.h"

extern u32 data_0215be48;
extern void func_020fbf30(void *a, u32 b);
extern int func_0210bda8(void);
extern void func_0210bb08(int a, int b, int c, int d);
extern int func_020bc14c(void);
extern void func_02112798(int a, int b, u32 c);
extern void func_02115f4c(int a);

void func_02117118(int param_1)
{
  u32 *puVar3;
  s32 iVar1;
  s32 iVar2;
  u32 local_18[3];

  puVar3 = (u32 *)((u8 *)(*(u32 **)&data_0215be48) + 0x53f4);
  if (puVar3[10] != 0) {
    func_020fbf30((void *)(param_1 + 8), puVar3[0]);
    func_020fbf30((void *)(param_1 + 0x30), puVar3[1]);
    func_020fbf30((void *)(param_1 + 0x58), puVar3[2]);
    iVar1 = func_0210bda8();
    if (iVar1 == 0) {
      func_020fbf30((void *)(param_1 + 0x80), puVar3[3]);
      func_020fbf30((void *)(param_1 + 0xa8), puVar3[4]);
    }
  }
  func_0210bb08(2, 0x11, 0x12, 0xffff);
  iVar1 = func_020bc14c();
  iVar2 = 0;
  do {
    local_18[iVar2] = 0;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  if (iVar1 >= 0 && iVar1 < 3) {
    local_18[iVar1] = 1;
  }
  func_02112798(2, 0xd, local_18[0]);
  func_02112798(2, 0xe, local_18[1]);
  func_02112798(2, 0xf, local_18[2]);
  func_02115f4c(0xd);
}
