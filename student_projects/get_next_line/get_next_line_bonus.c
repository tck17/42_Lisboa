/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmiguel <anmiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 13:33:55 by anmiguel          #+#    #+#             */
/*   Updated: 2024/11/30 14:06:05 by anmiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

ssize_t	ft_linelen(char *s, char terminator);
char	*ft_join_buffer(char *s1, char *s2);

char	*get_next_line(int fd)
{
	int			bytes_read;
	static char	buffer[FOPEN_MAX][BUFFER_SIZE + 1];
	char		*line;	

	line = NULL;
	bytes_read = 1;
	while (fd >= 0 && fd < FOPEN_MAX && BUFFER_SIZE > 0 && bytes_read > 0)
	{
		if (buffer[fd][0])
		{
			line = ft_join_buffer(line, buffer[fd]);
			if (!line)
				return (NULL);
			if (line[ft_linelen(line, '\n') - 1] == '\n')
				break ;
		}
		else
		{
			bytes_read = read(fd, buffer[fd], BUFFER_SIZE);
			if (bytes_read < 0)
				return (free(line), NULL);
			buffer[fd][bytes_read] = '\0';
		}
	}
	return (line);
}

/*

int	main(void)
{
	char	*line;

	write(1, "Enter a line: ", 15);
	line = get_next_line(0); // File descriptor 0 corresponds to stdin
	if (line)
	{
		printf("Read line: %s", line);
		free(line);
	}
	else
	{
		printf("No line read or error occurred.\n");
	}
	return (0);
}

*/

/*

int	main(void)
{
	int		fd;
	char	*line;
	int		i = 1;
	int		max_lines = 10; // Number of lines to read

	fd = open("test_file.txt", O_RDONLY);
	if (fd < 0)
	{
		perror("Error opening file");
		return (1);
	}
	while (i <= max_lines)
	{
		line = get_next_line(fd);
		if (!line)
			break;
		printf("Line %d: %s", i, line);
		free(line);
		i++;
	}
	close(fd);
	return (0);
}

*/

// Reading a File with Many File Descriptors

/*

int	main(void)
{
	int		fd1, fd2;
	char	*line1, *line2;

	fd1 = open("text.txt", O_RDONLY);
	fd2 = open("text1.txt", O_RDONLY);
	if (fd1 < 0 || fd2 < 0)
	{
		perror("Error opening files");
		return (1);
	}

	while (1)
	{
		line1 = get_next_line(fd1);
		line2 = get_next_line(fd2);
		if (!line1 && !line2)
			break;
		if (line1)
		{
			printf("File1: %s", line1);
			free(line1);
		}
		if (line2)
		{
			printf("File2: %s", line2);
			free(line2);
		}
	}
	close(fd1);
	close(fd2);
	return (0);
}

*/

/*

int	main(void)
{
	int		fd;
	char	*line;

	fd = open("text1.txt", O_RDONLY);
	if (fd < 0)
	{
		perror("Error opening file");
		return (1);
	}
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("%s", line);
		free(line);
	}
	close(fd);
	return (0);
}

*/