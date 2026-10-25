#pragma avoid_byte strb
#include "ctx.h"

typedef struct { u32 w[3]; } T3;

extern u32 data_0214f464;
extern u8 data_0213b842[];
extern void func_02036138(int p, void *a, int b, int c);
extern void func_02035fbc(int p, void *a, int b, int c);
extern void func_02035e64(int p, void *a, int b, int c);
extern int func_0200c0fc(int a);
extern void func_0200c0e8(int a, void *b);
extern s32 func_02009bd0(void *a, void *b);

void func_02035aa0(int param_1)
{
  s32 aiStack[4];
  s16 r4;
  s32 uVar4;
  s32 iVar3;
  s32 iVar2;

  if ((s32)*(s8 *)(param_1 + 0x88) != *(u16 *)(*(u8 **)&data_0214f464 + 0x38)) {
    return;
  }
  aiStack[0] = 0;
  r4 = *(s16 *)(param_1 + 256 + 62);
  *(s16 *)(param_1 + 256 + 62) = -1;
  if (*(s8 *)(param_1 + 0x8b) != 5) {
    func_02036138(param_1, &aiStack[0], 0, 1);
    func_02035fbc(param_1, &aiStack[0], 0, 1);
    func_02035e64(param_1, &aiStack[0], 0, 1);
    iVar3 = *(s32 *)(*(u8 **)&data_0214f464 + 0x60);
    if (iVar3 != 0) {
      iVar2 = func_0200c0fc(iVar3);
      if (iVar2 == 1) {
        uVar4 = data_0213b842[*(s8 *)(param_1 + 0x8d)];
        func_0200c0e8(iVar3, &aiStack[1]);
        iVar2 = func_02009bd0(&aiStack[1], (void *)(param_1 + 672));
        if (iVar2 - uVar4 * (uVar4 << 14) < aiStack[0]) {
          aiStack[0] = iVar2 - uVar4 * (uVar4 << 14);
          *(s16 *)(param_1 + 256 + 62) = 11;
          *(T3 *)(param_1 + 948) = *(T3 *)&aiStack[1];
        }
      }
    }
  }
  if (*(s16 *)(param_1 + 256 + 62) != -1) {
    ((u8 *)param_1)[147] = *(s8 *)(param_1 + 148);
  } else {
    ((u8 *)param_1)[147] = 0;
  }
  *(s16 *)(param_1 + 256 + 62) = r4;
}
