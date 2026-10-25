#include "ctx.h"

extern u32 data_ov001_0215e1d0;
extern u32 data_ov001_0215e1d8;
extern u32 data_02159010;
extern u32 data_ov001_0215e1e0;
extern u32 data_ov001_0215e1f8;
extern u32 data_ov001_0215e210;
extern u32 data_ov001_0215e228;
extern u32 data_ov001_0215e240;
extern void func_0205f050();
extern void func_0208c87c(int *p, void *buf);

void func_ov001_0215de94(int *param_1, int param_2, int param_3, u32 param_4)
{
  char buf[76];

  if (param_3 != 0) {
    func_0205f050(buf, 64, &data_ov001_0215e1d0, param_4);
  } else {
    func_0205f050(buf, 64, &data_ov001_0215e1d8, param_4);
  }
  switch (*(u16 *)((u8 *)&data_02159010 + 4)) {
  case 2:
    func_0205f050(buf + 10, 64, &data_ov001_0215e1e0, buf, param_2);
    break;
  case 3:
    func_0205f050(buf + 10, 64, &data_ov001_0215e1f8, buf, param_2);
    break;
  case 4:
    func_0205f050(buf + 10, 64, &data_ov001_0215e210, buf, param_2);
    break;
  case 5:
    func_0205f050(buf + 10, 64, &data_ov001_0215e228, buf, param_2);
    break;
  default:
    func_0205f050(buf + 10, 64, &data_ov001_0215e240, buf, param_2);
    break;
  }
  func_0208c87c(param_1, buf + 10);
}
