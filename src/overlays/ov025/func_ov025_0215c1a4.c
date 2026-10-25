#include "ctx.h"

extern u8 data_ov025_0215c748[];
extern u8 data_0214efdc[];
extern u32 func_02080b08(void);
extern void func_02080b1c(u32 a);
extern u32 func_020d7be8(void);
extern u32 func_020d7c2c(void);
extern u32 func_020d7d34(void);
extern u32 func_020d5284(void);
extern u32 func_020d7f08(void);
extern u32 func_020d7ce0(void);
extern u32 func_020d7c18(void);
extern u32 func_020d7cbc(void);
extern u32 func_020d7c40(void);
extern u32 func_020d5270(void);
extern void func_ov025_0215c32c(u32 a);
extern void func_020d7e8c(void);

void func_ov025_0215c1a4(void)
{
  u32 r7;
  u32 r6;
  u32 r5;
  u32 r4;
  r7 = func_02080b08();
  r6 = func_020d7be8();
  r5 = func_020d7c2c();
  if (func_020d7d34() == 5) {
    switch (func_020d5284()) {
    case 20:
      r4 = 1;
      goto flagdone;
    }
  }
  r4 = 0;
flagdone:
  func_02080b1c(r7);
  switch (*(s32 *)data_ov025_0215c748) {
  case 0:
    if (func_020d7f08() != 0) {
      *(s32 *)data_ov025_0215c748 = 1;
    }
    break;
  case 1:
    r5 = 0;
    if (func_020d7ce0() != 0) {
      if (func_020d7c18() != 0) {
        r5 = 1;
      }
    } else {
      if (func_020d7cbc() != 0) {
        r5 = 1;
      }
    }
    if (r5 != 0) {
      if (func_020d7c40() != 0) {
        *(s32 *)data_ov025_0215c748 = 2;
      }
    }
    break;
  case 2:
    if (func_020d5270() != 0) {
      if (r5 != 0) {
        *(s32 *)data_ov025_0215c748 = 3;
      }
    } else {
      if (r6 != 0) {
        *(s32 *)data_ov025_0215c748 = 3;
      }
    }
    break;
  case 3:
    func_ov025_0215c32c(4);
    break;
  }
  if (*(s32 *)data_ov025_0215c748 == 3) {
    return;
  }
  if ((u16)(*(u16 *)data_0214efdc & 2) != 0) {
    func_ov025_0215c32c(2);
    return;
  }
  if (r4 == 0) {
    return;
  }
  func_020d7e8c();
  *(s32 *)data_ov025_0215c748 = 0;
}
