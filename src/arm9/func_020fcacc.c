#include "ctx.h"

extern u32 data_0215be48;

extern void func_0211195c(u8 *p);

void func_020fcacc(void)
{
  u8 *p;
  s32 iVar2;
  p = *(u8 **)&data_0215be48;
  if (p == 0) {
    return;
  }
  if (*(u32 *)(p + 0xb0) != 0) {
    return;
  }
  func_0211195c(p + 0xc840);
  p = *(u8 **)&data_0215be48;
  iVar2 = *(s32 *)(p + 0xb8);
  if (iVar2 == 1) {
    return;
  }
  if (iVar2 == 10) {
    return;
  }
  if (iVar2 == 0x2a) {
    return;
  }
  if (iVar2 == 0x29) {
    return;
  }
  if (*(u32 *)(p + 0x4874) != 0) {
    *(u32 *)(p + 0x4874) = 0;
    p = *(u8 **)&data_0215be48;
    { u32 w = *(vu32 *)(p + 0x4878); *(u32 *)(p + 0x4870) = *(u32 *)(p + 0x4870) | w; }
  }
  ((void (*)(u8 *))*(u32 *)(*(u8 **)(*(u8 **)&data_0215be48 + 0xc0) + 0x20))(*(u8 **)&data_0215be48 + 0xc4);
}
