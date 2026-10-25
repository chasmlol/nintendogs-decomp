#include "ctx.h"

typedef struct Four {
    u32 w[4];
} Four;

typedef struct Three {
    u32 w[3];
} Three;

extern u32 *data_0214f130;
extern u32 *func_020038b8(int *p, int n);
extern void func_020018ec(void);
extern int func_02001840(s16 *p);
extern void func_020016f8(s16 *p);
extern void func_0200151c(int a, int b);
extern void func_02001164(int a);
extern void func_02001150(int a);
extern int func_0206d648(u32 *a, u32 *b);

u32 *func_020070c0(int *param_1)
{
    u32 *puVar2;
    int iVar3;
    s16 asStack_18[6];

    puVar2 = func_020038b8(param_1, 0x44);
    func_020018ec();
    iVar3 = func_02001840(asStack_18);
    if (iVar3 != 0) {
        func_020016f8(asStack_18);
    }
    func_0200151c(3, 0x1e);
    func_02001164(8);
    func_02001150(8);
    puVar2[0] = 0;
    puVar2[1] = 1;
    puVar2[2] = 1;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    do {
        iVar3 = func_0206d648(puVar2, puVar2 + 4);
    } while (iVar3 != 0);
    *(Four *)(puVar2 + 7) = *(Four *)puVar2;
    *(Three *)(puVar2 + 11) = *(Three *)(puVar2 + 4);
    puVar2[14] = 0;
    *(s16 *)(puVar2 + 15) = 0;
    *(s16 *)((u8 *)puVar2 + 62) = 0;
    *(s16 *)(puVar2 + 16) = 0;
    *(s16 *)((u8 *)puVar2 + 66) = 3;
    data_0214f130 = puVar2;
    return puVar2;
}
