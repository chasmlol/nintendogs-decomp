#pragma avoid_byte all
#pragma unsigned_char on
#include "ctx.h"

/* MSL printf.c __pformatter */

typedef char *va_list;
#define __fourbytealign(n) ((((unsigned long)(n)) + 3U) & ~3U)
#define va_arg(ap, type) (*(type *)((ap += __fourbytealign(sizeof(type))) - __fourbytealign(sizeof(type))))

typedef unsigned int size_t;
typedef long ptrdiff_t;
typedef unsigned short wchar_t;

enum justification_options {
    left_justification,
    right_justification,
    zero_fill
};

enum sign_options {
    only_minus,
    sign_always,
    space_holder
};

enum argument_options {
    normal_argument,
    char_argument,
    short_argument,
    long_argument,
    intmax_argument,
    size_t_argument,
    ptrdiff_argument,
    long_long_argument,
    long_double_argument,
    wchar_argument
};

typedef struct {
    unsigned char justification_options;
    unsigned char sign_options;
    unsigned char precision_specified;
    unsigned char alternate_form;
    unsigned char argument_options;
    unsigned char conversion_char;
    int field_width;
    int precision;
} print_format;

#define conversion_buff_size 512
#define bad_conversion 0xFF

extern char *func_020622e8(const char *s, int c);                                   /* strchr */
extern size_t func_0206267c(const char *s);                                         /* strlen */
extern const char *func_020615c8(const char *format_string, va_list *arg, print_format *format); /* parse_format */
extern char *func_02060dd0(long long num, char *buff, print_format format);         /* longlong2str */
extern char *func_02061214(long num, char *buff, print_format format);              /* long2str */
extern char *func_0205fb3c(long double num, char *buff, print_format format);       /* float2str */
extern char *func_0206070c(long double num, char *buff, print_format format);       /* double2hex */
extern int func_0205ede4(char *s, const wchar_t *pwcs, size_t n);                   /* wcstombs */
extern void *func_0205ef8c(const void *s, int c, size_t n);                         /* memchr */
extern const wchar_t data_0213e3c0[];
extern const char data_0213e3c4[];

