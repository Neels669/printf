##The Printf Project
**0x11. C - printf**

Project to be done in teams of 2 people (Our team: Neelam Choudrey, Mostafa Samahah)

Authorized functions and macros:
- write (man 2 write)
- malloc (man 3 malloc)
- free (man 3 free)
- va_start (man 3 va_start)
- va_end (man 3 va_end)
- va_copy (man 3 va_copy)
- va_arg (man 3 va_arg)

Final compilation using gcc: (gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c)

* main.h

This is our header file with all function prototypes

* _printf.c 

This is the main function that has two arguments: int _printf(const char *format, ...);

Since we will use a cariable of functions, so we just use the syntax(...)

* Checkit.c

  This is where we have declared and stored our list of arguments

* print_cent.c

Format specifier for percentages.

* print_char.c

Format specifier for character

* print_str.c

Format specifier for strings

* print_decimal.c

Conversion specifiers for decimal

* print_integer.c

Conversion specifiers for integers.

So now we Finished the project Peacfully
