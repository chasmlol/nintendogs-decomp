#include "ctx.h"

extern u32 data_02141f60;
extern u32 data_02159064;

extern void func_020026d4(u32 *a, u32 b);
extern s32 func_020027d0(u32 a, u32 b);
extern u32 func_020038b8(void *p, u32 n);
extern void func_0206c7bc(u32 a, void *b, u32 c);

void func_0209a4f0(u8 *param_1)
{
  BOOL bVar1;
  s32 iVar2;
  u8 *puVar3;
  u32 uStack_1c;
  vu16 zero;
  func_020026d4(&uStack_1c, 0);
  bVar1 = TRUE;
  data_02141f60 = 1;
  do {
    iVar2 = func_020027d0(2, 1);
    if (iVar2 == 0) {
      bVar1 = FALSE;
    }
  } while (bVar1);
  puVar3 = (u8 *)func_020038b8(param_1, 0x24);
  *(u16 *)puVar3 = 0;
  *(u16 *)(puVar3 + 2) = 1;
  *(u16 *)(puVar3 + 4) = 0;
  *(u16 *)(puVar3 + 6) = 0;
  *(u32 *)(puVar3 + 8) = 0;
  *(u32 *)(puVar3 + 12) = 0;
  zero = 0;
  func_0206c7bc(zero, puVar3 + 16, 20);
  data_02159064 = (u32)puVar3;
}
