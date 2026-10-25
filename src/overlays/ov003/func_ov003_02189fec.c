#pragma avoid_byte strb
#include "ctx.h"

typedef struct { u32 w[3]; } T3;
typedef struct { u8 pad[0x3b8]; u32 f3b8; } PB8;

extern u32 data_02152cd8;
extern u32 data_0214f460;
extern u32 data_02159444;
extern void func_020ab02c(u32 a, void *b, void *c);
extern void func_02067e34(void *a, void *b, void *c);
extern void func_01ff832c(u32 a, void *b, void *c, void *d);
extern s32 func_02067df0(void *a, void *b);
extern void func_ov003_0218ab10(int p, int a, int b, void *c, int d, int e);
extern s32 func_02009dfc(void *a, void *b, void *c);
extern void func_0203e8cc(int p, int a, int b);

static inline u8 SwapOld(u32 v, u8 *p)
{
  u8 old;
  *(u8 *)(p) = (u8)(v);
  return old;
}

void func_ov003_02189fec(int param_1)
{
  u32 st[12];
  s32 iVar1;
  s32 uVar2;
  u16 zv;

  st[3] = *(u32 *)((u8 *)&data_02152cd8 + 0x4c);
  st[4] = *(u32 *)((u8 *)&data_02152cd8 + 0x58);
  st[5] = *(u32 *)((u8 *)&data_02152cd8 + 0x64);
  func_020ab02c(data_0214f460, &st[6], (void *)(param_1 + 0x2c4));
  func_02067e34(&st[6], (void *)(param_1 + 0x2c4), &st[6]);
  *(T3 *)&st[9] = *(T3 *)(*(u8 **)((u8 *)*(u32 *)&data_02159444 + 0x1c) + 48);
  func_01ff832c(0x3000, &st[6], &st[9], (void *)(param_1 + 0x3b4));
  ((PB8 *)param_1)->f3b8 += 0xa000;
  uVar2 = func_02067df0(&st[6], &st[3]);

  if (uVar2 > 0) {
    *(s16 *)((u8 *)param_1 + 256 + 46) = 0x1000;
  } else {
    *(u16 *)((u8 *)param_1 + 256 + 46) = 0xf000;
  }
  func_ov003_0218ab10(param_1, 0, 0x1ff, (void *)(param_1 + 0x348), 0x14d2, 2);
  st[0] = *(u32 *)((u8 *)&data_02152cd8 + 0x54);
  st[1] = *(u32 *)((u8 *)&data_02152cd8 + 0x60);
  st[2] = *(u32 *)((u8 *)&data_02152cd8 + 0x6c);
  iVar1 = func_02009dfc(&st[0], (void *)(param_1 + 420), (void *)(param_1 + 396));
  if (iVar1 == 1) goto LA;
  if (iVar1 != 2) goto LD;
  goto LB;
LA:
  func_0203e8cc(param_1, 0, 0x1e1);
  func_0203e8cc(param_1, 1, 0);
  zv = 0;
  SwapOld(zv, (u8 *)param_1 + 147);
  *(u16 *)((u8 *)param_1 + 256 + 46) = zv;
  return;
LB:
  func_0203e8cc(param_1, 0, 0x1e2);
  func_0203e8cc(param_1, 1, 0);
  zv = 0;
  SwapOld(zv, (u8 *)param_1 + 147);
  *(u16 *)((u8 *)param_1 + 256 + 46) = zv;
  return;
LD:
  func_0203e8cc(param_1, 0, 0);
  return;
}
