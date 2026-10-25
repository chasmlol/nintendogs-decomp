#include "ctx.h"

extern u32 data_0215be48;
extern u32 data_02147a74;
extern u32 data_02147a40;
extern u32 data_02147a58;
extern u32 data_02147a70;
extern void func_020fc76c(int a, void *b, void *c, void *d, void *e);
extern void func_02117e4c(void *p);
extern void func_02117c54(void *p);
extern void func_02003d90(int a);
extern void func_02107e1c(void);

void func_020fed2c(u32 *param_1)
{
  *param_1 = 0;
  *(u32 *)((u8 *)(*(u32 **)&data_0215be48) + 0xc838) = 1;
  *(u32 *)((u8 *)(*(u32 **)&data_0215be48) + 0xc83c) = 1;
  func_020fc76c(13, &data_02147a40, &data_02147a58, &data_02147a70, &data_02147a74);
  if (*(u32 *)((u8 *)(*(u32 **)&data_0215be48) + 0xbc) == 3) {
    func_02117e4c(param_1 + 0x4c);
    func_02117e4c(param_1 + 0x54);
    func_02117e4c(param_1 + 0x5c);
    func_02117e4c(param_1 + 0x64);
    func_02117e4c(param_1 + 0x6c);
  } else {
    func_02117c54(param_1 + 0x4c);
    func_02117c54(param_1 + 0x54);
    func_02117c54(param_1 + 0x5c);
    func_02117c54(param_1 + 0x64);
    func_02117c54(param_1 + 0x6c);
  }
  func_02003d90(16);
  func_02107e1c();
}
