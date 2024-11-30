# ft_printf

The **ft_printf** project is a recreation of the standard `printf` function, a critical function in C programming for formatted output. This project challenges students to understand variadic functions and implement custom formatting for different data types. Like `printf`, `ft_printf` is a versatile tool that will be used in future projects at 42 School.

## Table of Contents
1. [Project Structure](#project-structure)
2. [Installation](#installation)
3. [Usage](#usage)
4. [Supported Format Specifiers](#supported-format-specifiers)
5. [Compilation Rules](#compilation-rules)

## Project Structure

- **Header File**: `ft_printf.h`  
  Contains function prototypes, necessary library imports, and any macros or utility definitions.

- **Source Files**: Each `.c` file is structured to handle specific formatting types (e.g., `ft_putnbr.c` for integers, `ft_puthex.c` for hexadecimal, etc.).

- **Makefile**: Automates the compilation and creation of the `libftprintf.a` static library.

## Installation

1. Clone the repository:
   ```bash
   git clone https://github.com/tck17/42_Lisboa/tree/main/student_projects/ft_printf
   cd ft_printf
  
2. Compile the library:
   ```bash
   make

## Usage

Compile your project with:
	```bash
	cc -Wall -Wextra -Werror your_file.c -L. -lftprintf
	```  

## Supported Format Specifiers

The `ft_printf` function supports the following specifiers:

    - %c: Character
    - %s: String
    - %p: Pointer address
    - %d or %i: Signed decimal integer
    - %u: Unsigned decimal integer
    - %x: Hexadecimal integer (lowercase)
    - %X: Hexadecimal integer (uppercase)
    - %%: Literal percent sign

## Functionaly Overview
	
	- Variadic Arguments: ft_printf uses va_list to handle an arbitrary number of arguments.

	- Output Formatting: Custom functions (ft_putchar, ft_putstr, ft_putnbr, etc.) are implemented to handle different data types.

## Compilation Rules
-----------------

The Makefile provides the following commands:

*   **make**: Builds the library libftprintf.a.
    
*   **make clean**: Removes object files (\*.o).
    
*   **make fclean**: Removes both object files and the library (libftprintf.a).
    
*   **make re**: Rebuilds the library from scratch by performing fclean followed by all.
