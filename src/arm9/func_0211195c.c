#include "ctx.h"

extern u32 data_0215be48;
extern void func_0206c880(u32 a, void *b, s32 c);
extern void func_0206c7d4(u32 a, void *b, s32 c);
extern void func_020fc190(void *a, s32 b, s32 c);
extern void func_0207c910(s32 a, s32 b, void *c, s32 d);
extern void func_0211320c(s32 a, void *b, s32 c, s32 d);
extern void func_021131dc(s32 a, void *b, s32 c, s32 d);
extern void func_020fc594(s32 a, s32 b, s32 c);
extern void func_0200760c(s32 a, s32 b, s32 c);
extern void func_020075f4(s32 a, s32 b, s32 c);

void func_0211195c(u8 *param_1)
{
  s32 iVar1;
  s32 iVar2;
  u8 *O;

  O = *(u8 **)&data_0215be48;
  switch (*(s32 *)(param_1 + 4)) {
  case 1:
    func_0206c880(0x06204000, param_1 + 0x818, 0x4000);
    func_0206c880(0x06203000, param_1 + 20, 0x800);
    func_0206c7d4(0x05000400, param_1 + 0x481c, 0xe0);
    *(vu16 *)0x0400100e = (*(vu16 *)0x0400100e & 0x43) | 0x708;
    func_020fc190(param_1 + 20, 0x400, 7);
    func_0207c910(31, 0xe0, param_1 + 0x481c, 0xe0);
    func_0211320c(3, param_1 + 0x818, 0, 0x4000);
    func_021131dc(3, param_1 + 20, 0, 0x800);
    break;
  case 2:
    func_020fc594(2, 8, 1);
    func_0200760c(*(s16 *)(param_1 + 8), *(s16 *)(param_1 + 10), *(s16 *)(param_1 + 12));
    *(s32 *)param_1 = 1;
    break;
  case 3:
    func_020fc594(2, 8, 1);
    func_020075f4(*(s16 *)(param_1 + 8), *(s16 *)(param_1 + 10), *(s16 *)(param_1 + 12));
    *(s32 *)param_1 = 2;
    break;
  case 4:
    func_020fc594(2, 8, 0);
    *(vu32 *)0x04001000 = *(vu32 *)0x04001000 & 0xffff1fff;
    *(s32 *)param_1 = 0;
    break;
  case 0:
  default:
    iVar2 = *(s32 *)(O + 0xa8);
    if (iVar2 != 1) {
      iVar1 = *(s32 *)(O + 0xb8);
      if (iVar1 != 10 && iVar1 != 3 && iVar1 != 0x2a && iVar2 != 11 && *(s32 *)param_1 == 0) {
        func_020fc594(2, 8, 0);
      }
    }
    break;
  }
  *(s32 *)(param_1 + 4) = 0;
}
