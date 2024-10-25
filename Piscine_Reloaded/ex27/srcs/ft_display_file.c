/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmiguel <anmiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 14:17:42 by anmiguel          #+#    #+#             */
/*   Updated: 2024/10/25 15:41:46 by anmiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int		open_file(const char *filename);
ssize_t	read_file(int fd, char *buffer, size_t size);
void	write_output(const char *buffer, ssize_t size);
void	close_file(int fd);
void	print_error(const char *msg);
int		check_arguments(int argc);
void	read_and_display_file(int fd);

int	main(int argc, char **argv)
{
	int		fd;

	if (check_arguments(argc) != 0)
		return (1);
	fd = open_file(argv[1]);
	if (fd == -1)
	{
		print_error("Cannot read file.\n");
		return (1);
	}
	read_and_display_file(fd);
	close_file(fd);
	return (0);
}

void	read_and_display_file(int fd)
{
	char	buffer[1024];
	ssize_t	bytes_read;

	while (1)
	{
		bytes_read = read_file(fd, buffer, sizeof(buffer));
		if (bytes_read <= 0)
			break ;
		write_output(buffer, bytes_read);
	}
	if (bytes_read == -1)
		print_error("Cannot read file.\n");
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

// Function to print error messages
void	print_error(const char *msg)
{
	write(2, msg, ft_strlen((char *)msg));
}

// Function to check arguments
int	check_arguments(int argc)
{
	if (argc == 1)
	{
		print_error("File name missing.\n");
		return (1);
	}
	if (argc > 2)
	{
		print_error("Too many arguments.\n");
		return (1);
	}
	return (0);
}
