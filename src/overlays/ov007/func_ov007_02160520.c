#pragma avoid_byte strb
#include "ctx.h"

extern u8 data_ov007_02160e70[];
extern u8 data_0214efdc[];
extern u8 data_ov007_02160e68[];
extern u8 data_ov007_02160e6c[];
extern u8 data_ov007_02160e74[];
extern u32 func_02080b08(void);
extern void func_02080b1c(u32 a);
extern u32 func_ov007_0215ece8(void);
extern u32 func_ov007_0215edb8(void);
extern u32 func_ov007_0215da20(void);
extern u32 func_ov007_0215ef8c(void);
extern u32 func_ov007_0215ed94(void);
extern u32 func_ov007_0215ed18(void);
extern u32 func_ov007_0215ef10(void);
extern u32 func_ov007_0215dc90(void);
extern u32 func_ov007_0215dd0c(void);
extern u32 func_ov007_0215f050(u32 a);
extern u32 func_ov007_0215f034(u32 a, u32 b);
extern void func_02093e00(void);
extern u8 *func_020d6cb4(void);
extern s32 func_0205ef3c(u32 *a, u32 *b, u32 c);

#pragma opt_propagation off
void func_ov007_02160520(void)
{
  u32 r6;
  u32 uVar1;
  u32 bVar2;
  s32 sVar3;
  s32 iVar4;
  s32 iVar5;
  s32 bVar6;
  u8 *r0p;
  s32 kk;
  s32 sw;
  s32 *pd;
  r6 = func_02080b08();
  iVar4 = (s32)func_ov007_0215ece8();
  iVar5 = (s32)func_ov007_0215edb8();
  if (iVar5 != 5) goto F6;
  switch (func_ov007_0215da20()) {
  case 20:
    bVar6 = 1;
    goto J6;
  default:
    break;
  }
F6:
  bVar6 = 0;
J6:
  func_02080b1c(r6);
  kk = *(s32 *)data_ov007_02160e70;
  switch (kk) {
  case 0:
    if (func_ov007_0215ef8c() != 0) {
      *(s32 *)data_ov007_02160e70 = 1;
    }
    break;
  case 1:
    bVar2 = 0;
    uVar1 = *(u16 *)data_0214efdc;
    if ((u16)(uVar1 & 0x200) == 0) goto J1;
    uVar1 = *(u16 *)(data_0214efdc + 2);
    if ((u16)(uVar1 & 1) == 0) goto J1;
    if ((u16)(uVar1 & 2) == 0) goto J1;
    if ((u16)(uVar1 & 0x400) == 0) goto J1;
    if ((u16)(uVar1 & 0x800) != 0) {
      bVar2 = 1;
    }
J1:
    if (bVar2 != 0) {
      func_02093e00();
    }
    if (func_ov007_0215ed94() != 0) {
      r0p = func_020d6cb4();
      iVar4 = func_0205ef3c((u32 *)(*(u8 **)data_ov007_02160e68 + 0x74f2), (u32 *)(r0p + 4), 6);
      if (iVar4 == 0) {
        func_ov007_0215ef10();
        *(s32 *)data_ov007_02160e70 = 0;
      } else {
        if (func_ov007_0215ed18() != 0) {
          *(s32 *)data_ov007_02160e70 = 2;
        }
      }
    }
    break;
  case 2:
    if (iVar4 != 0) {
      *(s32 *)data_ov007_02160e70 = 3;
    }
    break;
  case 3:
    sw = 3;
    *(s32 *)data_ov007_02160e6c = sw;
    switch (sw) {
    case 0:
      func_ov007_0215dc90();
      break;
    case 1:
      func_ov007_0215dd0c();
      break;
    case 4:
      *(s32 *)data_ov007_02160e74 = 0;
      break;
    case 2:
      func_ov007_0215f050(0);
      func_ov007_0215f034(*(u32 *)data_ov007_02160e68, 0x74f8);
      *(s32 *)data_ov007_02160e70 = 0;
      break;
    case 3:
      func_ov007_0215ef10();
      break;
    }
    break;
  }
  if (*(s32 *)data_ov007_02160e70 == 3) {
    return;
  }
  if (bVar6 != 0) {
    func_ov007_0215ef10();
    *(s32 *)data_ov007_02160e70 = 0;
    return;
  }
  iVar4 = (s32)func_ov007_0215edb8();
  if (iVar4 != 5) {
    return;
  }
  sVar3 = (s32)func_ov007_0215da20();
  if (sVar3 != 1 && sVar3 != 11 && sVar3 != 12) {
    return;
  }
  func_ov007_0215ef10();
  *(s32 *)data_ov007_02160e70 = 0;
}
