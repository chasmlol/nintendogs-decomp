#include "ctx.h"

extern s32 func_ov003_02174904(u8 *p, u32 a, s32 b, u32 c);
extern void func_0203e908(u8 *p, u32 n);
extern void func_ov003_0218e360(u8 *p, u32 n);

void func_ov003_021715ac(u8 *p)
{
  s32 iVar1;
  s32 s;
  u32 v;
  iVar1 = func_ov003_02174904(p, 0x11b, -1, 0);
  s = *(s16 *)(p + 234);
  if (s >= 0x119 && s <= 0x121) {
    return;
  }
  if (iVar1 == 0) {
    return;
  }
  v = *(u16 *)(p + 244);
  if (v >= 79 && v < 99) {
    func_0203e908(p, 0x438);
    return;
  }
  func_ov003_0218e360(p, 2);
}
