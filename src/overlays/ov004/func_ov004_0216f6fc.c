#pragma avoid_byte strb
#include "ctx.h"

extern u8 data_ov004_0216fdb4[];
extern u8 data_ov004_0216fdd4[];
extern u8 data_ov004_0216fde4[];
extern u8 data_ov004_0216fd94[];
extern u8 data_ov004_0216fd84[];
extern u8 data_ov004_0216fdc4[];
extern u8 data_ov004_0216fdf4[];
extern u8 data_ov004_0216fda4[];
extern void func_ov004_0216ea4c(void);
extern void func_ov004_0216fc70(void);
extern void func_ov004_0216f9c0(void);
extern void func_ov004_0216f9b0(void);
extern void func_ov004_0216f9a0(void);
extern void func_ov004_0216f990(void);
extern void func_ov004_0216f980(void);
extern void func_ov004_0216f970(void);
extern void func_ov004_0216f960(void);


extern u8 *func_0208fb00(u8 *p, u32 a, u32 b);
extern void func_0208f7e4(u8 *p, u32 v);
extern void func_0208f820(u8 *p, u32 v);
extern void func_0208f7d0(u8 *p, u32 v);
extern void func_0208f544(u8 *p, u32 fn);
extern void func_0208f86c(u8 *p, u32 a, u32 fn);
extern void func_020d3500(u8 *p, u32 a, u32 b, u32 c);
extern void func_020d3478(u8 *p, u8 *q);
extern void func_020d33b8(u8 *p, u32 a, u32 *q);
extern void func_020d3408(u8 *p, u32 a);
extern u32 func_02078224(u32 a, u32 b);

u8 *func_ov004_0216f6fc(u8 *param_1, s32 param_2)
{
  u8 *puVar1;
  u32 uVar2;
  u32 loc[3];
  puVar1 = func_0208fb00(param_1, 0xe4, (u32)param_2);
  func_0208f7e4(puVar1, 0x39ce);
  func_0208f820(puVar1, 0x7fff);
  func_0208f7d0(puVar1, 3);
  func_0208f544(puVar1, (u32)func_ov004_0216ea4c);
  puVar1[164] = 0;
  *(u32 *)(puVar1 + 0xa8) = 0;
  *(u32 *)(puVar1 + 0xac) = 0x6000;
  *(u32 *)(puVar1 + 0xb0) = 0;
  func_020d3500(puVar1 + 0x88, (u32)param_1, 9, 0x99a);
  func_020d3478(puVar1 + 0x88, puVar1 + 0xa8);
  func_020d33b8(puVar1 + 0x88, 0, (u32 *)(puVar1 + 0xa8));
  loc[0] = 0;
  loc[2] = 0;
  loc[1] = 0x5000;
  func_020d33b8(puVar1 + 0x88, 8, loc);
  func_020d3408(puVar1 + 0x88, 2);
  uVar2 = func_02078224(*(u32 *)(*(u8 **)(puVar1 + 0x1c) + 8) + 0x40, (u32)data_ov004_0216fdb4);
  func_0208f86c(puVar1, (s16)uVar2, (u32)func_ov004_0216fc70);
  uVar2 = func_02078224(*(u32 *)(*(u8 **)(puVar1 + 0x1c) + 8) + 0x40, (u32)data_ov004_0216fdd4);
  func_0208f86c(puVar1, (s16)uVar2, (u32)func_ov004_0216f9c0);
  uVar2 = func_02078224(*(u32 *)(*(u8 **)(puVar1 + 0x1c) + 8) + 0x40, (u32)data_ov004_0216fde4);
  func_0208f86c(puVar1, (s16)uVar2, (u32)func_ov004_0216f9b0);
  uVar2 = func_02078224(*(u32 *)(*(u8 **)(puVar1 + 0x1c) + 8) + 0x40, (u32)data_ov004_0216fd94);
  func_0208f86c(puVar1, (s16)uVar2, (u32)func_ov004_0216f9a0);
  uVar2 = func_02078224(*(u32 *)(*(u8 **)(puVar1 + 0x1c) + 8) + 0x40, (u32)data_ov004_0216fd84);
  func_0208f86c(puVar1, (s16)uVar2, (u32)func_ov004_0216f990);
  uVar2 = func_02078224(*(u32 *)(*(u8 **)(puVar1 + 0x1c) + 8) + 0x40, (u32)data_ov004_0216fdc4);
  func_0208f86c(puVar1, (s16)uVar2, (u32)func_ov004_0216f980);
  uVar2 = func_02078224(*(u32 *)(*(u8 **)(puVar1 + 0x1c) + 8) + 0x40, (u32)data_ov004_0216fdf4);
  func_0208f86c(puVar1, (s16)uVar2, (u32)func_ov004_0216f970);
  uVar2 = func_02078224(*(u32 *)(*(u8 **)(puVar1 + 0x1c) + 8) + 0x40, (u32)data_ov004_0216fda4);
  func_0208f86c(puVar1, (s16)uVar2, (u32)func_ov004_0216f960);
  return puVar1;
}
