/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miovu <miovu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 18:10:06 by anmiguel          #+#    #+#             */
/*   Updated: 2024/08/17 19:50:06 by miovu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

/*
 * Function: print_row
 * -------------------
 * This function prints a single row of the rectangle.
 * The row starts with a specific character,
 * followed by a middle section of repeated characters, and ends 
 * with another specific character.
 * It outputs this row to the standard output (stdout).
 *
 * Parameters:
 *  - x: The width of the row (number of characters in the row).
 *  - start: The character used for the starting position of the row.
 *  - middle: The character used to fill the middle part of the row 
 * (between start and end).
 *  - end: The character used for the last position of the row.
 */

void	print_row(int x, char start, char middle, char end)
{
	int	j;

	j = 1;
	if (x > 0)
		ft_putchar(start);
	while (j < x - 1)
	{
		ft_putchar(middle);
		j++;
	}
	if (x > 1)
		ft_putchar(end);
	if (x > 0)
		ft_putchar('\n');
}

/*
 * Function: rush
 * --------------
 * This function generates and prints a rectangle of 
 * dimensions x (width) and y (height).
 * The first and last rows are bordered by specific characters, 
 * while the rows in between
 * are filled with a different set of characters. 
 * The 'print_row' function is used to handle
 * the actual printing of each row.
 *
 * Parameters:
 *  - x: The width of the rectangle (number of characters per row).
 *  - y: The height of the rectangle (number of rows).
 */

void	rush(int x, int y)
{
	int	i;

	if (y > 0)
		print_row(x, '/', '*', '\\');
	i = 1;
	while (i < y - 1)
	{
		print_row(x, '*', ' ', '*');
		i++;
	}
	if (y > 1)
		print_row(x, '\\', '*', '/');
}
