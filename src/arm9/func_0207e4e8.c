#include "ctx.h"

typedef struct SHA1Context {
    u32 Intermediate_Hash[5];
    u32 Length_Low;
    u32 Length_High;
    int Message_Block_Index;
    u8 Message_Block[64];
} SHA1Context;

#define SHA1CircularShift(bits, word) (((word) << (bits)) | ((word) >> (32 - (bits))))

extern int data_02155c80;
typedef struct { u32 k[4]; } SHA1K;
extern const SHA1K data_0213e814;  /* { 0x5A827999, 0x6ED9EBA1, 0x8F1BBCDC, 0xCA62C1D6 } */

void func_0207e4e8(SHA1Context *context)
{
    const SHA1K K = data_0213e814;
    int t;
    u32 temp;
    u32 W[80];
    u32 A, B, C, D, E;
    u32 save0, save1;
    u32 *block = (u32 *)context->Message_Block;

    if (data_02155c80) {
        save0 = block[6];
        save1 = block[14];
        block[6] = 0;
        block[14] = 0;
    }

    for (t = 0; t < 16; t++) {
        W[t] = context->Message_Block[t * 4] << 24;
        W[t] |= context->Message_Block[t * 4 + 1] << 16;
        W[t] |= context->Message_Block[t * 4 + 2] << 8;
        W[t] |= context->Message_Block[t * 4 + 3];
    }

    for (t = 16; t < 80; t++) {
        W[t] = SHA1CircularShift(1, W[t - 3] ^ W[t - 8] ^ W[t - 14] ^ W[t - 16]);
    }

    A = context->Intermediate_Hash[0];
    B = context->Intermediate_Hash[1];
    C = context->Intermediate_Hash[2];
    D = context->Intermediate_Hash[3];
    E = context->Intermediate_Hash[4];

    for (t = 0; t < 20; t++) {
        temp = SHA1CircularShift(5, A) + ((B & C) | ((~B) & D)) + E + W[t] + K.k[0];
        E = D;
        D = C;
        C = SHA1CircularShift(30, B);
        B = A;
        A = temp;
    }

    for (t = 20; t < 40; t++) {
        temp = SHA1CircularShift(5, A) + (B ^ C ^ D) + E + W[t] + K.k[1];
        E = D;
        D = C;
        C = SHA1CircularShift(30, B);
        B = A;
        A = temp;
    }

    for (t = 40; t < 60; t++) {
        temp = SHA1CircularShift(5, A) + ((B & C) | (B & D) | (C & D)) + E + W[t] + K.k[2];
        E = D;
        D = C;
        C = SHA1CircularShift(30, B);
        B = A;
        A = temp;
    }

    for (t = 60; t < 80; t++) {
        temp = SHA1CircularShift(5, A) + (B ^ C ^ D) + E + W[t] + K.k[3];
        E = D;
        D = C;
        C = SHA1CircularShift(30, B);
        B = A;
        A = temp;
    }

    context->Intermediate_Hash[0] += A;
    context->Intermediate_Hash[1] += B;
    context->Intermediate_Hash[2] += C;
    context->Intermediate_Hash[3] += D;
    context->Intermediate_Hash[4] += E;

    context->Message_Block_Index = 0;

    if (data_02155c80) {
        block[6] = save0;
        block[14] = save1;
    }
}
