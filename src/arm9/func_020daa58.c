#include "ctx.h"

extern void func_02067e68(u8 *a, u8 *b, u8 *c);
extern void func_020be298(u8 *p, s32 a);
extern void func_02067d04(s32 *a, s32 *b, s32 *c);
extern void func_02006a30(s32 *a, s32 *b);
extern s32 func_020c8164(s32 a, s32 b);
extern void func_020dadb8(void);
extern void func_020dad84(void);
extern void func_020dad68(void);
extern void func_020dad5c(void);
extern void func_020c6300(u8 *p, s32 a, u8 *b, u8 *c, s32 d, void *e, s32 f, void *g, void *h, void *i);

void func_020daa58(u8 *param_1)
{
  s32 frame[9];
  s32 **piVar2;

  piVar2 = *(s32 ***)(param_1 + 0x214);
  *(s32 *)(param_1 + 0xb4) = *(s32 *)(param_1 + 0xb4) + **piVar2;
  func_02067e68(param_1 + 0xbc, param_1 + 0xb0, param_1 + 0xbc);
  func_020be298(param_1, *(s32 *)((u8 *)*piVar2 + 0x5c));
  { s32 t0 = *(s32 *)(param_1 + 0xc8); s32 t2 = *(s32 *)(param_1 + 0xd0); s32 t1 = *(s32 *)(param_1 + 0xcc);
    frame[0] = t0; frame[1] = t1; frame[2] = t2; }
  { s32 t5 = *(s32 *)(param_1 + 0xdc); s32 t4 = *(s32 *)(param_1 + 0xd8); s32 t3 = *(s32 *)(param_1 + 0xd4);
    frame[3] = t3; frame[4] = t4; frame[5] = t5; }
  func_02067d04(&frame[0], &frame[3], &frame[6]);
  func_02006a30(&frame[0], &frame[0]);
  func_02006a30(&frame[6], &frame[6]);
  func_02067d04(&frame[6], &frame[0], &frame[3]);
  *(s32 *)(param_1 + 0xc8) = frame[0];
  *(s32 *)(param_1 + 0xcc) = frame[1];
  *(s32 *)(param_1 + 0xd0) = frame[2];
  *(s32 *)(param_1 + 0xd4) = frame[3];
  *(s32 *)(param_1 + 0xd8) = frame[4];
  *(s32 *)(param_1 + 0xdc) = frame[5];
  *(s32 *)(param_1 + 0xe0) = frame[6];
  *(s32 *)(param_1 + 0xe4) = frame[7];
  *(s32 *)(param_1 + 0xe8) = frame[8];
  func_020c6300(param_1, *(s32 *)(param_1 + 0xf8), param_1 + 0xfc, param_1 + 0x108,
                func_020c8164((s32)*(u16 *)(param_1 + 0xa0), *(s32 *)(param_1 + 0xf8)), (void *)func_020dadb8, 0, (void *)func_020dad84, (void *)func_020dad68, (void *)func_020dad5c);
}
