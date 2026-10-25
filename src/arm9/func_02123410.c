#include "ctx.h"
#pragma opt_common_subs off
#pragma opt_strength_reduction off

extern s32 func_02111b58(u8 *p);
extern void func_02111b3c(void);
extern void func_02112978(s32 a, u16 b, s16 c, s32 d);
extern void func_020fcf48(void);

void func_02123410(u8 *param_1)
{
  s32 z0;
  s32 z1;
  s32 z2;
  s32 z3;
  s32 z4;
  s32 z5;
  s32 one;
  s32 uVar6;
  s32 i;
  s32 c1;
  s32 c2;
  s32 iVar1;
  s32 m128;
  s32 c128;
  s32 two;
  u8 *pq;
  s32 t;
  u8 *pb;
  s32 uVar2;
  u32 xv;
  u8 *pqA;
  s32 oneTmp;

  uVar6 = 1;
  if (func_02111b58(param_1) == 0) {
    return;
  }
  func_02111b3c();
  i = 0;
  z0 = i;
  z1 = i;
  z2 = i;
  z3 = i;
  z4 = i;
  z5 = i;
  c128 = 128;
  m128 = -128;
  two = 2;
  oneTmp = uVar6;
  one = oneTmp;
  do {
    pb = param_1 + (u32)i * 8;
    if (*(s32 *)(pb + 0x28) == 0) {
      t = *(vu32 *)(pb + 0x24);
      *(vu32 *)(pb + 0x24) = t - 16;
      if ((i % 2) == 0) {
        c1 = -(s32)*(vu32 *)(pb + 0x24);
        if (c1 < -128) {
          c1 = m128;
        } else if (c1 > 128) {
          c1 = c128;
        }
        iVar1 = i / 2;
        func_02112978(two, *(u16 *)(param_1 + (u32)iVar1 * 8 + 0x4c), (s16)c1, z0);
        func_02112978(two, *(u16 *)(param_1 + (u32)iVar1 * 8 + 0x4e), (s16)c1, z1);
        func_02112978(two, *(u16 *)(param_1 + (u32)iVar1 * 8 + 0x50), (s16)c1, z2);
      }
      pqA = param_1 + (u32)i * 8;
      c2 = *(s32 *)(pqA + 0x24);
      if (c2 < -128) {
        c2 = m128;
      } else if (c2 > 128) {
        c2 = c128;
      }
      func_02112978(two, *(u16 *)(param_1 + (u32)i * 8 + 0x64), (s16)c2, z3);
      func_02112978(two, *(u16 *)(param_1 + (u32)i * 8 + 0x66), (s16)c2, z4);
      func_02112978(two, *(u16 *)(param_1 + (u32)i * 8 + 0x68), (s16)c2, z5);
      pq = param_1 + (u32)i * 8;
      if (*(s32 *)(pq + 0x24) == 0) {
        *(s32 *)(pq + 0x28) = one;
      }
    }
    pqA = param_1 + (u32)i * 8;
    t = *(s32 *)(pqA + 0x28);
    i = i + 1;
    uVar6 = uVar6 & t;
  } while (i < 5);
  if (uVar6 != 0) {
    func_020fcf48();
  }
}
