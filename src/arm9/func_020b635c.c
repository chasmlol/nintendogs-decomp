#include "ctx.h"

extern u32 data_0213272c[];
extern u32 data_02159424;
extern void func_020b6638(int p, int a, int b);
extern void func_02108714(void *a, int b);
extern void func_020b6508(int p, int a, int b);
extern void func_02108638(int a, int b);
extern void func_0210856c(void);
extern void func_02107f8c(int a);

void func_020b635c(int param_1)
{
  s32 iVar1;
  s16 *tab;

  tab = (s16 *)data_0213272c;
  *(s16 *)(param_1 + 2) = *(s16 *)((u8 *)tab + *(s16 *)(param_1 + 0x20) * 6 + 4);
  *(s16 *)(param_1 + 0x22) = 0;
  *(s16 *)(param_1 + 0x24) = 0;
  *(s16 *)(param_1 + 0x26) = 0;
  *(s16 *)(param_1 + 0x28) = 0;
  *(s16 *)(param_1 + 0x2a) = 0;
  switch (*(s16 *)(param_1 + 0x20)) {
  case 0:
    func_020b6638(param_1, 2, *(s16 *)data_02159424);
    func_02108714((void *)(param_1 + 0x30), *(s16 *)(param_1 + 0x2c));
    break;
  case 1:
    func_020b6508(param_1, 0, *(s16 *)data_02159424);
    iVar1 = *(s16 *)(param_1 + 0x3c);
    func_02108638(*(s16 *)(param_1 + 0x3e), (s16)(iVar1 / 60));
    break;
  case 2:
    func_020b6638(param_1, 3, *(s16 *)data_02159424);
    func_02108714((void *)(param_1 + 0x30), *(s16 *)(param_1 + 0x2c));
    break;
  case 3:
    func_020b6508(param_1, 1, *(s16 *)data_02159424);
    iVar1 = *(s16 *)(param_1 + 0x3c);
    func_02108638(*(s16 *)(param_1 + 0x3e), (s16)(iVar1 / 60));
    break;
  case 4:
    switch (*(s16 *)data_02159424) {
    case 0:
      break;
    case 1:
      *(s16 *)(param_1 + 0x40) = 3;
      break;
    case 2:
      *(s16 *)(param_1 + 0x40) = 6;
      break;
    case 3:
      *(s16 *)(param_1 + 0x40) = 9;
      break;
    case 4:
      *(s16 *)(param_1 + 0x40) = 11;
      break;
    case 5:
      *(s16 *)(param_1 + 0x40) = 13;
      break;
    }
    func_0210856c();
    break;
  }
  func_02107f8c(20);
}
