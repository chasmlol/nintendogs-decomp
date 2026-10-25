#include "ctx.h"

extern u32 func_02080b08(void);
extern void func_02080b1c(u32 s);
extern void func_02087248(s32 *p, s32 n);
extern void func_02088364(u32 *p);
extern void func_0207f4e0(u16 *p);

s32 func_02087ad0(u8 *param_1)
{
  s32 *piVar1;
  u32 uVar5;
  s32 *piVar2;
  s32 iVar3;
  u32 bVar4;
  u32 f;
  u32 auStack_60[16];

  uVar5 = func_02080b08();
  f = (*(vu32 *)(param_1 + 0x10) & 0x20) != 0;
  if (f != 0) {
    *(vu32 *)(param_1 + 0x10) = *(vu32 *)(param_1 + 0x10) & 0xffffffdf;
    piVar1 = *(s32 **)(param_1 + 0x18);
    if (piVar1 != 0) {
      do {
        piVar2 = (s32 *)piVar1[1];
        f = (piVar1[3] & 2) != 0;
        if (f != 0) {
          if (*(s32 **)(param_1 + 0x18) == piVar1) {
            *(s32 **)(param_1 + 0x18) = piVar2;
          }
          func_02087248(piVar1, 3);
          if (piVar2 == 0) {
            piVar2 = *(s32 **)(param_1 + 0x18);
          }
        }
        piVar1 = piVar2;
      } while (piVar2 != 0);
    }
  }
  f = (*(vu32 *)(param_1 + 0x10) & 0x40) != 0;
  if (f != 0) {
    goto L18c;
  }
  f = (*(vu32 *)(param_1 + 0x10) & 0x8) != 0;
  if (f != 0) {
    goto L18c;
  }
  iVar3 = *(s32 *)(param_1 + 0x18);
  if (iVar3 == 0) {
    goto L18c;
  }
  f = (*(vu32 *)(param_1 + 0x10) & 0x10) != 0;
  bVar4 = (f == 0);
  if (bVar4 != 0) {
    *(vu32 *)(param_1 + 0x10) = *(vu32 *)(param_1 + 0x10) | 0x10;
  }
  func_02080b1c(uVar5);
  if (bVar4 != 0) {
    if ((*(u32 *)(param_1 + 0x4c) & 0x200) != 0) {
      (*(void (**)(s32, s32))(param_1 + 0x48))(iVar3, 9);
    }
  }
  uVar5 = func_02080b08();
  *(u32 *)(iVar3 + 0xc) = *(u32 *)(iVar3 + 0xc) | 0x40;
  f = (*(u32 *)(iVar3 + 0xc) & 0x4) != 0;
  if (f != 0) {
    func_0207f4e0((u16 *)(iVar3 + 0x18));
    func_02080b1c(uVar5);
    return 0;
  }
  func_02080b1c(uVar5);
  return iVar3;
L18c:
  f = (*(vu32 *)(param_1 + 0x10) & 0x10) != 0;
  if (f != 0) {
    *(vu32 *)(param_1 + 0x10) = *(vu32 *)(param_1 + 0x10) & 0xffffffef;
    if ((*(u32 *)(param_1 + 0x4c) & 0x400) != 0) {
      func_02088364(auStack_60);
      auStack_60[2] = (u32)param_1;
      (*(void (**)(u32 *, s32))(param_1 + 0x48))(auStack_60, 10);
    }
  }
  f = (*(vu32 *)(param_1 + 0x10) & 0x40) != 0;
  if (f != 0) {
    *(vu32 *)(param_1 + 0x10) = *(vu32 *)(param_1 + 0x10) & 0xffffffbf;
    *(vu32 *)(param_1 + 0x10) = *(vu32 *)(param_1 + 0x10) | 8;
    func_0207f4e0((u16 *)(param_1 + 0xe));
  }
  func_02080b1c(uVar5);
  return 0;
}
