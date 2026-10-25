#include "ctx.h"

extern u8 *func_020641b8(void);
extern BOOL func_0206419c(void);
extern void func_020800d4(void *p, u32 n);

u32 func_0206470c(void)
{
  u8 *obj;
  u8 *ps;
  u16 kind;
  obj = func_020641b8();
  if (func_0206419c() != 0) {
    return 0;
  }
  func_020800d4(*(void **)(obj + 4), 2);
  ps = *(u8 **)(obj + 4);
  kind = *(u16 *)ps;
  switch (kind) {
  case 9:
    func_020800d4(ps + 0x17e, 2);
    ps = *(u8 **)(obj + 4);
    if (*(u16 *)(ps + 0x17e) == 0) {
      return 0;

    }
    break;
  case 10:
  case 11:
    break;
  default:
    goto ret0;
  }
  func_020800d4(ps + 0xb8, 2);
  ps = *(u8 **)(obj + 4);
  return *(u16 *)(ps + 0xb8);
ret0:
  return 0;
}
