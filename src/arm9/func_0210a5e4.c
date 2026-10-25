#include "ctx.h"

extern u32 data_0215bf9c;
extern u32 data_02147fc0[];
extern void func_0206c7bc(u16 a, void *b, s32 c);

typedef void (*FP)(void *);

void func_0210a5e4(void)
{
  s32 iVar4;
  s32 *piVar2;
  s32 iVar5;
  vu16 z;
  vu16 z2;

  piVar2 = *(s32 **)&data_0215bf9c;
  if (*piVar2 == 0) {
    return;
  }
  iVar4 = piVar2[3];
  ((FP)(*(u32 *)(iVar4 + 4)))(piVar2 + 4);
  switch (piVar2[2]) {
  case 0: goto C0;
  case 1: goto C1;
  case 2: goto C2;
  case 3: goto C3;
  case 4: goto C4;
  case 5: goto C5;
  case 6: goto C6;
  default: goto Lend;
  }
C1:
  ((FP)(*(u32 *)(iVar4 + 0x10)))(piVar2 + 4);
  piVar2[0x66] = 0;
  piVar2[2] = 2;
  ((FP)(*(u32 *)(iVar4 + 0x14)))(piVar2 + 4);
  return;
C2:
  ((FP)(*(u32 *)(iVar4 + 0x14)))(piVar2 + 4);
  if (piVar2[0x66] != 0) {
    piVar2[0x66] = 0;
    piVar2[2] = 3;
  }
  return;
C3:
  ((FP)(*(u32 *)(iVar4 + 8)))(piVar2 + 4);
  piVar2[2] = 4;
  ((FP)(*(u32 *)(iVar4 + 0xc)))(piVar2 + 4);
  return;
C4:
  ((FP)(*(u32 *)(iVar4 + 0xc)))(piVar2 + 4);
  return;
C5:
  ((FP)(*(u32 *)(iVar4 + 0x18)))(piVar2 + 4);
  piVar2[0x67] = 0;
  piVar2[2] = 6;
  ((FP)(*(u32 *)(iVar4 + 0x1c)))(piVar2 + 4);
  return;
C6:
  ((FP)(*(u32 *)(iVar4 + 0x1c)))(piVar2 + 4);
  if (piVar2[0x67] != 0) {
    piVar2[0x67] = 0;
    piVar2[2] = 0;
  }
  return;
C0:
  iVar5 = piVar2[1];
  if (iVar5 != 0) {
    piVar2 = *(s32 **)&data_0215bf9c;
    z = 0;
    func_0206c7bc(z, piVar2 + 4, 324);
    piVar2[0] = iVar5;
    piVar2[1] = 0;
    piVar2[2] = 1;
    piVar2[3] = (s32)((u32 *)data_02147fc0)[iVar5];
    ((FP)(*(u32 *)piVar2[3]))(piVar2 + 4);
    return;
  }
  piVar2 = *(s32 **)&data_0215bf9c;
  z2 = 0;
  func_0206c7bc(z2, piVar2 + 4, 324);
  piVar2[0] = 0;
  piVar2[1] = 0;
  piVar2[2] = 1;
  piVar2[3] = (s32)data_02147fc0[0];
  ((FP)(*(u32 *)piVar2[3]))(piVar2 + 4);
Lend:
  return;
}
