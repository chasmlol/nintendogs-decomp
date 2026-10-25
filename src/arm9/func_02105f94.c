#include "ctx.h"

extern s32 func_020bc1c4(void);
extern void func_020bbd58(u32 a);
extern void func_020bbd38(void);
extern void func_020bbd18(void);
extern void func_020bbc74(u32 a);

void func_02105f94(u8 *param_1)
{
  s32 iVar1;
  iVar1 = func_020bc1c4();
  switch (iVar1) {
  case 7:
    switch (*(u16 *)(param_1 + 0x16)) {
    case 0:
      func_020bbd58(0);
      return;
    case 1:
      func_020bbd58(1);
      return;
    }
    return;
  case 10:
    switch (*(u16 *)(param_1 + 0x16)) {
    case 0:
      func_020bbd38();
      return;
    case 1:
      func_020bbd18();
      return;
    }
    return;
  case 14:
    switch (*(u16 *)(param_1 + 0x16)) {
    case 0:
      func_020bbc74(1);
      return;
    case 2:
      func_020bbc74(0);
      return;
    }
    return;
  }
}
