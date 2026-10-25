typedef unsigned int u32;
void func_02002268(u32 *param_1)
{
    void (*cb)(u32);
    if (param_1 != 0) {
        do {
            cb = (void (*)(u32))param_1[0];
            cb(param_1[1]);
            param_1 = (u32 *)param_1[2];
        } while (param_1 != 0);
    }
}
