#include "ctx.h"

extern u32 data_ov002_0215c800;

extern void func_ov002_0215c2b4(void);
extern void func_02003df8(u32 a);
extern void func_0200413c(void);
extern s32 func_ov002_0215c054(void);
extern void func_02003fb4(void);
extern void func_0207c990(void);
extern void func_02003efc(void);
extern u64 func_020075b4(void);
extern void func_0208c564(u32 a, u32 b);
extern void func_02004280(void);

s32 func_ov002_0215c000(void)
{
  s32 iVar1;
  u64 uVar2;
  func_ov002_0215c2b4();
  func_02003df8(0x1e);
  do {
    func_0200413c();
    iVar1 = func_ov002_0215c054();
    func_02003fb4();
    func_0207c990();
    func_02003efc();
  } while (iVar1 != 0);
  uVar2 = func_020075b4();
  func_0208c564((u32)uVar2, (u32)(uVar2 >> 32));
  func_02004280();
  data_ov002_0215c800 = 0;
  return 0;
}
