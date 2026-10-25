#pragma avoid_byte all
#include "ctx.h"

typedef struct {
    unsigned char justification_options;
    unsigned char sign_options;
    unsigned char precision_options;
    unsigned char alternate_form;
    unsigned char argument_options;
    unsigned char conversion_char;
    int field_width;
    int precision;
} print_format;

typedef struct {
    char style;
    short digits;
} decform;

typedef struct {
    unsigned char length;
    unsigned char text[36];
} sig_str;

typedef struct {
    unsigned char sgn;
    char unused;
    short exp;
    sig_str sig;
} decimal;

extern void func_02062aa4(const decform *f, double x, decimal *d);
extern double func_020626dc(double x);
extern int func_0205c7f0(double a, double b);
extern char *func_02062518(char *d, const char *s);
extern char *func_02061214(long num, char *buff, print_format format);

extern const char data_0213e3f8[];
extern const char data_0213e3c8[];
extern const char data_0213e3d0[];
extern const char data_0213e3d8[];
extern const char data_0213e3dc[];
extern const char data_0213e3e0[];
extern const char data_0213e3e8[];
extern const char data_0213e3f0[];
extern const char data_0213e3f4[];

char *func_0206070c(double num, char *buff, print_format format)
{
    char *p;
    unsigned char *q;
    unsigned char working_byte;
    int expbits, expmask;
    unsigned snum;
    long exp;
    print_format exp_format;
    int hex_precision;
    int mantissa_bit;
    decform form;
    decimal dec;
    int radix_marker;

    radix_marker = '.';
    p = buff;

    if (format.precision > 509)
        return 0;

    form.style = (char)0;
    form.digits = 0x20;
    func_02062aa4(&form, num, &dec);

    if (func_0205c7f0(0.0, func_020626dc(num))) {
        p = buff - 6;
        func_02062518(p, data_0213e3f8);
        return p;
    }

    if (*dec.sig.text == 'I') {
        if (dec.sgn) {
            p = buff - 5;
            if (format.conversion_char == 'A')
                func_02062518(p, data_0213e3c8);
            else
                func_02062518(p, data_0213e3d0);
        } else {
            p = buff - 4;
            if (format.conversion_char == 'A')
                func_02062518(p, data_0213e3d8);
            else
                func_02062518(p, data_0213e3dc);
        }
        return p;
    } else if (*dec.sig.text == 'N') {
        if (dec.sgn) {
            p = buff - 5;
            if (format.conversion_char == 'A')
                func_02062518(p, data_0213e3e0);
            else
                func_02062518(p, data_0213e3e8);
        } else {
            p = buff - 4;
            if (format.conversion_char == 'A')
                func_02062518(p, data_0213e3f0);
            else
                func_02062518(p, data_0213e3f4);
        }
        return p;
    }

    exp_format.justification_options = 1;
    exp_format.sign_options = 1;
    exp_format.precision_options = 0;
    exp_format.alternate_form = 0;
    exp_format.argument_options = 0;
    exp_format.field_width = 0;
    exp_format.precision = 1;
    exp_format.conversion_char = 'd';

    {
        int i;
        unsigned char *b = (unsigned char *)&num;
        for (i = 0; i < 4; i++) {
            unsigned char t = b[i];
            b[i] = b[7 - i];
            b[7 - i] = t;
        }
    }

    expbits = 11;
    expmask = 0x7ff;
    snum = ((unsigned char *)&num)[0] << 25;
    snum |= ((unsigned char *)&num)[1] << 17;
    snum = (snum >> (32 - expbits)) & expmask;
    exp = snum - 1023;

    p = func_02061214(exp, buff, exp_format);
    if (format.conversion_char == 'a')
        *--p = 'p';
    else
        *--p = 'P';
    q = (unsigned char *)&num;

    mantissa_bit = (1 + expbits + format.precision * 4) - 1;

    for (hex_precision = format.precision; hex_precision >= 1; hex_precision--) {
        if (mantissa_bit < 64) {
            int mantissa_byte;

            mantissa_byte = mantissa_bit >> 3;
            working_byte = (*(q + mantissa_byte)) >> (7 - (mantissa_bit & 7));

            if ((mantissa_bit & ~7) != ((mantissa_bit - 4) & ~7))
                working_byte |= ((*(q + (mantissa_byte - 1))) << 8) >> (7 - ((mantissa_bit) & 7));

            working_byte &= 0x0f;

            if (working_byte < 10)
                working_byte += '0';
            else if (format.conversion_char == 'a')
                working_byte += 'a' - 10;
            else
                working_byte += 'A' - 10;
        } else
            working_byte = '0';

        *--p = working_byte;
        mantissa_bit -= 4;
    }

    if (format.precision || format.alternate_form)
        *--p = radix_marker;

    *--p = '1';

    if (format.conversion_char == 'a')
        *--p = 'x';
    else
        *--p = 'X';

    *--p = '0';

    if (dec.sgn)
        *--p = '-';
    else if (format.sign_options == 1)
        *--p = '+';
    else if (format.sign_options == 2)
        *--p = ' ';

    return p;
}
