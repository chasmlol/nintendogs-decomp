#include "ctx.h"

extern u8 data_0214efdc[];
extern u32 data_ov020_0215c560;
extern void func_ov020_0215c0b4(void);
extern void func_ov020_0215c0b0(void);
extern void func_ov020_0215c0d0(void);
extern void func_02003df8(s32 a);
extern void func_0200413c(void);
extern void func_0208f6ac(s32 a);
extern s32 func_02003a10(void);
extern void func_02003fb4(void);
extern void func_02003efc(void);
extern void func_02003d00(s32 a);
extern u64 func_02003ab0(void *a, void *b);
extern void func_0208b9b0(u64 v);
extern void func_0208e36c(void);
extern void func_02004280(void);
extern void func_020068a4(void);

u32 func_ov020_0215c000(void)
{
  u32 *puVar3;
  u16 *puVar2;
  s32 bVar1;
  s32 iVar4;

  bVar1 = 1;
  func_ov020_0215c0d0();
  func_02003df8(30);
  puVar2 = (u16 *)data_0214efdc;
  puVar3 = &data_ov020_0215c560;
  do {
    func_0200413c();
    func_0208f6ac(*(s32 *)*puVar3);
    iVar4 = func_02003a10();
    if (iVar4 != 0 && (u16)(*puVar2 & 8) != 0) {
      bVar1 = 0;
    }
    func_02003fb4();
    func_02003efc();
  } while (bVar1);
  func_02003d00(60);
  func_0208b9b0(func_02003ab0((void *)func_ov020_0215c0b4, (void *)func_ov020_0215c0b0));
  func_0208e36c();
  func_02004280();
  func_020068a4();
  {
    u32 zz = 0;
    data_ov020_0215c560 = zz;
  }
    return 0;
}
