#include "ctx.h"

typedef struct { u32 w[3]; } T3;

extern u32 data_0215be14;
extern u32 data_0215be18;
extern void func_020e4bc8(void);
extern u32 func_020bc3c4(void);
extern void func_0208ec84(u32 a, void *b, void *c);
extern void func_0209d394(void *a, int b, u32 c, void *d);
extern void func_02081198(u32 a, int b, void *c);
extern void func_020bd7f8(int p);
extern void func_020aace4(int a);

void func_020e4ad0(int param_1)
{
  u32 *piVar5;
  u32 aux[3];
  u32 r;

  piVar5 = *(u32 **)(param_1 + 0x214);
  r = func_020bc3c4();
  func_0208ec84(r, (void *)(param_1 + 0xbc), aux);
  func_0209d394((void *)(param_1 + 400), 6, *(u32 *)(param_1 + 0x24), aux);
  piVar5[5] = 1;
  *(u16 *)&data_0215be14 = (u16)*(u32 *)(param_1 + 0x24);
  *(T3 *)&data_0215be18 = *(T3 *)(param_1 + 0xbc);
  switch (piVar5[0]) {
  case 0:
    func_02081198(piVar5[6], 1, (void *)func_020e4bc8);
    break;
  case 1:
    func_02081198(piVar5[6], 2, (void *)func_020e4bc8);
    break;
  case 2:
    func_02081198(piVar5[6], 0, (void *)func_020e4bc8);
    break;
  }
  func_02081198(piVar5[6], 3, (void *)func_020e4bc8);
  func_02081198(piVar5[6], 4, (void *)func_020e4bc8);
  func_020bd7f8(param_1);
  func_020aace4(*(s16 *)(param_1 + 0x94));
}
