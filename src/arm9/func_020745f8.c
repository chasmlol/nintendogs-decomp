typedef unsigned char u8;
typedef unsigned int u32;

typedef struct {
    u8 pad[0xfc];
    u32 flags;
} Obj;

extern Obj data_02152cd8;
extern u32 data_02152e08;
extern void func_0207463c(void);

u32 func_020745f8(void)
{
    if ((data_02152cd8.flags & 0x80) == 0) {
        func_0207463c();
        data_02152cd8.flags = data_02152cd8.flags | 0x80;
    }
    return (u32)&data_02152e08;
}
