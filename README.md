# _printf function
---
## Description

In this repo we store all the code to run ``_printf``,  our version of the function ``printf``. This function replicates some of the processes of the function in the standard library ``stdio.h``.

### Allowed functions

* ``write``, ``malloc``, ``free``, ``va_start``, ``va_end``, ``va_copy``,``va_arg``

## Compilation

``_printf`` was compiled and test using the following comand:

``$ gcc -Wall -Werror -Wextra -pedantic *.c``

The prototypes to all of the functions we used during the coding process are stored in our header file ``holberton.h``. However to test the program functionalities it is necessary to add a main.c file prior to the compilation process.

## Functions:

Each function has its own description displayed as comments on top of it. You will find a file [_functions.c](https://github.com/JRodriguez9510/printf_mycopy/blob/master/_functions.c) were you can check the functions we have developed, as well as [man page](https://github.com/JRodriguez9510/printf_mycopy/blob/master/man_3_printf) manual page with the general use of the function, including the modifiers after the "%" flag.

As general rule for this repository each file contains up to 5 functions, and each function cannot be over 43 lines of code.

## Usage  
To use our function it is necessarry to use the flag "%" and a format depending of the type of value you would like to print. Bellow you can find a list of the available formats and their usage.  
- c : Prints a character based on its ASCII value.  
- s : Prints a string of characters.  
- d : Prints integers with sign.  
- i : Prints integers with sign.

## Example  
The programm takes any other character before the flag "%" and prints them, once the flag is determine, the program compares the next char to it and determines what kind of function has to be used.
  
i.e The line ``_printf("Hello %s", "World")`` would print ``"Hello World"``.  
  
In case that the format does not match any of the options, the program will take it as a regular char and print it.  
## Diagram  
Our program works as the following diagram:
  
![](https://github.com/JRodriguez9510/printf_mycopy/blob/master/Diagram%20_printf.png?raw=true)  
  
## Authors  
  
Alejandro Torres - https://github.com/torres1-23  
Daniel Chavez - https://github.com/dantereto  
Jorge Rodriguez - https://github.com/JRodriguez9510  