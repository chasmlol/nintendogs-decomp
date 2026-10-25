#include "ctx.h"

extern u32 data_0213e4dc;
extern u16 data_02150e28;
extern void func_02068684(void);
extern s32 func_0207ee60(void);
extern void func_02080b84(void);
extern void func_0206c3dc(u32 a, u32 b, int c, int d);
extern void func_0206c7f0(u32 a, u32 b, int c);

void func_020684ec(void)
{
  s32 iVar9;

  *(vu16 *)0x04000304 = *(vu16 *)0x04000304 | 0x8000;
  *(vu16 *)0x04000304 = (*(vu16 *)0x04000304 & 0xfffffdf1u) | 0x20e;
  *(vu16 *)0x04000304 = *(vu16 *)0x04000304 | 1;
  func_02068684();
  while (data_02150e28 == 0) {
    iVar9 = func_0207ee60();
    if (iVar9 == -3) {
      func_02080b84();
    }
    data_02150e28 = (u16)iVar9;
  }
  *(vu16 *)0x04000004 = 0;
  *(vu32 *)0x04000000 = 0;
  if (data_0213e4dc != 0xffffffff) {
    func_0206c3dc(data_0213e4dc, 0x04000008, 0, 96);
    *(vu16 *)0x0400006c = 0;
    func_0206c3dc(data_0213e4dc, 0x04001000, 0, 112);
  } else {
    vu32 z0;
    vu32 z1;
    z0 = 0;
    func_0206c7f0(z0, 0x04000008, 96);
    *(vu16 *)0x0400006c = 0;
    z1 = 0;
    func_0206c7f0(z1, 0x04001000, 112);
  }
  *(vu16 *)0x04000020 = 256;
  *(vu16 *)0x04000026 = 256;
  *(vu16 *)0x04000030 = 256;
  *(vu16 *)0x04000036 = 256;
  *(vu16 *)0x04001020 = 256;
  *(vu16 *)0x04001026 = 256;
  *(vu16 *)0x04001030 = 256;
  *(vu16 *)0x04001036 = 256;
}
