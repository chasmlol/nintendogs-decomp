#pragma avoid_byte strb
#include "ctx.h"

extern u32 func_020bcf08(u32 a);
extern void func_02066b80(u8 *p);
extern void func_0209d5bc(u8 *p, s32 n);
extern void func_0208f544(u8 *p, u32 fn);
extern void func_0208f53c(u8 *p, u32 fn);
extern void func_0208f7e4(u8 *p, u32 v);
extern void func_0208f820(u8 *p, u32 v);
extern void func_0208f7d0(u8 *p, u32 v);
extern void func_020bd8b0(void);
extern void func_020bd888(void);
extern u8 data_027c0bbc[];

static inline void SwapZ(u32 v, vu8 *p)
{
  *(u8 *)(p) = (u8)(v);
}

void func_020bdd1c(u8 *param_1, s32 param_2)
{
  u32 t;
  *(s16 *)(param_1 + 0x8a) = 0;
  *(s16 *)(param_1 + 0x90) = 0;
  *(s16 *)(param_1 + 0x92) = 0;
  *(s16 *)(param_1 + 0x94) = (s16)param_2;
  *(s16 *)(param_1 + 0x96) = (s16)func_020bcf08(param_2);
  *(s16 *)(param_1 + 0x98) = -1;
  *(s16 *)(param_1 + 0x8c) = -1;
  *(s16 *)(param_1 + 0x9a) = -1;
  *(s16 *)(param_1 + 0x8e) = -1;
  *(s16 *)(param_1 + 0x9c) = -1;
  *(s16 *)(param_1 + 0x9e) = 0;
  *(s16 *)(param_1 + 0xa0) = 0;
  *(s16 *)(param_1 + 0xa2) = 0;
  *(s16 *)(param_1 + 0xa4) = 0;
  *(s32 *)(param_1 + 0x16c) = 0;
  *(s16 *)(param_1 + 0xa6) = 255;
  *(s32 *)(param_1 + 0xa8) = 0;
  *(s32 *)(param_1 + 0xac) = 1000;
  *(s32 *)(param_1 + 0xbc) = 0;
  *(s32 *)(param_1 + 0xc0) = 0;
  *(s32 *)(param_1 + 0xc4) = 0;
  *(s32 *)(param_1 + 0xb0) = 0;
  *(s32 *)(param_1 + 0xb4) = 0;
  *(s32 *)(param_1 + 0xb8) = 0;
  func_02066b80(param_1 + 200);
  *(s32 *)(param_1 + 0xf8) = 2048;
  *(s32 *)(param_1 + 0xfc) = 0;
  *(s32 *)(param_1 + 0x100) = 0;
  *(s32 *)(param_1 + 0x104) = 0;
  *(s32 *)(param_1 + 0x120) = 2048;
  t = 0x19a;
  *(u32 *)(param_1 + 0x124) = t;
  *(u32 *)(param_1 + 0x128) = t;
  *(s32 *)(param_1 + 0x12c) = 0;
  *(s32 *)(param_1 + 0x168) = 1;
  SwapZ(0u, (vu8 *)(param_1 + 0x160));
  *(s32 *)(param_1 + 0x170) = 0;
  *(s32 *)(param_1 + 0x174) = 0;
  *(s32 *)(param_1 + 0x178) = 0;
  *(s32 *)(param_1 + 0x17c) = 0;
  *(s32 *)(param_1 + 0x180) = 0;
  *(s32 *)(param_1 + 0x184) = 0;
  *(s32 *)(param_1 + 0x188) = 0;
  func_0209d5bc(param_1 + 400, (s32)*(s16 *)(param_1 + 0x94));
  *(s16 *)(param_1 + 0x1dc) = 0;
  *(s32 *)(param_1 + 0x1e0) = 0;
  *(s32 *)(param_1 + 0x1f4) = 0;
  *(s32 *)(param_1 + 0x1f8) = 0;
  *(s32 *)(param_1 + 0x1fc) = 0;
  *(s32 *)(param_1 + 0x1f0) = 0;
  *(s32 *)(param_1 + 0x200) = 0;
  *(s32 *)(param_1 + 0x204) = 0;
  *(s32 *)(param_1 + 0x208) = 0;
  *(s32 *)(param_1 + 0x20c) = 0;
  *(s32 *)(param_1 + 0x210) = 0;
  func_0208f544(param_1, (u32)func_020bd8b0);
  func_0208f53c(param_1, (u32)func_020bd888);
  if (*(s32 *)(param_1 + 0x1c) != 0) {
    if (param_1 != 0) {
      func_0208f7e4(param_1, (u16)(data_027c0bbc[0] | (data_027c0bbc[1] << 5) | (data_027c0bbc[2] << 10)));
    }
    func_0208f820(param_1, 0x7fff);
    func_0208f7d0(param_1, 3);
    *(s32 *)(param_1 + 0x24) = 4096;
    *(s32 *)(param_1 + 0x28) = 4096;
    *(s32 *)(param_1 + 0x2c) = 4096;
    *(u16 *)(param_1 + 0x20) = *(u16 *)(param_1 + 0x20) | 1;
    return;
  }
  return;
}
