#include "ctx.h"

extern void func_02103c34(u8 *p);
extern void func_02103f78(u8 *p);
extern void func_021030dc(u8 *p);
extern void func_02102fc4(u8 *p);
extern void func_02102b88(u8 *p);
extern void func_0210406c(u8 *p);
extern void func_02117ac8(u8 *p, u32 n);
extern void func_021043bc(void);
extern void func_02112798(u32 a, u32 b, u32 c);

void func_02102a34(u8 *param_1)
{
  func_02103c34(param_1);
  func_02103f78(param_1);
  func_021030dc(param_1);
  func_02102fc4(param_1);
  if (*(s32 *)(param_1 + 4) != 0) {
    func_02102b88(param_1);
  }
  func_0210406c(param_1);
  func_02117ac8(param_1 + 0x198, 1);
  func_02117ac8(param_1 + 0x1b8, 1);
  func_02117ac8(param_1 + 0x1d8, 0);
  func_02117ac8(param_1 + 0x1f8, 0);
  if (*(s32 *)(param_1 + 0x220) == 0) {
    return;
  }
  *(s32 *)(param_1 + 0x21c) = *(s32 *)(param_1 + 0x21c) + 1;
  if (*(s32 *)(param_1 + 0x21c) >= 0x3c) {
    *(s32 *)(param_1 + 0x21c) = 0;
    func_021043bc();
  }
  if (*(s32 *)(param_1 + 0x21c) < 0x1e) {
    func_02112798(*(u32 *)(param_1 + 0x224), *(u16 *)(param_1 + 0x228), 1);
    return;
  }
  func_02112798(*(u32 *)(param_1 + 0x224), *(u16 *)(param_1 + 0x228), 0);
}
