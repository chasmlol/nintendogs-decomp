#pragma avoid_byte strb
#include "ctx.h"

extern u32 data_ov004_02170320;
extern u32 func_02067898(u32 a, u32 b);

void func_ov004_0215ebbc(void)
{
  u8 *p;
  u8 *pb;
  s32 c;
  s32 flag;
  u32 uVar6;
  s32 iVar9;
  s16 s1;
  s16 s2;
  s32 s3;
  s32 s6;
  s32 k3;
  s32 k4;
  s32 t3;
  s32 t4;

  p = *(u8 **)&data_ov004_02170320;
  *(s32 *)((u32)p + 8) = *(s32 *)(p + 8) + 1;
  p = *(u8 **)&data_ov004_02170320;
  c = *(s32 *)(p + 8);
  if (c < 30) {
    goto slow;
  }
  flag = 1;
  uVar6 = *(u32 *)(p + 0x36c4);
  *(s16 *)(uVar6 + 2) = *(s16 *)(p + 0x16);
  p = *(u8 **)&data_ov004_02170320;
  *(s16 *)(*(u8 **)(p + 0x36c4) + 4) = *(s16 *)(p + 0x18);
  goto test;
slow:
  iVar9 = func_02067898((u32)c << 12, 0x1e000);
  flag = 0;
  p = *(u8 **)&data_ov004_02170320;
  s3 = *(s16 *)(p + 0x14);
  s6 = *(s16 *)(p + 0x18);
  s1 = *(s16 *)(p + 0x12);
  s2 = *(s16 *)(p + 0x16);
  k3 = (s6 - s3) * 0x1000;
  k4 = (s2 - s1) * 0x1000;
  t3 = (s32)(((s64)iVar9 * (s64)k3 + 0x800) >> 12);
  t4 = (s32)(((s64)iVar9 * (s64)k4 + 0x800) >> 12);
  *(s16 *)(*(u8 **)(p + 0x36c4) + 2) = ((t4 + s1 * 0x1000 + 0x800) >> 12);
  uVar6 = *(u32 *)(*(u8 **)&data_ov004_02170320 + 0x36c4);
  *(s16 *)(uVar6 + 4) = ((t3 + s3 * 0x1000 + 0x800) >> 12);
test:
  if (flag == 0) {
    return;
  }
  p = *(u8 **)&data_ov004_02170320;
  pb = *(u8 **)(p + 0x36c4);
  *(s32 *)(p + 0x3394) = (s16)(pb[0] * 8 - *(s16 *)(pb + 2));
  p = *(u8 **)&data_ov004_02170320;
  pb = *(u8 **)(p + 0x36c4);
  *(s32 *)(p + 0x3398) = (s16)(pb[1] * 8 - *(s16 *)(pb + 4));
  *(u8 *)*(u8 **)&data_ov004_02170320 = 4;
}
