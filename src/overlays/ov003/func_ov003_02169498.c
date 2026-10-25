#include "ctx.h"

extern void func_020264f4(void *p);
extern void func_020255a4(void *p);
extern s32 func_02039cc4(u8 *p);
extern void func_020bbe14(u32 a, s32 b);
extern void func_02039c68(u8 *p);

void func_ov003_02169498(u8 *p)
{
  s32 iVar1;
  *(u16 *)(p + 0x152) = 0x125;
  func_020264f4(p);
  func_020255a4(p);
  iVar1 = func_02039cc4(p);
  if (iVar1 != 0) {
    func_020bbe14(10, *(s8 *)(p + 136));
    func_02039c68(p);
  }
}
