#include "ctx.h"

extern u32 data_0214f464;

extern s32 func_02035770(u8 *p, u32 a);
extern s32 func_02036578(u8 *p);
extern u32 func_020449bc(void);
extern void func_0202fd7c(u8 *p);
extern void func_0203e908(u8 *p, u32 n);

void func_02045cb0(u8 *p)
{
  s32 r5;
  u32 *pp;
  u32 iv;
  u16 b;
  if (func_02035770(p, 50) == 0) {
    return;
  }
  r5 = func_02036578(p);
  if ((func_020449bc() & 0x20) == 0) {
    func_0202fd7c(p);
    return;
  }
  if (r5 == 0) {
    return;
  }
  pp = *(u32 **)&data_0214f464;
  iv = *pp * 0x10dcd + 1;
  *pp = iv;
  b = (u16)((iv << 16) >> 31);
  switch (b) {
  case 0:
    func_0203e908(p, 0x2cd);
    break;
  case 1:
    func_0203e908(p, 0x2ce);
    break;
  }
}
