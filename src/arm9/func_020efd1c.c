#include "ctx.h"

extern void func_02067e68(s32 *a, s32 *b, s32 *c);
extern void func_020be298(u8 *p, u32 n);
extern void func_02067d04(s32 *a, s32 *b, s32 *c);
extern void func_02006a30(s32 *a, s32 *b);
extern u32 func_020c8164(u32 a, u32 b);
extern void func_020c6300(u8 *p, u32 a, void *b, void *c, u32 d, u32 e, u32 f, u32 g, u32 h, u32 i);
extern void func_020efed4(void);
extern void func_020efea0(void);
extern void func_020efe84(void);
extern void func_020efe78(void);

void func_020efd1c(u8 *param_1)
{
  s32 iVar1;
  u8 *piVar2;
  s32 w[9];
  piVar2 = *(u8 **)(param_1 + 0x214);
  *(s32 *)(param_1 + 0xb4) = *(s32 *)(param_1 + 0xb4) + *(s32 *)(*(u8 **)piVar2);
  func_02067e68((s32 *)(param_1 + 0xbc), (s32 *)(param_1 + 0xb0), (s32 *)(param_1 + 0xbc));
  func_020be298(param_1, *(u32 *)(*(u8 **)piVar2 + 0x5c));
  {
    s32 t0 = *(s32 *)(param_1 + 0xc8);
    s32 t2 = *(s32 *)(param_1 + 0xd0);
    s32 t1 = *(s32 *)(param_1 + 0xcc);
    w[0] = t0;
    w[1] = t1;
    w[2] = t2;
  }
  {
    s32 u5 = *(s32 *)(param_1 + 0xdc);
    s32 u4 = *(s32 *)(param_1 + 0xd8);
    s32 u3 = *(s32 *)(param_1 + 0xd4);
    w[3] = u3;
    w[4] = u4;
    w[5] = u5;
  }
  func_02067d04(w, w + 3, w + 6);
  func_02006a30(w, w);
  func_02006a30(w + 6, w + 6);
  func_02067d04(w + 6, w, w + 3);
  *(s32 *)(param_1 + 0xc8) = w[0];
  *(s32 *)(param_1 + 0xcc) = w[1];
  *(s32 *)(param_1 + 0xd0) = w[2];
  *(s32 *)(param_1 + 0xd4) = w[3];
  *(s32 *)(param_1 + 0xd8) = w[4];
  *(s32 *)(param_1 + 0xdc) = w[5];
  *(s32 *)(param_1 + 0xe0) = w[6];
  *(s32 *)(param_1 + 0xe4) = w[7];
  *(s32 *)(param_1 + 0xe8) = w[8];
  iVar1 = func_020c8164(*(u16 *)(param_1 + 0xa0), *(u32 *)(param_1 + 0xf8));
  func_020c6300(param_1, *(u32 *)(param_1 + 0xf8), param_1 + 0xfc, param_1 + 0x108, iVar1,
                (u32)func_020efed4, 0, (u32)func_020efea0, (u32)func_020efe84, (u32)func_020efe78);
}
