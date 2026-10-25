#include "ctx.h"

typedef struct { u32 w[3]; } T3;

extern u32 data_0214f464;
extern u32 data_0214f460;
extern u32 data_02159444;
extern u32 data_02159428;
extern void func_01ff8980(void *p);
extern void func_020ab02c(u32 a, int *p, void *out);

#define FX(a, b) ((u32)((s32)(((s64)(s32)(a) * (s64)(s32)(b) + 0x800) >> 12)))

void func_0202874c(int param_1, int *param_2)
{
  T3 tmp;
  u32 out[3];
  s32 k;
  u8 *R;
  u8 *P;
  u8 *Q;
  u8 *dst;

  if (((*(vu16 *)0x04000304 & 0x8000) >> 15) == 0) {
    P = *(u8 **)&data_0214f464;
    if (*(u32 *)(P + 0x64) == 0) {
      *(u32 *)(P + 0x64) = data_0214f460;
      R = *(u8 **)((u8 *)*(u32 *)&data_02159444 + 0x1c);
      Q = *(u8 **)&data_0214f464;
      dst = Q + 0x68;
      *(T3 *)dst = *(T3 *)(R + 0x48);
      func_01ff8980(dst);
    }
    P = *(u8 **)&data_0214f464;
    tmp = *(T3 *)(P + 0x68);
    k = -0x3000 - *(s32 *)(*(u8 **)&data_02159428 + 0xc);
    out[0] = FX(tmp.w[0], k);
    out[1] = FX(tmp.w[1], k);
    out[2] = FX(tmp.w[2], k);
    func_020ab02c(data_0214f460, param_2, out);
    return;
  }
  R = *(u8 **)((u8 *)*(u32 *)&data_02159444 + 0x1c);
  *(T3 *)param_2 = *(T3 *)(R + 0x30);
}
