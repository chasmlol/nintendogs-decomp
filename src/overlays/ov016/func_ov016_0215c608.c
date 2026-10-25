#include "ctx.h"

extern u8 data_0214efdc[];
extern u32 data_ov016_0215d1c0;
extern void func_ov016_0215cb64(void);
extern void func_ov016_0215c704(void);
extern void func_ov016_0215c6c0(void);
extern void func_02003df8(s32 a);
extern void func_0200413c(void);
extern s32 func_02003a10(void);
extern void func_02003fb4(void);
extern void func_02003efc(void);
extern void func_02003d00(s32 a);
extern void func_02003ab0(void *a, void *b);
extern void func_02004280(void);
extern void func_020068a4(void);
extern void func_0208010c(void *a, s32 b);
extern void func_0206b3e4(void *a, s32 b, s32 c);

u32 func_ov016_0215c608(void)
{
  u16 *puVar2;
  u32 *piVar3;
  s32 bVar1;
  s32 iVar4;

  bVar1 = 1;
  func_ov016_0215cb64();
  func_02003df8(30);
  puVar2 = (u16 *)data_0214efdc;
  piVar3 = &data_ov016_0215d1c0;
  do {
    func_0200413c();
    func_ov016_0215c704();
    iVar4 = func_02003a10();
    if (iVar4 != 0 && (u16)(*puVar2 & 8) != 0) {
      bVar1 = 0;
    }
    func_02003fb4();
    func_0208010c((u8 *)*piVar3 + 4, 0x600);
    func_0206b3e4((u8 *)*piVar3 + 4, 0, 0x600);
    func_02003efc();
  } while (bVar1);
  func_02003d00(60);
  func_02003ab0((void *)func_ov016_0215c704, (void *)func_ov016_0215c6c0);
  func_02004280();
  func_020068a4();
  return 0;
}
