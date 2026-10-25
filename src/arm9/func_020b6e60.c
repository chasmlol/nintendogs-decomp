#include "ctx.h"

extern s32 func_020ad77c(u8 *p);
extern u32 func_0210e260(void);
extern u8 *func_0210befc(void);
extern s32 func_0208fc14(u8 *p);
extern void func_02097b94(s32 a, s32 b, s32 c, void *d, s32 e);
extern u32 func_0210e280(void);
extern u32 func_0209390c(u8 *p);
extern void func_020ad7c8(u8 *p, s32 a);
extern s32 func_020ad6fc(u8 *p, s32 a);
extern s32 func_020ad690(u8 *p);
extern u32 func_020ad8f0(u8 *p);
extern void func_020b6f7c(void);

u32 func_020b6e60(u8 *param_1)
{
  s32 bVar1;
  s32 bVar5;
  u32 uVar2;
  u16 *psVar3;
  s32 iVar4;
  u32 ret;

  switch (*(s16 *)(param_1 + 0x2e)) {
  case 2:
  case 3:
    goto fin;
  case 0:
    return (u32)func_020ad77c(param_1);
  case 1:
    uVar2 = func_0210e260();
    bVar1 = 0;
    if (uVar2 == 2) goto eq2;
    if (uVar2 != 3) goto chk;
    psVar3 = (u16 *)func_0210befc();
    bVar5 = bVar1;
    if (*psVar3 == 0) {
      bVar5 = 1;
    } else {
      iVar4 = func_0208fc14((u8 *)psVar3);
      if (iVar4 != 0) bVar5 = 1;
    }
    if (bVar5) {
      func_02097b94(2, 0xc3a, 0, (void *)func_020b6f7c, 0);
      uVar2 = func_0210e280();
      goto chk;
    }
    psVar3 = (u16 *)func_0210befc();
    uVar2 = func_0209390c((u8 *)psVar3);
    bVar1 = 1;
    goto chk;
eq2:
    bVar1 = 1;
chk:
    if (bVar1) {
      func_020ad7c8(param_1, 13);
      return (u32)func_020ad6fc(param_1, 2);
    }
    return uVar2;
  case 4:
    ret = func_020ad690(param_1);
    if (ret == 0) {
      return ret;
    }
    ret = func_020ad8f0(param_1);
    break;
  default:
    goto fin;
  }
fin:
  return ret;
}
