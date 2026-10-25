#include "ctx.h"

extern void func_0208e398(u32 *p);
extern u32 func_0208c230(u32 *p, u32 a);
extern u32 *func_0208f43c(u32 *p, u32 a);
extern void func_0208f380(void);
extern void func_0208e1e8(u16 *a);
extern u8 *func_0208e150(u32 *p, u16 *a);
extern u32 *func_0208f698(u8 *p);
extern void func_02067e34(s32 *a, s32 *b, s32 *c);
extern void func_02006a30(s32 *a, s32 *b);
extern u32 *func_0208f668(u8 *p, u32 n);
extern u32 *func_0208fb00(u32 *p, u32 a, u32 b);
extern void func_0208f588(u32 a, u32 b);

u8 *func_ov027_0215c4a4(u32 *param_1, u32 param_2, u32 param_3, u32 param_4)
{
  u32 iVar1;
  u32 *puVar2;
  u8 *puVar3;
  u8 *puVar4;
  u16 auStack_20[6];
  u32 *p;
  func_0208e398(param_1);
  iVar1 = func_0208c230(param_1, 0);
  puVar2 = func_0208f43c(param_1, iVar1);
  func_0208f380();
  func_0208e1e8(auStack_20);
  puVar3 = func_0208e150(param_1, auStack_20);
  p = func_0208f698(puVar3);
  p[0x3c / 4] = 0;
  p[0x40 / 4] = 0x400;
  p[0x44 / 4] = 0;
  p[0x30 / 4] = 0;
  p[0x34 / 4] = 0x3000;
  p[0x38 / 4] = 0x7000;
  func_02067e34((s32 *)((u8 *)p + 0x3c), (s32 *)((u8 *)p + 0x30), (s32 *)((u8 *)p + 0x48));
  func_02006a30((s32 *)((u8 *)p + 0x48), (s32 *)((u8 *)p + 0x48));
  iVar1 = (u32)func_0208f668(puVar3, 0);
  puVar4 = (u8 *)func_0208fb00(param_1, 0x88, (u32)puVar2);
  func_0208f588(iVar1, (u32)puVar4);
  (void)iVar1;
  return puVar3;
}
