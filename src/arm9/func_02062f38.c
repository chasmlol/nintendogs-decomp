#include "ctx.h"

extern u8 data_0213e404[];
extern u8 data_0213e434[];
extern u8 data_0213e45c[];
extern u8 data_0213e474[];
extern u8 data_0213e484[];
extern u8 data_0213e48c[];
extern u8 data_0213e494[];
extern u8 data_0213e49c[];
extern u8 data_0213e4a4[];
extern u8 data_0213e4a8[];
extern u8 data_0213e4ac[];
extern u8 data_0213e4b0[];
extern u8 data_0213e4b4[];
extern u8 data_0213e4b8[];
extern u8 data_0213e4bc[];
extern u8 data_0213e4c0[];
extern u8 data_0213e4c4[];
extern u8 data_0213e4c8[];
extern u8 data_0213e4cc[];
extern u8 data_0213e4d0[];
extern u8 data_0213e4d4[];
extern void func_02063318(u32 *a, void *b, s32 c);
extern void func_02063454(u32 *a, void *b, void *c);

typedef struct { u32 a[9]; u16 pad; u16 b[19]; } Frame58;
typedef struct { u16 a[19]; } T19;
#define auStack_58 F.a
#define auStack_32 F.b

void func_02062f38(u32 *param_1, s32 param_2)
{
  Frame58 F;

  switch (param_2) {
  case -64:
    func_02063318(param_1, data_0213e404, -20);
    return;
  case -53:
    func_02063318(param_1, data_0213e434, -16);
    return;
  case -32:
    func_02063318(param_1, data_0213e45c, -10);
    return;
  case -16:
    func_02063318(param_1, data_0213e474, -5);
    return;
  case -8:
    func_02063318(param_1, data_0213e484, -3);
    return;
  case -7:
    func_02063318(param_1, data_0213e48c, -3);
    return;
  case -6:
    func_02063318(param_1, data_0213e494, -2);
    return;
  case -5:
    func_02063318(param_1, data_0213e49c, -2);
    return;
  case -4:
    func_02063318(param_1, data_0213e4a4, -2);
    return;
  case -3:
    func_02063318(param_1, data_0213e4a8, -1);
    return;
  case -2:
    func_02063318(param_1, data_0213e4ac, -1);
    return;
  case -1:
    func_02063318(param_1, data_0213e4b0, -1);
    return;
  case 0:
    func_02063318(param_1, data_0213e4b4, 0);
    return;
  case 1:
    func_02063318(param_1, data_0213e4b8, 0);
    return;
  case 2:
    func_02063318(param_1, data_0213e4bc, 0);
    return;
  case 3:
    func_02063318(param_1, data_0213e4c0, 0);
    return;
  case 4:
    func_02063318(param_1, data_0213e4c4, 1);
    return;
  case 5:
    func_02063318(param_1, data_0213e4c8, 1);
    return;
  case 6:
    func_02063318(param_1, data_0213e4cc, 1);
    return;
  case 7:
    func_02063318(param_1, data_0213e4d0, 2);
    return;
  case 8:
    func_02063318(param_1, data_0213e4d4, 2);
    return;
  }
  func_02062f38(auStack_58, (param_2 + (s32)(((u32)param_2 & 0x80000000u) >> 31)) >> 1);
  func_02063454(param_1, auStack_58, auStack_58);
  if ((param_2 & 1) == 0) {
    return;
  }
  *(T19 *)auStack_32 = *(T19 *)param_1;
  if (param_2 > 0) {
    func_02063318(auStack_58, data_0213e4b8, 0);
  } else {
    func_02063318(auStack_58, data_0213e4b0, -1);
  }
  func_02063454(param_1, auStack_32, auStack_58);
}
