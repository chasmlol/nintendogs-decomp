#include "ctx.h"

extern u8 *data_0215be48;
extern u8 data_02142480[];
extern u8 *data_02159424;
extern u8 *data_02159060;
extern void func_020b1374(void);
extern s32 func_02107fd0(void);
extern s32 func_020b10f4(s32 a);
extern u32 func_020b0c58(u32 a);
extern void func_02097b94(s32 a, u32 b, u32 c, void *d, s32 e);
extern void func_020bc004(s32 a);
extern s32 func_01ffdb08(s32 a);
extern void func_02108004(void);
extern void func_020bbfe8(void);

void func_020b0e5c(u8 *param_1)
{
  s16 sVar1;
  u32 uVar3;
  s32 iVar4;
  s32 iVar5;
  s32 iVar6;
  s16 cnt;
  s16 idx;

  sVar1 = *(s16 *)(param_1 + 0x2a);
  switch (sVar1) {
  case 0:
    if (*(s32 *)(data_0215be48 + 0x48bc) == 1) {
      *(s16 *)(param_1 + 0x6c) = -2;
      *(s16 *)(param_1 + 0x2e) = 2;
      *(s16 *)(param_1 + 0x30) = 0;
      return;
    }
    iVar6 = func_02107fd0();
    if (iVar6 >= 0) {
      iVar6 = func_02107fd0();
      iVar5 = func_020b10f4(iVar6);
      if (iVar5 != -1) {
        *(s16 *)(param_1 + 0x2a) = 1;
        func_02097b94(0, *(u16 *)(data_02142480 + iVar5 * 4), *(u16 *)(data_02142480 + iVar5 * 4 + 2), func_020b1374, 0);
      } else {
        *(s16 *)(param_1 + 0x2a) = 2;
        uVar3 = func_020b0c58(*(u32 *)(data_02159424 + 4));
        func_02097b94(0, 0x44d, uVar3, func_020b1374, 0);
      }
      iVar6 = func_02107fd0();
      func_020bc004(iVar6);
      return;
    }
    return;
  case 1:
    if (*(s32 *)(data_02159060 + 0xa4) == 0) {
      return;
    }
    cnt = 0;
    idx = 0;
    do {
      iVar4 = func_01ffdb08(idx);
      if (iVar4 != 0) {
        cnt = cnt + 1;
      }
      idx = idx + 1;
    } while (idx < 3);
    if (cnt <= 1) goto low1;
    func_02108004();
    *(s16 *)(param_1 + 0x2a) = 0;
    func_020bbfe8();
    return;
low1:
    *(s16 *)(param_1 + 0x6c) = -2;
    *(s16 *)(param_1 + 0x2e) = 2;
    *(s16 *)(param_1 + 0x30) = 0;
    return;
  case 2:
    if (*(s32 *)(data_02159060 + 0xa4) == 0) {
      return;
    }
    sVar1 = *(s16 *)(data_02159060 + 0x9a);
    switch (sVar1) {
    case 0:
      iVar6 = func_02107fd0();
      *(s16 *)(param_1 + 0x6c) = iVar6;
      *(s16 *)(param_1 + 0x2e) = 2;
      *(s16 *)(param_1 + 0x30) = 0;
      return;
    case 1:
      cnt = 0;
      idx = 0;
      do {
        iVar4 = func_01ffdb08(idx);
        if (iVar4 != 0) {
          cnt = cnt + 1;
        }
        idx = idx + 1;
      } while (idx < 3);
      if (cnt <= 1) goto low2;
      func_02108004();
      *(s16 *)(param_1 + 0x2a) = 0;
      func_020bbfe8();
      return;
    low2:
      *(s16 *)(param_1 + 0x6c) = -2;
      *(s16 *)(param_1 + 0x2e) = 2;
      *(s16 *)(param_1 + 0x30) = 0;
      return;
    }
    return;
  }
}
