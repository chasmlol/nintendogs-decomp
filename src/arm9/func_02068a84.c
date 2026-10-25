#include "ctx.h"

extern u16 data_02150e28;

extern void func_02080da8(u32 a, u32 b);

u32 func_02068a84(u16 *param_1)
{
  u32 uVar1;
  uVar1 = *param_1;
  *param_1 = 0;
  if ((uVar1 & 1) != 0) {
    *(vu8 *)0x04000240 = 0;
  }
  if ((uVar1 & 2) != 0) {
    *(vu8 *)0x04000241 = 0;
  }
  if ((uVar1 & 4) != 0) {
    *(vu8 *)0x04000242 = 0;
  }
  if ((uVar1 & 8) != 0) {
    *(vu8 *)0x04000243 = 0;
  }
  if ((uVar1 & 0x10) != 0) {
    *(vu8 *)0x04000244 = 0;
  }
  if ((uVar1 & 0x20) != 0) {
    *(vu8 *)0x04000245 = 0;
  }
  if ((uVar1 & 0x40) != 0) {
    *(vu8 *)0x04000246 = 0;
  }
  if ((uVar1 & 0x80) != 0) {
    *(vu8 *)0x04000248 = 0;
  }
  if ((uVar1 & 0x100) != 0) {
    *(vu8 *)0x04000249 = 0;
  }
  func_02080da8((u16)uVar1, data_02150e28);
  return uVar1;
}
