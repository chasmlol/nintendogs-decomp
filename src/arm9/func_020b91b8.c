#include "ctx.h"

extern u32 data_02159060;
extern u32 data_0215942c;

extern u32 func_020ad77c(u8 *p);
extern void func_020ad7c8(u8 *p, u32 n);
extern void func_020ad6fc(u8 *p, u32 n);
extern void func_02021fc4(void);
extern s32 func_01ffdb08(s32 a);
extern void func_020293d8(s32 a, u32 b, u32 c);
extern u32 func_020ad690(u8 *p);
extern u32 func_020ad8f0(u8 *p);

u32 func_020b91b8(u8 *param_1)
{
  s32 iVar2;
  u32 bVar1;
  switch (*(s16 *)(param_1 + 0x2e)) {
  case 0:
    bVar1 = func_020ad77c(param_1);
    return bVar1;
  case 1:
    if (*(u32 *)(*(u8 **)&data_02159060 + 0xa4) == 0) {
      return (u32)param_1;
    }
    if (*(u16 *)(*(u8 **)&data_0215942c) == 0x11) {
      goto eq17;
    }
    func_020ad7c8(param_1, 2);
    func_020ad6fc(param_1, 0);
    goto done;
  eq17:
    func_020ad7c8(param_1, 0x12);
    func_020ad6fc(param_1, 2);
    func_02021fc4();
  done:
    iVar2 = func_01ffdb08(*(s16 *)(param_1 + 0x112));
    if (iVar2 != 0) {
      func_020293d8(iVar2, 0x58, 1);
    }
    *(s16 *)(param_1 + 0x112) = -1;
    *(s16 *)(param_1 + 0x114) = -1;
    return (u32)(param_1 + 0x100);
  case 2:
    break;
  case 3:
    break;
  case 4:
    bVar1 = func_020ad690(param_1);
    if (bVar1 == 0) {
      return bVar1;
    }
    return func_020ad8f0(param_1);
  }
}
