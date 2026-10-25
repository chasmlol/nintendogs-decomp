#pragma avoid_byte strb
#include "ctx.h"

extern void *func_020038b8(u32 p, int a);
extern u8 *func_ov019_0215ccd8(int p);
extern u8 *func_ov019_021611a0(void);

void func_ov019_0215dbdc(int param_1, u32 param_2)
{
  s32 k;
  s32 k4;
  s32 iVar7;
  s16 v44;
  u32 *puVar4;
  s32 iVar2;
  s32 iVar3;
  s32 iVar5;
  u32 *p;

  p = (u32 *)func_020038b8(param_2, 12);
  *(u32 *)(param_1 + 0xac) = (u32)p;
  puVar4 = *(u32 **)(param_1 + 0xac);
  if (puVar4 != 0) {
    puVar4[0] = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
  }
  iVar2 = (s32)func_ov019_0215ccd8(param_1);
  if (iVar2 != 0) {
    *(u32 *)(iVar2 + 0x24) = 0x40;
    *(u32 *)(iVar2 + 0x28) = 0x800;
    *(u32 *)(iVar2 + 0x2c) = 0x40;
  }
  iVar2 = (s32)func_ov019_0215ccd8(param_1);
  if (iVar2 != 0) {
    *(u16 *)((u8 *)iVar2 + 32) = *(u16 *)((u8 *)iVar2 + 32) & ~1;
    ((u8 *)iVar2)[1] &= ~1;
  }
  *(u32 *)(param_1 + 0x3c) = 0;
  *(u32 *)(param_1 + 0x40) = 0x1000;
  *(u32 *)(param_1 + 0x44) = 0;
  *(u32 *)(param_1 + 0x48) = 0x1000;
  *(u32 *)(param_1 + 0x4c) = 0;
  *(u32 *)(param_1 + 0x50) = 0;
  *(u32 *)(param_1 + 0x54) = 0;
  *(u32 *)(param_1 + 0x58) = 0;
  *(u32 *)(param_1 + 0x5c) = 0x1000;
  *(u32 *)(param_1 + 0x60) = 0;
  *(u32 *)(param_1 + 0x64) = 0xfffff000;
  *(u32 *)(param_1 + 0x68) = 0;
  iVar5 = (s16)*(s16 *)(param_1 + 0x1c);
  (void)v44;
  k = (s16)(iVar5 + (s16)(iVar5 + 1));
  if (k < 0 || k >= 50) {
    iVar3 = 0;
  } else {
    iVar3 = (s32)func_ov019_021611a0();
    iVar3 = *(s32 *)(iVar3 + k * 4 + 4);
  }
  if (iVar3 != 0) {
    {
      v44 = *(s16 *)(param_1 + 0x2c);
      if (iVar3 != 0) {
        *(s16 *)(iVar3 + 0x2c) = v44;
      }
    }
    *(s16 *)(iVar3 + 0x28) = 10;
    *(s16 *)(iVar3 + 0x1e) = 1;
  }
  k = (s16)(*(s16 *)(param_1 + 0x1c) + (s16)(iVar5 + 2));
  if (k < 0 || k >= 50) {
    iVar3 = 0;
  } else {
    iVar3 = (s32)func_ov019_021611a0();
    iVar3 = *(s32 *)(iVar3 + k * 4 + 4);
  }
  if (iVar3 != 0) {
    {
      v44 = *(s16 *)(param_1 + 0x2c);
      if (iVar3 != 0) {
        *(s16 *)(iVar3 + 0x2c) = v44;
      }
    }
    *(s16 *)(iVar3 + 0x28) = 11;
    *(s16 *)(iVar3 + 0x1e) = 1;
  }
  k = (s16)(*(s16 *)(param_1 + 0x1c) + (s16)(iVar5 + 3));
  if (k < 0 || k >= 50) {
    iVar3 = 0;
  } else {
    iVar3 = (s32)func_ov019_021611a0();
    iVar3 = *(s32 *)(iVar3 + k * 4 + 4);
  }
  if (iVar3 != 0) {
    {
      v44 = *(s16 *)(param_1 + 0x2c);
      if (iVar3 != 0) {
        *(s16 *)(iVar3 + 0x2c) = v44;
      }
    }
    *(s16 *)(iVar3 + 0x28) = 12;
    *(s16 *)(iVar3 + 0x1e) = 1;
  }
  k4 = (s16)(*(s16 *)(param_1 + 0x1c) + (s16)(iVar5 + 4));
  if (k4 < 0 || k4 >= 50) {
    iVar7 = 0;
  } else {
    iVar7 = (s32)func_ov019_021611a0();
    iVar7 = *(s32 *)(iVar7 + k4 * 4 + 4);
  }
  if (iVar7 != 0) {
    {
      v44 = *(s16 *)(param_1 + 0x2c);
      if (iVar7 != 0) {
        *(s16 *)(iVar7 + 0x2c) = v44;
      }
    }
    *(s16 *)(iVar7 + 0x28) = 13;
    *(s16 *)(iVar7 + 0x1e) = 1;
  }
}
