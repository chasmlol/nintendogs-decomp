#pragma avoid_byte strb
#include "ctx.h"

extern s32 func_020f5220(void);
extern void func_020f3bdc(u32 a);
extern void func_ov004_02169ff4(u8 *p);
extern u32 func_02028130(u8 *p);
extern void func_020f394c(u8 *p, u32 n);
extern s32 func_020f523c(void);
extern void func_02029504(u8 *p);
extern void func_ov004_0215c2ec(void);
extern void func_ov004_0215c324(u32 a);
extern void func_ov004_0215c2b4(void);
extern void func_0203e908(u8 *p, u32 n);

static inline void ClearByte(u8 *p)
{
    u32 z = 0;
    *(u8 *)(p) = (u8)(z);
}

void func_ov004_02165f00(u8 *param_1)
{
  s32 bVar2;
  s32 iVar4;
  s8 cVar1;
  *(s32 *)(param_1 + 0x484) = 0;
  *(s32 *)(param_1 + 0x2a0) = *(s32 *)(param_1 + 0x2a0) - *(s32 *)(param_1 + 0x484);
  *(s32 *)(param_1 + 0x3f0) = *(s32 *)(param_1 + 0x3f0) - *(s32 *)(param_1 + 0x484);
  *(s32 *)(param_1 + 0x3fc) = *(s32 *)(param_1 + 0x3fc) - *(s32 *)(param_1 + 0x484);
  *(s32 *)(param_1 + 0x488) = *(s32 *)(param_1 + 0x488) + 1;
  bVar2 = func_020f5220();
  if (bVar2 != 0) {
    func_020f3bdc(*(u32 *)(param_1 + 0x484));
  }
  func_ov004_02169ff4(param_1);
  if (*(u16 *)(param_1 + 0xfc) == 0x50 && (bVar2 = func_020f5220(), bVar2 != 0)) {
    func_020f394c(param_1 + 0x354, func_02028130(param_1));
  }
  if (*(u16 *)(param_1 + 0xfc) == 0x50 && (iVar4 = func_020f523c(), iVar4 != 0) && *(s16 *)(param_1 + 0xf0) == 0x4f) {
    func_02029504(param_1);
    cVar1 = *(s8 *)(param_1 + 0xb7);
    switch (cVar1) {
    case 1:
      func_ov004_0215c2ec();
      break;
    case 2:
      func_ov004_0215c324(1);
      break;
    case 3:
      func_ov004_0215c2b4();
      break;
    }
    ClearByte(param_1 + 0xb7);
  }
  if (*(u16 *)(param_1 + 0xfc) != 0xa0) {
    return;
  }
  func_0203e908(param_1, 0x48b);
}
