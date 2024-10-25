# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anmiguel <anmiguel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/25 14:15:05 by anmiguel          #+#    #+#              #
#    Updated: 2024/10/25 15:22:08 by anmiguel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables
NAME = ft_display_file
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = \
    srcs/ft_display_file.c \
    srcs/file_open.c \
    srcs/file_read.c \
    srcs/file_write.c \
    srcs/file_close.c
OBJS = $(SRCS:.c=.o)

# Compile all
all: $(NAME)

# Compile the binary
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

# Compile object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Remove object files
clean:
	rm -f $(OBJS)

# Remove object files and the binary
fclean: clean
	rm -f $(NAME)

# Recompile everything
re: fclean all