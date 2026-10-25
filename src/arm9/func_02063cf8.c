#include "ctx.h"

typedef void (*WMCallbackFunc)(void *arg);

typedef struct {
    u8 pad[0x46];
    u16 mp_recvBufSize;
} WMStatus;

typedef struct {
    u32 WM7;
    WMStatus *status;
    u32 pad8;
    u32 *fifo9to7;
    u32 *fifo7to9;
    u16 dmaNo;
    u16 scanOnlyFlag;
    WMCallbackFunc CallbackTable[41];
    WMCallbackFunc indCallback;
    WMCallbackFunc portCallbackTable[16];
    void *portCallbackArgument[16];
} WMArm9Buf;

typedef struct {
    u16 apiid;
    u16 errcode;
    u16 wlCmdID;
    u16 wlResult;
} WMCallback;

typedef struct {
    u16 apiid;
    u16 errcode;
    u16 state;
    u16 reserved;
    void *recvBuf;
} WMStartMPCallback;

typedef struct {
    u16 apiid;
    u16 errcode;
    u16 state;
    u16 port;
    void *recvBuf;
    u16 *data;
    u16 length;
    u16 aid;
    u8 macAddress[6];
    u16 seqNo;
    void *arg;
    u16 myAid;
    u16 connectedAidBitmap;
    u8 ssid[24];
} WMPortRecvCallback;

typedef struct {
    u16 apiid;
    u16 errcode;
    u16 wlCmdID;
    u16 wlResult;
    u8 pad[0x14];
    WMCallbackFunc callback;
} WMPortSendCallback;

typedef struct {
    u16 apiid;
    u16 errcode;
    u16 wlCmdID;
    u16 wlResult;
    u16 state;
    u8 macAddress[6];
    u16 aid;
    u16 reason;
    u8 ssid[24];
} WMStartParentCallback;

typedef struct {
    u16 apiid;
    u16 errcode;
    u16 wlCmdID;
    u16 wlResult;
    u16 state;
    u8 macAddress[6];
    u16 aid;
    u16 reason;
} WMStartConnectCallback;

extern WMArm9Buf *data_0214f9b4;
extern u16 data_0214f9b0;
extern WMPortRecvCallback data_0214f9f4;

extern void func_020800d4(const void *addr, u32 size);
extern void func_020800f0(const void *addr, u32 size);
extern s32 func_02064334(void);
extern void func_02063cdc(void);
extern void func_02080b84(void);
extern void func_0206c9b8(const void *src, void *dest, u32 size);
extern void func_0206c7d4(const void *src, void *dest, u32 size);
extern void func_0206c7bc(u16 data, void *dest, u32 size);

static inline void MI_CpuFill16(void *dest, u16 data, u32 size)
{
    func_0206c7bc(*(u16 *)&data, dest, size);
}

static inline void MI_CpuClear16(void *dest, u32 size)
{
    MI_CpuFill16(dest, 0, size);
}

void func_02063cf8(u32 tag, u32 fifo_buf_adr, BOOL err)
{
    WMCallback *callback_p = (WMCallback *)fifo_buf_adr;

    if (err) {
        return;
    }

    func_020800d4(data_0214f9b4->fifo7to9, 256);
    if (!data_0214f9b4->scanOnlyFlag) {
        func_020800d4(data_0214f9b4->status, 2048);
    }
    if ((u32)callback_p != (u32)data_0214f9b4->fifo7to9) {
        func_020800d4(callback_p, 256);
    }

    if (callback_p->apiid >= 41) {
        if (callback_p->apiid == 0x80) {
            if (callback_p->errcode == 19) {
                func_02080b84();
            }
            if (data_0214f9b4->indCallback != NULL) {
                data_0214f9b4->indCallback(callback_p);
            }
        } else if (callback_p->apiid == 0x82) {
            WMPortRecvCallback *cb_Port = (WMPortRecvCallback *)callback_p;
            if (data_0214f9b4->portCallbackTable[cb_Port->port] != NULL) {
                cb_Port->arg = data_0214f9b4->portCallbackArgument[cb_Port->port];
                func_020800d4(cb_Port->recvBuf, data_0214f9b4->status->mp_recvBufSize);
                (data_0214f9b4->portCallbackTable[cb_Port->port])(cb_Port);
            }
        } else if (callback_p->apiid == 0x81) {
            WMPortSendCallback *cb_Port = (WMPortSendCallback *)callback_p;
            callback_p->apiid = 15;
            if (cb_Port->callback != NULL) {
                (cb_Port->callback)(cb_Port);
            }
        }
    } else {
        if (callback_p->apiid == 14) {
            WMStartMPCallback *cb_StartMP = (WMStartMPCallback *)callback_p;
            if (cb_StartMP->state == 11 || cb_StartMP->state == 12) {
                if (cb_StartMP->errcode == 0) {
                    func_020800d4(cb_StartMP->recvBuf, data_0214f9b4->status->mp_recvBufSize);
                }
            }
        }

        if (callback_p->apiid == 2 && callback_p->errcode == 0) {
            WMCallbackFunc cb = data_0214f9b4->CallbackTable[callback_p->apiid];
            (void)func_02064334();
            if (cb != NULL) {
                cb(callback_p);
            }
            return;
        }

        if (data_0214f9b4->CallbackTable[callback_p->apiid] != NULL) {
            (data_0214f9b4->CallbackTable[callback_p->apiid])(callback_p);
            if (!data_0214f9b0) {
                return;
            }
        }

        if (callback_p->apiid == 8 || callback_p->apiid == 12) {
            u16 state;
            u16 aid;
            u16 myAid;
            u8 *macAddress;
            u8 *ssid;

            if (callback_p->apiid == 8) {
                WMStartParentCallback *cb = (WMStartParentCallback *)callback_p;
                macAddress = cb->macAddress;
                ssid = cb->ssid;
                state = cb->state;
                aid = cb->aid;
                myAid = 0;
            } else if (callback_p->apiid == 12) {
                WMStartConnectCallback *cb = (WMStartConnectCallback *)callback_p;
                aid = 0;
                state = cb->state;
                myAid = cb->aid;
                ssid = NULL;
                macAddress = cb->macAddress;
            }
            if (state == 7 || state == 9) {
                u16 i;
                data_0214f9f4.apiid = 0x82;
                data_0214f9f4.errcode = 0;
                data_0214f9f4.state = state;
                data_0214f9f4.recvBuf = NULL;
                data_0214f9f4.data = NULL;
                data_0214f9f4.length = 0;
                data_0214f9f4.aid = aid;
                data_0214f9f4.myAid = myAid;
                data_0214f9f4.seqNo = 0xffff;
                func_0206c9b8(macAddress, data_0214f9f4.macAddress, 6);
                if (ssid != NULL) {
                    func_0206c7d4(ssid, data_0214f9f4.ssid, 24);
                } else {
                    MI_CpuClear16(data_0214f9f4.ssid, 24);
                }
                for (i = 0; i < 16; i++) {
                    data_0214f9f4.port = i;
                    if (data_0214f9b4->portCallbackTable[i] != NULL) {
                        data_0214f9f4.arg = data_0214f9b4->portCallbackArgument[i];
                        (data_0214f9b4->portCallbackTable[i])(&data_0214f9f4);
                    }
                }
            }
        }
    }

    func_020800d4(data_0214f9b4->fifo7to9, 256);
    func_02063cdc();
    if ((u32)callback_p != (u32)data_0214f9b4->fifo7to9) {
        callback_p->apiid |= 0x8000;
        func_020800f0(callback_p, 256);
    }
}
