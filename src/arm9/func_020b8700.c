#include "ctx.h"

extern u32 data_02159060;
extern u32 func_020ad77c(int p);
extern void func_020ad7c8(int p, int a);
extern void func_020ad6fc(int p, int a);
extern u32 func_02115080(void);
extern u32 func_020ad690(int p);
extern u32 func_020ad8f0(int p);

u16 *func_020b8700(u16 *param_1)
{
  u8 *d;
  u32 r;

  switch (*(s16 *)((u8 *)param_1 + 46)) {
  case 0:
    return (u16 *)func_020ad77c((int)param_1);
  case 1:
    d = *(u8 **)&data_02159060;
    if (*(u32 *)(d + 0xa4) == 0) {
      return param_1;
    }
    switch (*(s16 *)(d + 154)) {
    case 0:
      *(s16 *)((u8 *)param_1 + 46) = 2;
      *(s16 *)((u8 *)param_1 + 48) = 0;
      *(u16 *)((u8 *)param_1 + 256) = 1;
      return (u16 *)((u8 *)param_1 + 256);
    case 1:
      func_020ad7c8((int)param_1, 2);
      func_020ad6fc((int)param_1, 0);
      return (u16 *)func_02115080();
    }
    break;
  case 2:
    break;
  case 3:
    break;
  case 4:
    r = func_020ad690((int)param_1);
    if (r == 0) {
      return (u16 *)r;
    }
    return (u16 *)func_020ad8f0((int)param_1);
  }
}
