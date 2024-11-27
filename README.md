# Holbertonschool-printf Project:

# _printf 📄
A formatted output conversion C program completed as part of the low-level programming and algorithm track at Holberton School. The program is a pseudo- recreation of the C standard library function, printf.

# Dependencies 👫
The _printf function was coded on an Ubuntu 24.04.1 LTS machine with gcc version 13.2.0.

# Usage 🏃
To use the _printf function, assuming the above dependencies have been installed, compile all .c files in the repository and include the header holberton.h with any main function.

Example main.c:


#include "holberton.h"

int main(void)
{
    _printf("Hello, World!");

    return (0);
}
Compilation:

$ gcc *.c -o tester
Output:

$ ./tester
Hello, World!
$

# Description 💬
The function _printf writes output to standard output. The function writes under the control of a format string that specifies how subsequent arguments (accessed via the variable-length argument facilities of stdarg) are converted for output.


Prototype: int _printf(const char *format, ...);


# Return Value
Upon successful return, _printf returns the number of characters printed (excluding the terminating null byte used to end output to strings). If an output error is encountered, the function returns -1.

# Format of the Argument String

# Authors ✒️
Brennan D Baraban <bdbaraban>
Michael Klein <mKleinCreative>
License 🔒
This project is licensed under the MIT License - see the LICENSE file for details.

# Acknowledgements 🙏
The _printf function emulates functionality of the C standard library function printf. This README borrows from the Linux man page printf(3).

This program was written as part of the curriculum for Holberton School. Holberton School is a campus-based full-stack software engineering program that prepares students for careers in the tech industry using project-based peer learning. For more details,  <a href="https://www.holbertonschool.com/programs">Click here</a>
.

<a href="https://www.holbertonschool.com/">
    <img src="C:\Users\user\Desktop\logo.png" alt="Company Logo">
</a>

