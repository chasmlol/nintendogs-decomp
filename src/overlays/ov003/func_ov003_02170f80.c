#include "ctx.h"

extern s32 func_ov003_02174844(u8 *p, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f);
extern void func_0203e908(u8 *p, u32 n);
extern void func_ov003_0218e360(u8 *p, u32 n);

void func_ov003_02170f80(u8 *p)
{
  s32 iVar1;
  u32 v;
  iVar1 = func_ov003_02174844(p, 1, 0x49, 0x4a, 0x4b, 0x4c, 100);
  if (iVar1 == 0) {
    return;
  }
  v = *(u16 *)(p + 244);
  if (v >= 79 && v < 99) {
    func_0203e908(p, 0x438);
    return;
  }
  func_ov003_0218e360(p, 4);
}
