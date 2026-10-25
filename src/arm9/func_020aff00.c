typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

extern u16 *func_020038b8(u32 *p, u32 size);
extern void func_020aaaf8(u16 *p);
extern void func_020aff70(u32 a, u32 b);
extern void func_020b02b0(void);
extern void func_020b08f4(void);

u16 *func_020aff00(u32 *param_1, u32 param_2, u32 param_3)
{
    u16 *puVar3;
    u32 uVar1;
    u32 uVar2;
    puVar3 = func_020038b8(param_1, 0x20);
    func_020aaaf8(puVar3);
    uVar1 = (u32)func_020b02b0;
    *puVar3 = 2;
    uVar2 = (u32)func_020b08f4;
    *(u32 *)(puVar3 + 8) = uVar1;
    *(u32 *)(puVar3 + 10) = uVar2;
    puVar3[1] = 0xe10;
    puVar3[4] = 0xb4;
    *(u32 *)(puVar3 + 0xe) = param_3;
    if (*(u32 *)(puVar3 + 0xe) != 0) {
        func_020aff70(*(u32 *)(puVar3 + 0xe), param_2);
    }
    return puVar3;
}
