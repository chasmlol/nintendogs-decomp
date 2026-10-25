#pragma avoid_byte strb
#include "ctx.h"

extern u32 data_02159444;

typedef struct {
  u32 w[3];
} T12;

extern s32 func_02009dfc(void *a, void *b, void *c);
extern void func_02067e34(void *a, void *b, void *c);
extern s32 func_02039588(u8 *p);
extern void func_0203e908(u8 *p, u32 n);

static inline u32 SwapOld(u32 v, vu8 *p)
{
  u32 old;
  *(u8 *)(p) = (u8)(v);
  return old;
}

u32 func_ov003_0218c504(u8 *param_1, u32 param_2)
{
  s32 r4;
  u8 *Y;
  u32 a[3];
  Y = *(u8 **)(*(u8 **)&data_02159444 + 0x1c);
  *(T12 *)a = *(T12 *)(Y + 48);
  func_02067e34(a, param_1 + 672, a);
  r4 = func_02009dfc(a, param_1 + 420, param_1 + 396);
  SwapOld(param_2, (vu8 *)(param_1 + 169));
  if (func_02039588(param_1) != 0) {
    return 1;
  }
  if (*(s8 *)(param_1 + 141) == 7) {
    switch (param_2) {
    case 0:
      if (r4 == 1) {
        func_0203e908(param_1, 788);
      } else {
        func_0203e908(param_1, 0x315);
      }
      return 1;
    case 1:
    case 2:
    case 3:
      if (r4 == 1) {
        func_0203e908(param_1, 0x316);
      } else {
        func_0203e908(param_1, 0x317);
      }
      return 1;
    }
  }
  func_0203e908(param_1, (s16)(r4 + (s32)(param_2 * 4 + 792)));
  return 1;
}
