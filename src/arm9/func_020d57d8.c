#include "ctx.h"

extern u8 *data_021594d0;

extern void func_020d5cc8(void);
extern u32 func_020d6ca4(void);
extern s32 func_020d6978(u32 a, u32 *b);
extern void func_020d508c(void);

void func_020d57d8(void)
{
  u32 uVar2;
  u8 *iVar3;
  u32 auStack_8[1];
  if (*(u32 *)(data_021594d0 + 0x2c) != 0) {
    *(u32 *)(data_021594d0 + 0x2c) = 0;
    *(u16 *)(data_021594d0 + 0x28) = 0;
    *(u16 *)(data_021594d0 + 0x2a) = 0;
  }
  switch (*(u32 *)(data_021594d0 + 0x20)) {
  case 0:
  case 1:
    goto deflt;
  case 2:
  case 3:
    break;
  case 4:
    func_020d5cc8();
    uVar2 = func_020d6ca4();
    switch (uVar2) {
    case 0:
    case 1:
    case 2:
      goto deflt;
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
      break;
    default:
      goto deflt;
    }
    *(u32 *)(data_021594d0 + 0x20) = 4;
    *(u32 *)(data_021594d0 + 0x24) = 1;
    iVar3 = data_021594d0;
    if (*(s16 *)(iVar3 + 0x30) == 0) {
      *(s16 *)(iVar3 + 0x30) = 1;
    }
    goto deflt;
  default:
    goto deflt;
  }
  func_020d5cc8();
  uVar2 = func_020d6ca4();
  switch (uVar2) {
  case 0:
  case 1:
  case 2:
    goto deflt;
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 11:
    break;
  default:
    goto deflt;
  }
  *(u32 *)(data_021594d0 + 0x20) = 4;
  *(u32 *)(data_021594d0 + 0x24) = 1;
  iVar3 = data_021594d0;
  if (*(s16 *)(iVar3 + 0x30) == 0) {
    *(s16 *)(iVar3 + 0x30) = 1;
  }
deflt:
  if (*(u32 *)(data_021594d0 + 0x20) != 1) {
    return;
  }
  *(u32 *)(data_021594d0 + 0x20) = 4;
  if (func_020d6978((u32)func_020d508c, auStack_8) != 0) {
    *(u32 *)(data_021594d0 + 0x24) = 0;
  }
}
