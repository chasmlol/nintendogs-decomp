#include "ctx.h"

extern u32 data_02142eac;
extern u32 data_02142ec4;
extern u32 data_02142edc;
extern u32 data_02142ef4;

extern void func_020d122c(u32 *p);
extern s32 func_020bc1c4(void);
extern u32 func_0208c5b4(void *a);
extern void func_020d1224(u32 *p, u32 v);
extern void func_020d1214(u32 *p);

void func_020d279c(u32 *param_1)
{
  s32 iVar1;
  func_020d122c(param_1);
  iVar1 = func_020bc1c4();
  if (iVar1 == 6) {
    param_1[0xe] = func_0208c5b4(&data_02142eac);
  } else {
    iVar1 = func_020bc1c4();
    if (iVar1 == 9) {
      param_1[0xe] = func_0208c5b4(&data_02142ec4);
    } else {
      iVar1 = func_020bc1c4();
      if (iVar1 == 12) {
        param_1[0xe] = func_0208c5b4(&data_02142edc);
      } else {
        iVar1 = func_020bc1c4();
        if (iVar1 == 13) {
          param_1[0xe] = func_0208c5b4(&data_02142ef4);
        }
      }
    }
  }
  func_020d1224(param_1, param_1[0xe]);
  func_020d1214(param_1);
}
