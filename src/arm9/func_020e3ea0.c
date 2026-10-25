#include "ctx.h"

typedef struct { u32 w[3]; } T3;

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

extern u8 data_02159444[];
extern u8 data_02159468[];
extern s32 func_02044ca0(s32 a);
extern void func_02067e34(s32 *a, s32 *b, s32 *c);
extern void func_02006a30(s32 *a, s32 *b);
extern void func_02067d04(s32 *a, s32 *b, s32 *c);
extern void func_020bfb2c(s32 a, s32 *b, s32 c, s32 d, s32 e, s32 *f);
extern void func_020e4260(u8 *p);
extern void func_020c5fbc(u8 *p);
extern s32 func_02067c30(s32 *a);
extern void func_0209d430(s32 *a, s32 b, s32 c);
extern void func_02044b58(void);

void func_020e3ea0(u8 *param_1)
{
  s32 iVar3;
  s32 Rsrc[3];
  s32 B[3];
  s32 A[3];
  s32 C[3];
  s32 Bsrc[3];
  iVar3 = func_02044ca0(*(s16 *)(param_1 + 0x9c));
  if (iVar3 == 0) {
    return;
  }
  *(T3 *)(param_1 + 0xbc) = *(T3 *)(*(u8 **)data_02159444 + 0x9c);
  func_02044ca0(*(s16 *)(param_1 + 0x9c));
  *(T3 *)Bsrc = *(T3 *)(*(u8 **)(*(u8 **)data_02159444 + 0x1c) + 0x30);
  func_02067e34((s32 *)(param_1 + 0xbc), Bsrc, A);
  A[1] = 0;
  func_02006a30(A, A);
  B[0] = 0;
  B[2] = 0;
  B[1] = (s32)0xfffff000;
  func_02067d04(A, B, C);
  *(s32 *)(param_1 + 0xc8) = C[0];
  *(s32 *)(param_1 + 0xcc) = C[1];
  *(s32 *)(param_1 + 0xd0) = C[2];
  *(s32 *)(param_1 + 0xd4) = A[0];
  *(s32 *)(param_1 + 0xd8) = A[1];
  *(s32 *)(param_1 + 0xdc) = A[2];
  *(s32 *)(param_1 + 0xe0) = B[0];
  *(s32 *)(param_1 + 0xe4) = B[1];
  *(s32 *)(param_1 + 0xe8) = B[2];
  if ((*(u16 *)(*(u8 **)data_02159444 + 0x84) & 1) == 0) {
    goto NORMAL;
  }
  if (*(s32 *)(*(u8 **)data_02159468 + 0x24) == 0) {
    goto RET2;
  }
NORMAL:
  *(T3 *)Rsrc = *(T3 *)(*(u8 **)(*(u8 **)data_02159444 + 0x1c) + 0x48);
  func_020bfb2c(iVar3, (s32 *)(param_1 + 0xbc), 0x40, 0x40, 0x80, (s32 *)(param_1 + 0xb0));
  *(s32 *)(param_1 + 0xb0) = *(s32 *)(param_1 + 0xb0) + FX_Mul(Rsrc[0], 0x1ec);
  *(s32 *)(param_1 + 0xb8) = *(s32 *)(param_1 + 0xb8) + FX_Mul(Rsrc[2], 0x1ec);
  if (*(s32 *)(param_1 + 0xb4) > 0x802) {
    *(s32 *)(param_1 + 0xb4) = 0x802;
  }
  if (*(s32 *)(param_1 + 0xb4) < -2050) {
    *(s32 *)(param_1 + 0xb4) = -2050;
  }
  func_020c5fbc(param_1);
  iVar3 = func_02067c30((s32 *)(param_1 + 0xb0));
  func_0209d430((s32 *)(param_1 + 400), 4, iVar3);
  func_02044b58();
  return;
RET2:
  func_020e4260(param_1);
  return;
}
