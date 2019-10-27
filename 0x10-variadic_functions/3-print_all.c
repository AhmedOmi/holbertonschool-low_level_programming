#include "variadic_functions.h"
/**
 * format_ch - format character
 * @separator: separator variable
 * @lc: variable liste
 * Return: void return and print
 */
void format_ch(char *separator, va_list lc)
{
printf("%s%c", separator, va_arg(lc, int));
}
/**
 * format_i - format integer
 * @separator: separator variable
 * @li: variable liste
 * Return: void return and print
 */
void format_i(char *separator, va_list li)
{
printf("%s%d", separator, va_arg(li, int));
}
/**
 * format_f - format float
 * @separator: separator variable
 * @lf: variable liste
 * Return: void return and print
 */
void format_f(char *separator, va_list lf)
{
printf("%s%f", separator, va_arg(lf, double));
}
/**
 * format_s - format string
 * @separator: separator variable
 * @ls: variable liste
 * Return: void return and print
 */
void format_s(char *separator, va_list ls)
{
char *c;
c = va_arg(ls, char *);
if (c == NULL)
c = "(nil)";
printf("%s%s", separator, c);
}
/**
 * print_all - print any form
 * @format: char pointer
 * Return: void return
 */
void print_all(const char * const format, ...)
{
va_list vl;
int i, j;
_printf fp[] = {{"c", format_ch},
{"i", format_i},
{"f", format_f}, {"s", format_s}, {NULL, NULL}};
char *separator = "";
va_start(vl, format);
i = 0;
while (format && format[i])
{
j = 0;
while (fp[j].fprint)
{
if (format[i] == fp[j].fprint[0])
{
fp[j].func(separator, vl);
separator = ", ";
}
j++;
}
i++;
}
printf("\n");
va_end(vl);
}
