#pragma avoid_byte strb
#include "ctx.h"

extern u32 func_020038b8(void *p, u32 n);
extern u8 *func_ov019_0215ccd8(u8 *p);
extern void func_02066b80(void *p);

static inline void SwapByte(u32 v, vu8 *p)
{
  *(u8 *)(p) = (u8)(v);
}

void func_ov019_0215e234(u8 *param_1, void *param_2)
{
  u32 uVar2;
  u8 *iVar3;
  u32 *puVar4;
  uVar2 = func_020038b8(param_2, 60);
  *(u32 *)(param_1 + 0xac) = uVar2;
  puVar4 = *(u32 **)(param_1 + 0xac);
  if (puVar4 != 0) {
    puVar4[0] = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    func_02066b80(*(u8 **)(param_1 + 0xac) + 12);
  }
  iVar3 = func_ov019_0215ccd8(param_1);
  if (iVar3 != 0) {
    *(u32 *)(iVar3 + 0x24) = 0x19a;
    *(u32 *)(iVar3 + 0x28) = 0x1806;
    *(u32 *)(iVar3 + 0x2c) = 0x19a;
  }
  iVar3 = func_ov019_0215ccd8(param_1);
  if (iVar3 != 0) {
    *(u16 *)(iVar3 + 0x20) = *(u16 *)(iVar3 + 0x20) & ~1;
    SwapByte(*(u8 *)(iVar3 + 1) & ~1, (vu8 *)(iVar3 + 1));
  }
  func_02066b80(param_1 + 0x48);
}
