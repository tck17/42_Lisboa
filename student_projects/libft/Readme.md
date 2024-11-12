# libft

The **libft** project is a foundational C library that implements common standard library functions, allowing students to create their own versions of functions that are widely used in C programming. This library is essential for future projects at 42 School as it provides building blocks for data manipulation, memory management, string handling, and linked lists.

## Table of Contents
1. [Project Structure](#project-structure)
2. [Installation](#installation)
3. [Usage](#usage)
4. [Functions](#functions)
    - [Character Checking & Conversion](#character-checking--conversion)
    - [String Manipulation](#string-manipulation)
    - [Memory Management](#memory-management)
    - [File Descriptor Output](#file-descriptor-output)
    - [Linked List Functions (Bonus)](#linked-list-functions-bonus)
5. [Compilation Rules](#compilation-rules)

## Project Structure

- **Header File**: `libft.h`  
  Contains function prototypes, necessary library imports, and the linked list structure `t_list`.

- **Source Files**: Each function is implemented in a separate `.c` file. Source files are located in the `srcs` directory.

- **Makefile**: Handles compilation and creation of the `libft.a` static library.

## Installation

1. Clone the repository:
   ```bash
   git clone 
   cd libft
  
2. Compile the library:
   ```bash
   make

3. Compile with:
  ```bash
  cc -Wall -Wextra -Werror your_file.c -L. -lft  
  ```

Functions
---------

### Character Checking & Conversion

*   **ft\_isalnum**: Checks if character is alphanumeric.
    
*   **ft\_isalpha**: Checks if character is alphabetic.
    
*   **ft\_isascii**: Checks if character is an ASCII value.
    
*   **ft\_isdigit**: Checks if character is a digit.
    
*   **ft\_isprint**: Checks if character is printable.
    
*   **ft\_toupper**: Converts character to uppercase.
    
*   **ft\_tolower**: Converts character to lowercase.
    
*   **ft\_atoi**: Converts string to integer.
    
*   **ft\_itoa**: Converts integer to string.
    

### String Manipulation

*   **ft\_strlen**: Calculates the length of a string.
    
*   **ft\_strlcpy**: Copies a string with a buffer limit.
    
*   **ft\_strlcat**: Concatenates strings with a buffer limit.
    
*   **ft\_strchr**: Locates the first occurrence of a character in a string.
    
*   **ft\_strncmp**: Compares two strings up to a specified length.
    
*   **ft\_strnstr**: Finds a substring within a string with a length limit.
    
*   **ft\_strdup**: Duplicates a string.
    
*   **ft\_substr**: Extracts a substring from a string.
    
*   **ft\_strjoin**: Concatenates two strings into a new one.
    
*   **ft\_strtrim**: Trims characters from the start and end of a string.
    
*   **ft\_strrchr**: Locates the last occurrence of a character in a string.
    
*   **ft\_split**: Splits a string by a delimiter.
    
*   **ft\_strmapi**: Creates a new string by applying a function to each character.
    
*   **ft\_striteri** Applies a function to each character of a string.
    

### Memory Management

*   **ft\_memset**: Fills a block of memory with a value.
    
*   **ft\_bzero**: Sets memory to zero.
    
*   **ft\_memcpy**: Copies memory from source to destination.
    
*   **ft\_memmove**: Moves memory from source to destination safely.
    
*   **ft\_memchr**: Locates a character in memory.
    
*   **ft\_memcmp**: Compares two blocks of memory.
    
*   **ft\_calloc**: Allocates and zeroes out memory.
    

### File Descriptor Output

*   **ft\_putchar\_fd**: Writes a character to a file descriptor.
    
*   **ft\_putstr\_fd**: Writes a string to a file descriptor.
    
*   **ft\_putendl\_fd**: Writes a string with a newline to a file descriptor.
    
*   **ft\_putnbr\_fd**: Writes an integer to a file descriptor.
    

### Linked List Functions (Bonus)

*   **ft\_lstnew**: Creates a new linked list node.
    
*   **ft\_lstadd\_front**: Adds a node to the start of the list.
    
*   **ft\_lstsize**: Returns the number of nodes in a list.
    
*   **ft\_lstlast**: Returns the last node of a list.
    
*   **ft\_lstadd\_back**: Adds a node to the end of the list.
    
*   **ft\_lstdelone**: Deletes a node and frees its memory.
    
*   **ft\_lstclear**: Deletes and frees all nodes in a list.
    
*   **ft\_lstiter**: Iterates a function over each node in a list.
    
*   **ft\_lstmap**: Creates a new list by applying a function to each node.
    

Compilation Rules
-----------------

The Makefile provides the following commands:

*   **make**: Builds the library libft.a with both standard and bonus functions.
    
*   **make bonus**: Compiles and includes bonus functions related to linked lists.
    
*   **make clean**: Removes object files (\*.o).
    
*   **make fclean**: Removes both object files and the library (libft.a).
    
*   **make re**: Rebuilds the library from scratch by performing fclean followed by all.
