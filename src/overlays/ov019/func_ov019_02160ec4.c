#include "ctx.h"
#pragma opt_strength_reduction off
#pragma opt_propagation off
#pragma opt_loop_invariants off
#pragma opt_common_subs off

extern u8 data_ov019_02161550[];
extern u8 data_ov019_02161568[];
extern u8 data_ov019_02161584[];
extern u8 data_ov019_021615a0[];
extern u8 data_ov019_021615bc[];
extern u8 data_ov019_021615d8[];
extern u8 *data_ov019_02161614;
extern u8 *data_ov019_02161610;
extern u8 *data_ov019_0216160c;
extern u8 *data_ov019_02161608;
extern u8 *data_ov019_02161604;
extern u8 *data_ov019_02161600;
extern s16 data_02126c68[];
extern u32 data_ov019_0216161c[];
extern s32 func_0208bb30(u8 *p, void *d);
extern void func_0208e398(u8 *p);
extern u8 *func_0208f43c(u8 *p, s32 a);
extern void func_0208f380(void);
extern void func_0208e1e8(u16 *a);
extern u8 *func_0208e150(u8 *p, u16 *a);
extern u8 *func_0208f698(u8 *p);
extern void func_02067e34(void *a, void *b, void *c);
extern void func_02006a30(void *a, void *b);
extern s32 func_02003500(u8 *p, s32 a);
extern void func_0207dc3c(s32 a, s32 b);
extern s32 func_0208f668(u8 *p, s32 a);
extern u8 *func_ov019_0215cbd0(u8 *p, s32 a);
extern void func_0208f588(s32 a, s32 b);
extern u8 *func_ov019_0215d13c(u8 *p, s16 a);
extern u8 *func_0208fb00(u8 *p, s32 a, void *b);
extern u32 func_01ff8958(u32 a, u32 b);

/* slot i+1 of data_ov019_0216161c, addressed as base + i*4 + 4.
   The three sites use different operand types so their address trees differ and are not merged. */
#define SLOT_NEXT(i) (*(u32 *)((u8 *)data_ov019_0216161c + (i) * 4 + 4))
#define SLOT_U(i) (*(u32 *)((u8 *)data_ov019_0216161c + (i) * 4u + 4))
#define SLOT_L(i) (*(u32 *)((u8 *)data_ov019_0216161c + (i) * 4L + 4))

u8 *func_ov019_02160ec4(u8 *param_1)
{
  s32 iVar2;
  s32 iVar3;
  s32 iVar4;
  s32 iVar5;
  s32 iVar6;
  s32 iVar7;
  u8 *puVar9;
  u8 *puVar8;
  u8 *puVar10;
  s32 iVar8;
  s16 sVar2;
  s16 sVar4;
  u16 auStack_30[6];
  s32 handle;
  u32 uVar11;
  u8 *bs;
  u8 *ps;

  iVar2 = func_0208bb30(param_1, data_ov019_02161550);
  iVar3 = func_0208bb30(param_1, data_ov019_02161568);
  iVar4 = func_0208bb30(param_1, data_ov019_02161584);
  iVar5 = func_0208bb30(param_1, data_ov019_021615a0);
  iVar6 = func_0208bb30(param_1, data_ov019_021615bc);
  iVar7 = func_0208bb30(param_1, data_ov019_021615d8);
  func_0208e398(param_1);
  data_ov019_02161614 = func_0208f43c(param_1, iVar2);
  data_ov019_02161610 = func_0208f43c(param_1, iVar3);
  data_ov019_0216160c = func_0208f43c(param_1, iVar4);
  data_ov019_02161608 = func_0208f43c(param_1, iVar5);
  data_ov019_02161604 = func_0208f43c(param_1, iVar6);
  data_ov019_02161600 = func_0208f43c(param_1, iVar7);
  func_0208f380();
  func_0208e1e8(auStack_30);
  puVar9 = func_0208e150(param_1, auStack_30);
  puVar8 = func_0208f698(puVar9);
  *(u32 *)(puVar8 + 0x30) = 0;
  *(u32 *)(puVar8 + 0x34) = 0x4812;
  *(u32 *)(puVar8 + 0x38) = 0x8000;
  *(u32 *)(puVar8 + 0x3c) = 0;
  *(u32 *)(puVar8 + 0x40) = 0x4010;
  *(u32 *)(puVar8 + 0x44) = 0;
  func_02067e34(puVar8 + 60, puVar8 + 48, puVar8 + 72);
  func_02006a30(puVar8 + 72, puVar8 + 72);
  *(s16 *)(puVar8 + 0x6c) = data_02126c68[0];
  *(s16 *)(puVar8 + 0x6e) = data_02126c68[1];
  iVar8 = func_02003500(param_1, 0x7d000);
  data_ov019_0216161c[0x33] = iVar8;
  func_0207dc3c(iVar8, 1);
  handle = func_0208f668(puVar9, 0);
  puVar10 = func_ov019_0215cbd0(param_1, 0);
  data_ov019_0216161c[0] = (u32)puVar10;
  func_0208f588(handle, (s32)puVar10);
  sVar2 = 0;
  bs = (u8 *)data_ov019_0216161c;
  do {
    puVar10 = func_ov019_0215d13c(param_1, sVar2);
    SLOT_NEXT(sVar2) = (u32)puVar10;
    func_0208f588(handle, SLOT_NEXT(sVar2));
    sVar4 = 0;
    do {
      ps = bs + sVar2 * 4;
      iVar5 = *(s32 *)(*(u8 **)(ps + 4) + sVar4 * 4 + 0x78);
      if (iVar5 != 0) {
        func_0208f588(handle, iVar5);
      }
      sVar4 = sVar4 + 1;
    } while (sVar4 < 12);
    if (*(s32 *)((u8 *)SLOT_L(sVar2) + 0xa8) != 0) {
      func_0208f588(handle, *(s32 *)((u8 *)SLOT_L(sVar2) + 0xa8));
    }
    sVar2 = sVar2 + 1;
  } while (sVar2 < 50);
  puVar10 = func_0208fb00(param_1, 0x88, data_ov019_02161614);
  func_0208f588(handle, (s32)puVar10);
  uVar11 = func_01ff8958(0x20000, 0x10000);
  *(u32 *)(puVar10 + 0x24) = uVar11;
  *(u32 *)(puVar10 + 0x28) = uVar11;
  *(u32 *)(puVar10 + 0x2c) = uVar11;
  *(s32 *)(puVar10 + 0x34) = -256;
  return puVar9;
}