int func_0205f19c(void *(*WriteProc)(void *, const char *, size_t), void *WriteProcArg, const char *format_str, va_list arg)
{
    int num_chars, chars_written, field_width;
    const char *format_ptr;
    const char *curr_format;
    print_format format;
    long long_num;
    long long long_long_num;
    long double long_double_num;
    char buff[conversion_buff_size];
    char *buff_ptr;
    char *string_end;
    char fill_char = ' ';

    format_ptr = format_str;
    chars_written = 0;

    while (*format_ptr) {
        if (!(curr_format = func_020622e8(format_ptr, '%'))) {
            num_chars = func_0206267c(format_ptr);
            chars_written += num_chars;

            if (num_chars && !(*WriteProc)(WriteProcArg, format_ptr, num_chars))
                return -1;

            break;
        }

        num_chars = curr_format - format_ptr;
        chars_written += num_chars;

        if (num_chars && !(*WriteProc)(WriteProcArg, format_ptr, num_chars))
            return -1;

        format_ptr = curr_format;

        format_ptr = func_020615c8(format_ptr, &arg, &format);

        switch (format.conversion_char) {
        case 'd':
        case 'i':
            if (format.argument_options == long_argument)
                long_num = va_arg(arg, long);
            else if (format.argument_options == long_long_argument)
                long_long_num = va_arg(arg, long long);
            else if (format.argument_options == intmax_argument)
                long_num = va_arg(arg, long long);
            else if (format.argument_options == size_t_argument)
                long_num = va_arg(arg, size_t);
            else if (format.argument_options == ptrdiff_argument)
                long_num = va_arg(arg, ptrdiff_t);
            else
                long_num = va_arg(arg, int);

            if (format.argument_options == short_argument)
                long_num = (short)long_num;

            if (format.argument_options == char_argument)
                long_num = (signed char)long_num;

            if (format.argument_options == long_long_argument) {
                if (!(buff_ptr = func_02060dd0(long_long_num, buff + conversion_buff_size, format)))
                    goto conversion_error;
            } else {
                if (!(buff_ptr = func_02061214(long_num, buff + conversion_buff_size, format)))
                    goto conversion_error;
            }

            num_chars = buff + conversion_buff_size - 1 - buff_ptr;
            break;

        case 'o':
        case 'u':
        case 'x':
        case 'X':
            if (format.argument_options == long_argument)
                long_num = va_arg(arg, unsigned long);
            else if (format.argument_options == long_long_argument)
                long_long_num = va_arg(arg, long long);
            else if (format.argument_options == intmax_argument)
                long_num = va_arg(arg, long long);
            else if (format.argument_options == size_t_argument)
                long_num = va_arg(arg, size_t);
            else if (format.argument_options == ptrdiff_argument)
                long_num = va_arg(arg, int);
            else
                long_num = va_arg(arg, unsigned int);

            if (format.argument_options == short_argument)
                long_num = (unsigned short)long_num;

            if (format.argument_options == char_argument)
                long_num = (unsigned char)long_num;

            if (format.argument_options == long_long_argument) {
                if (!(buff_ptr = func_02060dd0(long_long_num, buff + conversion_buff_size, format)))
                    goto conversion_error;
            } else {
                if (!(buff_ptr = func_02061214(long_num, buff + conversion_buff_size, format)))
                    goto conversion_error;
            }

            num_chars = buff + conversion_buff_size - 1 - buff_ptr;
            break;

        case 'f':
        case 'F':
        case 'e':
        case 'E':
        case 'g':
        case 'G':
            if (format.argument_options == long_double_argument)
                long_double_num = va_arg(arg, long double);
            else
                long_double_num = va_arg(arg, double);

            if (!(buff_ptr = func_0205fb3c(long_double_num, buff + conversion_buff_size, format)))
                goto conversion_error;

            num_chars = buff + conversion_buff_size - 1 - buff_ptr;
            break;

        case 'a':
        case 'A':
            if (format.argument_options == long_double_argument)
                long_double_num = va_arg(arg, long double);
            else
                long_double_num = va_arg(arg, double);

            if (!(buff_ptr = func_0206070c(long_double_num, buff + conversion_buff_size, format)))
                goto conversion_error;

            num_chars = buff + conversion_buff_size - 1 - buff_ptr;
            break;

        case 's':
            if (format.argument_options == wchar_argument) {
                wchar_t *wcs_ptr = va_arg(arg, wchar_t *);
                if (wcs_ptr == NULL)
                    wcs_ptr = (wchar_t *)data_0213e3c0;
                if ((num_chars = func_0205ede4(buff, wcs_ptr, sizeof(buff))) < 0)
                    goto conversion_error;
                buff_ptr = &buff[0];
            } else
                buff_ptr = va_arg(arg, char *);

            if (buff_ptr == NULL)
                buff_ptr = (char *)data_0213e3c4;

            if (format.alternate_form) {
                num_chars = (unsigned char)*buff_ptr++;

                if (format.precision_specified && num_chars > format.precision)
                    num_chars = format.precision;
            } else if (format.precision_specified) {
                num_chars = format.precision;

                if ((string_end = (char *)func_0205ef8c(buff_ptr, 0, num_chars)) != 0)
                    num_chars = string_end - buff_ptr;
            } else
                num_chars = func_0206267c(buff_ptr);

            break;

        case 'n':
            buff_ptr = va_arg(arg, char *);

            switch (format.argument_options) {
            case normal_argument:
                *(int *)buff_ptr = chars_written;
                break;
            case short_argument:
                *(short *)buff_ptr = chars_written;
                break;
            case long_argument:
                *(long *)buff_ptr = chars_written;
                break;
            case long_long_argument:
                *(long long *)buff_ptr = chars_written;
                break;
            }

            continue;

        case 'c':
            buff_ptr = buff;
            *buff_ptr = va_arg(arg, int);
            num_chars = 1;
            break;

        case '%':
            buff_ptr = buff;
            *buff_ptr = '%';
            num_chars = 1;
            break;

        case bad_conversion:
        default:
        conversion_error:
            num_chars = func_0206267c(curr_format);
            chars_written += num_chars;

            if (num_chars && !(*WriteProc)(WriteProcArg, curr_format, num_chars))
                return -1;

            return chars_written;
        }

        field_width = num_chars;

        if (format.justification_options != left_justification) {
            fill_char = (format.justification_options == zero_fill) ? '0' : ' ';

            if (((*buff_ptr == '+') || (*buff_ptr == '-') || (*buff_ptr == ' ')) && (fill_char == '0')) {
                if ((*WriteProc)(WriteProcArg, buff_ptr, 1) == 0)
                    return -1;

                ++buff_ptr;
                num_chars--;
            }

            while (field_width < format.field_width) {
                if ((*WriteProc)(WriteProcArg, &fill_char, 1) == 0)
                    return -1;

                ++field_width;
            }
        }

        if (num_chars && !(*WriteProc)(WriteProcArg, buff_ptr, num_chars))
            return -1;

        if (format.justification_options == left_justification) {
            while (field_width < format.field_width) {
                char blank = ' ';

                if ((*WriteProc)(WriteProcArg, &blank, 1) == 0)
                    return -1;

                ++field_width;
            }
        }

        chars_written += field_width;
    }

    return chars_written;
}
