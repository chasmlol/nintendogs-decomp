#include "ctx.h"

typedef struct {
    u16 cnt;
    u16 flags;
    void *ptr;
} Obj;

extern u32 data_ov001_0215e260;
extern u8 *data_0215be48;
extern void func_ov001_0215c8fc(void);
extern void func_ov001_0215c6a0(void);
extern void func_0206c7f0(u32 a, void *b, u32 c);
extern void func_0210b780(u32 a, u32 b, void *c, u32 d, u32 e);

void func_ov001_0215c5c0(void)
{
    u32 iVar2;
    Obj *puVar1;
    vu32 t1;
    vu32 t2;

    if (data_ov001_0215e260 != 0) {
        func_ov001_0215c8fc();
        func_ov001_0215c6a0();
        puVar1 = *(Obj **)(data_0215be48 + 0x1de4);
        puVar1->flags = 0;
        t1 = 192;
        func_0206c7f0(t1, puVar1->ptr, puVar1->cnt << 3);
        puVar1 = *(Obj **)(data_0215be48 + 0x1de8);
        puVar1->flags = 0;
        t2 = 192;
        func_0206c7f0(t2, puVar1->ptr, puVar1->cnt << 3);
        iVar2 = data_ov001_0215e260;
        func_0210b780(*(u32 *)(iVar2 + 0xc164), *(u32 *)(iVar2 + 0xc160),
                      *(void **)(data_0215be48 + 0x1de8), iVar2 + 0xc034, 0);
    }
}
