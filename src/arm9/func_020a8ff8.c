#include "ctx.h"

extern u8 data_02159434[];
extern void func_020a9710(u32 *p);
extern void func_02003df8(u32 a);
extern void func_0200413c(void);
extern void func_020a90b0(void);
extern void func_02003fb4(void);
extern void func_0207c990(void);
extern void func_02003efc(void);
extern void func_02003ca0(u32 a);
extern void func_02003ab0(u32 a, u32 b);
extern void func_020a90a4(void);
extern void func_02095dc8(void);
extern void func_02097b40(void);
extern void func_020075b4(void);
extern u64 func_02090e30(void);
extern void func_0208c564(u64 v);
extern void func_02004280(void);
extern void func_020068a4(void);

BOOL func_020a8ff8(u32 *param_1)
{
  u32 **pp;
  BOOL r4;
  u64 v;
  *param_1 = 0;
  func_020a9710(param_1);
  func_02003df8(30);
  pp = (u32 **)data_02159434;
  do {
    func_0200413c();
    func_020a90b0();
    func_02003fb4();
    func_0207c990();
    func_02003efc();
  } while ((*pp)[2] == 0);
  func_02003ca0(60);
  func_02003ab0((u32)func_020a90b0, (u32)func_020a90a4);
  r4 = 0;
  if ((*(u32 **)data_02159434)[10] == 0) {
    r4 = 1;
  }
  func_02095dc8();
  func_02097b40();
  func_020075b4();
  v = func_02090e30();
  func_0208c564(v);
  func_02004280();
  func_020068a4();
  *(u32 **)data_02159434 = 0;
  return r4;
}
