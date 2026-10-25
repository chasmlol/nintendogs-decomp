#include "ctx.h"

typedef struct {
  u8 pad0[8];
  s16 f08;
  u16 f0a;
  s16 f0c;
} GP;

extern u32 data_02159438;
extern void func_020aa2ec(int p);
extern void func_02068db4(int a);
extern u32 func_020bc3c4(void);

void func_020aa18c(void)
{
  s32 s;
  GP *g;
  vu16 *q;

  g = *(GP **)&data_02159438;
  if (g->f08 == 0) goto zero;
  func_020aa2ec((s32)g);
  s = (*(GP **)&data_02159438)->f08;
  if (s <= 0) {
    return;
  }
  (*(GP **)&data_02159438)->f08 = s - 1;
  if ((*(GP **)&data_02159438)->f08 != 0) {
    return;
  }
  {
    u16 *q2 = (u16 *)func_020bc3c4();
    q2[19] = q2[19] ^ 1;
  }
  return;
zero:
  if (g->f0a == 0) {
    return;
  }
  func_02068db4(8);
  switch ((*(GP **)&data_02159438)->f0c) {
  case 1:
    *(vu32 *)0x04000000 = (*(vu32 *)0x04000000 & 0xffffe0ff) | 0x1300;
    *(vu32 *)0x04001000 = (*(vu32 *)0x04001000 & 0xffffe0ff) | 0xc00;
    break;
  case 2:
    *(vu32 *)0x04000000 = (*(vu32 *)0x04000000 & 0xffffe0ff) | 0x300;
    *(vu32 *)0x04001000 = (*(vu32 *)0x04001000 & 0xffffe0ff) | 0x1800;
    break;
  }
  q = (vu16 *)0x0400100c;
  *q = (*q & ~3) | 2;
  *q = *q & ~0x40;
  *q = (*q & 0x43) | 0xf00;
  (*(GP **)&data_02159438)->f0a = 0;
}
