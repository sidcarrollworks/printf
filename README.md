# _printf - Simulation of the C Standard Library printf Function

This is a project that simulates the C library function function `printf`. Our simulation function `_printf` is a variadic function which formats arguments into a character string and sends the formatted output to `stdout`.

## Getting Started

These instructions will help you get a copy of `_printf` up and running your machine for development and testing purposes.

### Prerequisites

This project has been implemented and tested on Ubuntu 14.04.5 LTS. Testing was done using VirtualBox 5.2.0 (https://www.virtualbox.org/wiki/Downloads) via Vagrant 2.0.0 64-bit (https://www.vagrantup.com/downloads.html).

### Installation

Follow the steps outlined below in order to get started with _printf:

1. Clone the repository into your directory of choice by running this command
```
$ git clone https://github.com/squidcarroll/printf.git
```

After cloning the repository, you should see the files below:

|    **FILE**    |    **DESCRIPTION**                                            |
|----------------|---------------------------------------------------------------|
|  holberton.h   |  Header file containing directives and function prototypes     |
|  _printf.c     |  Soure file containing program that simulates printf     |
|  _putchar.c    |  Source file containing a `putchar` simulation function     |
|  print_functions.c    |  Source file containing functions used for printing data    |
|  helper_funcs.c    |  Source file containing functions used for manipulating data     |

2. Implement the compilation process by running this command
```
$ gcc -Wall -Werror -Wextra -pedantic -I $PWD/printf printf/*.c <FILENAME>.c
```

Note: `<FILENAME>` is a placeholder that should be replaced with a file name of your choosing.

3. Try it out by using _printf in some of your code, e.g.
```
#include <holberton.h>

int main(void)
{
	_printf("I love %s strings!\n", "printing");
	return (0);
}
```
Will have the following output:
```
$ I love printing strings!
```
## Notes
This version of _printf works with the following format specifiers:

`%c` - Displays a character

`%s` - Displays a string

`%d` or `%i` - Displays an integer in decimal form

`%%` - Prints a single % character

### Authors
Sid Carroll & Cam Moore

### Reporting Bugs
No known bugs as of time of publish. Report _printf bugs to Sid Carroll and/or Cam Moore via email at sid.carroll@holbertonschool.com and cameron.moore@holbertonschool.com