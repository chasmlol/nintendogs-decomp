#include "ctx.h"

extern u32 data_0215942c;
extern int func_02034808(int a);
extern void func_020274b8(int a, void *b);
extern void func_0202707c(int a, int b);
extern void func_02027494(int a, void *b);

void func_020c7df0(int param_1, int param_2, int param_3)
{
  if (*(s16 *)(param_1 + 0x90) != 1) {
    return;
  }
  if (*(u16 *)(*(u32 *)&data_0215942c) == 1) {
    return;
  }
  if (func_02034808(param_2) != 0) {
    return;
  }
  switch (param_3) {
  case 0:
    break;
  case 1:
    func_020274b8(param_2, (void *)(param_1 + 0xbc));
    func_0202707c(param_2, 4);
    return;
  case 2:
    func_0202707c(param_2, 3);
    return;
  case 3:
    func_0202707c(param_2, 2);
    return;
  case 4:
    func_02027494(param_2, (void *)(param_1 + 0xbc));
    func_0202707c(param_2, 1);
    break;
  }
  return;
}
