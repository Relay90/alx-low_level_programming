#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...)
{
	va_list args;
	va_start(args, format);
    
	int char_count = 0;
	// To keep track of the number of characters printed

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			// Move past the '%'

	// Handle the conversion specifiers
	switch (*format)
	{
		case 'c':
			{
				char c = va_arg(args, int);
				// char gets promoted to int in varargsputchar(c);
                    char_count++;
                    break;
                }
                case 's': {
                    char *str = va_arg(args, char*);
                    while (*str) {
                        putchar(*str);
                        str++;
                        char_count++;
                    }
                    break;
                }
                case '%': {
                    putchar('%');
                    char_count++;
                    break;
                }
                default:
                    // Ignore unknown specifiers
                    break;
            }
        } else {
            putchar(*format);
            char_count++;
        }
        
        format++;
    }
    
    va_end(args);
    return char_count;
}

int main() {
    _printf("Hello, %s! This is a %c test %%.\n", "world", 'C');
    return 0;
}
