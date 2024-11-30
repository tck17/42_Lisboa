# Get Next Line (GNL) Project

The **Get Next Line (GNL)** project challenges students to implement a function that reads and returns a single line from a file descriptor. It deepens understanding of file I/O, dynamic memory management, and efficient buffer handling. This function is a powerful tool that will be leveraged in future projects at 42 School.

## Table of Contents
1. [Project Structure](#project-structure)
2. [Installation](#installation)
3. [Usage](#usage)
4. [Functionality](#functionality)
5. [Bonus Features](#bonus-features)

## Project Structure

- **Header File**: `get_next_line.h`  
  Contains function prototypes, necessary library imports, macros, and constants like `BUFFER_SIZE`.

- **Source Files**: 
	* `get_next_line.c`: Implements the main function logic.
	* Utility functions for string and buffer manipulation:
	`ft_linelen`: Calculates the length of a string or line.
    `ft_join_buffer`: Merges buffers dynamically to create a full line.
    `shift_buffer`: Adjusts the static buffer after extracting a line.

## Installation

1. Clone the repository:
   ```bash
   git clone https://github.com/tck17/42_Lisboa/tree/main/student_projects/get_next_line
   cd get_next_line
  
## Usage

Compile your project with:
	```bash
	cc -Wall -Wextra -Werror get_next_line.c get_next_line_utils.c
	```  

## Functionaly

## Main Function:

`get_next_line`

* **Input**: File descriptor `(fd)`.
* **Output**: Returns the next line from the file as a dynamically allocated string, including the newline character (`\n`) if present. Returns NULL on EOF or error.

## Utility Functions:

* `ft_linelen`: Calculates the length of a line up to a specific terminator.
* `ft_join_buffer`: Concatenates the current line with the buffer content.
* `shift_buffer`: Adjusts the buffer to hold the remaining content after a line has been read.

## Bonus Features:

The project includes bonus features to handle multiple file descriptors simultaneously. The implementation is provided in `get_next_line_bonus.h` and `get_next_line_bonus.c`.

**Key Differences in Bonus:**

* Uses a 2D static array to maintain independent buffers for each file descriptor.
* Ensures each file descriptor operates concurrently without interference.
