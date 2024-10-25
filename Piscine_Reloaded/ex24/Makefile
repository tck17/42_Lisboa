NAME = libft.a
# Source files from the "srcs" directory
SOURCES = \
    srcs/ft_putchar.c \
    srcs/ft_putstr.c \
    srcs/ft_strcmp.c \
    srcs/ft_strlen.c \
    srcs/ft_swap.c

# Object files corresponding to the source files
OBJECTS = $(SOURCES:.c=.o)

# Header files in the "includes" directory
INCLUDES = -I includes

CC = cc
CFLAGS = -Wall -Wextra -Werror $(INCLUDES)
AR = ar

# Default target
all: $(NAME)

# Create the library
$(NAME): $(OBJECTS)
	$(AR) -r $@ $?

# Rule to compile .c files to .o files
%.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@

# Clean object files
clean:
	rm -f $(OBJECTS)

# Clean and remove the library
fclean: clean
	rm -f $(NAME)

# Rebuild everything
re: fclean all

.PHONY: all clean fclean re