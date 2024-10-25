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

void	rush(int x, int y)
{
	int	i;

	if (y > 0)
		print_row(x, 'A', 'B', 'C');
	i = 1;
	while (i < y - 1)
	{
		print_row(x, 'B', ' ', 'B');
		i++;
	}
	if (y > 1)
		print_row(x, 'C', 'B', 'A');
}
