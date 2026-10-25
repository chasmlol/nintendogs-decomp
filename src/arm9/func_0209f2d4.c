#include "ctx.h"

typedef struct {
  u8 pad0[0x18];
  u16 f18;
  u8 pad1[2];
  u32 f1c;
  u8 pad2[0x1e];
  s16 f3e;
} GA;

typedef struct {
  u32 f00;
  u8 pad0[8];
  s16 f0c;
  u16 f0e;
  u16 f10;
  u8 pad1[6];
  u16 f18;
  u16 f1a;
  u32 f1c;
  u8 pad2[2];
  s16 f22;
  u16 f24;
  u8 pad3[0xe6];
  u32 f10c;
} GB;

typedef struct {
  u32 f00;
} GC;

extern GA data_02159074;
extern GB data_02159198;
extern s16 data_02159148;
extern GC data_0215919c;
extern void func_020a1a40(int a);
extern void func_02070ac8(void *p, int a, int b);

void func_0209f2d4(void)
{
  GB *pB;
  GB *pg;
  u16 r5;
  s32 iVar6;
  s32 iVar7;

  pB = &data_02159198;
  r5 = data_02159074.f18;
  if (data_02159074.f1c == 0) {
    func_020a1a40(8);
  }
  if (data_02159074.f3e == 3) {
    return;
  }
  if (data_02159074.f1c != 0) {
    return;
  }
  if (r5 == 29) {
    return;
  }
  if (r5 == 30) {
    return;
  }
  if (data_02159148 == 100) {
    return;
  }
  pg = &data_02159198;
  pg->f0e = 100;
  iVar7 = 60;
  if (pg->f00 != 0) {
    if (pg->f1c != 0) {
      iVar7 = pg->f1a - pg->f18;
      *(vu16 *)&pg->f18 = 0;
      *(vu32 *)&pg->f1c = 0;
    }
    iVar6 = pg->f0c * 100;
    func_02070ac8(pg, iVar6 / 100, iVar7);
  }
  {
    GB *pb = &data_02159198;
    *(vu16 *)&pb->f24 = 100;
    if (*(vu32 *)&data_0215919c.f00 != 0) {
      iVar6 = pb->f22 * 100;
      func_02070ac8(&data_0215919c, iVar6 / 100, 60);
    }
  }
  data_02159198.f10 = 100;
  pB->f10c = 0;
}
