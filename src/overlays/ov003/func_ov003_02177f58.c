#pragma avoid_byte strb
#include "ctx.h"

extern void *data_0214f460;
extern u8 data_02152cd8[];
extern void func_02039448(u8 *p);
extern void func_020ab064(void *a, void *b);
extern void func_01ff832c(s32 a, void *b, void *c, void *d);
extern void func_02037450(u8 *p, s32 v);
extern s32 func_020bc14c(void);
extern s32 func_02044c8c(void);
extern s32 func_02026e68(u8 *p);
extern s32 func_0202a60c(u8 *p);
extern void func_0203e8cc(u8 *p, s32 a, s32 b);
extern s32 func_02035770(u8 *p, s32 v);
extern s32 func_02039cc4(u8 *p);
extern void func_020bbe14(s32 a, s32 b);
extern void func_02039c68(u8 *p);
extern void func_0203e908(u8 *p, s32 v);
extern void func_ov003_02179bb8(u8 *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j, s32 k);

static inline void SwapZero(u8 *p)
{
  u32 v = 0;
  *(u8 *)(p) = (u8)(v);
}

void func_ov003_02177f58(u8 *param_1)
{
  s32 iVar2;
  s32 local_18[3];

  iVar2 = 1;
  func_02039448(param_1);
  func_020ab064(data_0214f460, param_1 + 948);
  local_18[0] = *(s32 *)(data_02152cd8 + 0x4c);
  local_18[1] = *(s32 *)(data_02152cd8 + 0x58);
  local_18[2] = *(s32 *)(data_02152cd8 + 0x64);
  func_01ff832c(0x5000, local_18, param_1 + 672, param_1 + 632);
  func_02037450(param_1, 0x300);
  if (*(s16 *)(param_1 + 0x152) == 0x1e3) goto body1;
  if (*(s16 *)(param_1 + 0x152) == 0x1e4) goto body1;
  if (((*(u16 *)0x04000304 & 0x8000) >> 15) != 0) goto tail;
  if (*(s8 *)(param_1 + 136) != func_020bc14c()) goto tail;
  if (*(s8 *)(param_1 + 136) != func_02044c8c()) goto tail;
  if (func_02026e68(param_1) == 0) goto tail;
  if (func_0202a60c(param_1) == 1) {
    func_0203e8cc(param_1, 0, 0x1e3);
  } else {
    func_0203e8cc(param_1, 0, 0x1e4);
  }
  SwapZero(param_1 + 147);
  goto tail;
body1:
  if (*(s8 *)(param_1 + 136) != func_020bc14c()) goto tail;
  if (*(s8 *)(param_1 + 136) != func_02044c8c()) goto tail;
  if (func_02035770(param_1, 30) == 0) goto tail;
  if (func_02039cc4(param_1) != 0) {
    func_020bbe14(4, *(s8 *)(param_1 + 136));
    func_02039c68(param_1);
  }
  *(s32 *)(param_1 + 0x48c) = 0;
  func_0203e908(param_1, 0x3a8);
  iVar2 = 0;
tail:
  func_ov003_02179bb8(param_1, 0, 0x1ff, iVar2, 1, 1, 0, 0xb4 < *(u16 *)(param_1 + 0xfc), 0x30, 0, 1, 1);
}
