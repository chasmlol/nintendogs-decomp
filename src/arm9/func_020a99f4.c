#include "ctx.h"

extern void func_02005e18(void *p);
extern void func_020995b8(void *p);
extern u16 *func_0200563c(int *p, void *buf);
extern void func_020055b4(void *p, int a, int b, int c, int d, int e, int f);
extern void func_02099554(void *p);

u16 *func_020a99f4(int *param_1)
{
  u16 *puVar1;
  u16 buf[22];

  func_02005e18(buf);
  buf[1] = 4;
  buf[2] = 4;
  buf[3] = 1;
  buf[4] = 0;
  buf[5] = 0;
  buf[6] = 0;
  func_020995b8(buf);
  buf[7] = 3;
  buf[14] = 4;
  buf[8] = 64;
  puVar1 = func_0200563c(param_1, buf);
  func_020055b4((u8 *)puVar1 + 44, 3, 0, 0, 0, 6, 1);
  func_020055b4((u8 *)puVar1 + 120, 3, 0, 0, 0, 6, 1);
  func_02099554(puVar1);
  return puVar1;
}
