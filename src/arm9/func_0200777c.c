#pragma avoid_byte strb
#include "ctx.h"
#pragma opt_strength_reduction off

extern void func_02007a84(void);
extern void func_02007c88(void);
extern void func_02007d88(void);
extern void func_02069f94(u32 a, s32 b, s32 c);

typedef struct { u8 f : 5; u8 g : 3; } B5;

void func_0200777c(u16 *param_1, u16 param_2, u16 param_3, u16 param_4)
{
  u8 t[4];
  u8 *q0;
  u8 *q1;
  u8 v;
  u16 va;
  u16 vb;
  u32 h;
  s32 i;

  param_1[0] = 1;
  param_1[2] = 1;
  param_1[3] = 0;
  param_1[4] = param_4;
  *(u32 *)(param_1 + 6) = (u32)func_02007a84;
  if (param_1[5] == 0) {
    *(u32 *)(param_1 + 8) = 0;
    *(u32 *)(param_1 + 10) = 0;
  } else {
    *(u32 *)(param_1 + 8) = (u32)func_02007c88;
    *(u32 *)(param_1 + 10) = (u32)func_02007d88;
    *(vu32 *)0x04001000 = (*(vu32 *)0x04001000 & ~0xe000u) | 0x2000;
    h = (*(vu16 *)0x04001048 & ~63) | 23;
    h = h | 32;
    *(vu16 *)0x04001048 = h;
    h = (*(vu16 *)0x04001048 & ~0x3f00) | 0x1700;
    h = h | 0x2000;
    *(vu16 *)0x04001048 = h;
    *(vu16 *)0x0400104a = (*(vu16 *)0x0400104a & ~63) | 8;
    va = ((param_2 << 8) & 0xff00) | (param_2 & 0xff);
    vb = ((param_3 << 8) & 0xff00) | (param_3 & 0xff);
    *(vu16 *)0x04001040 = va;
    *(vu16 *)0x04001044 = vb;
    q0 = t;
    q1 = t + 1;
    v = *(u8 *)0x04001048;
    *q1 = v;
    v = t[1];
    *q0 = v;
    func_02069f94(0x04001050, (s32)((B5 *)t)->f, -8);
  }
  *(u32 *)(param_1 + 0xc) = 0xff000;
  param_1[0xe] = param_2;
  param_1[0xf] = param_3;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  i = 0;
  do {
    u16 *q = param_1 + i;
    q[0x12] = 0;
    i = i + 1;
    q[0xd2] = 0;
  } while (i < 0xc0);
}
