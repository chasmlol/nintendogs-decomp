#include "ctx.h"

extern u32 *func_0207ce9c(void *a, void *b);
extern void func_0207cec8(void *a, void *b);
extern void func_0207dcd4(u32 a, u32 b);
extern void func_02071d70(void);
extern void func_02071d94(u32 *p);

typedef void (*CB)(u32 a, u32 b, u32 c, u32 d);

void func_02071fe8(u32 *param_1)
{
  u32 *iVar2;
  u32 *iVar3;
  BOOL bVar1;
  bVar1 = FALSE;
  iVar2 = func_0207ce9c((u8 *)param_1 + 4, 0);
  if (iVar2 != 0) {
    do {
      for (iVar3 = func_0207ce9c(iVar2, 0); iVar3 != 0; iVar3 = func_0207ce9c(iVar2, iVar3)) {
        if (iVar3[3] != 0) {
          ((CB)iVar3[3])((u32)((u8 *)iVar3 + 32), iVar3[2], iVar3[4], iVar3[5]);
          bVar1 = TRUE;
        }
      }
      func_0207cec8((u8 *)param_1 + 4, iVar2);
      iVar2 = func_0207ce9c((u8 *)param_1 + 4, 0);
    } while (iVar2 != 0);
  }
  func_0207dcd4(param_1[0], 3);
  if (bVar1) {
    func_02071d70();
  }
  func_02071d94(param_1);
}
