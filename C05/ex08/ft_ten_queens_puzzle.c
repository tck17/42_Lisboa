/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmiguel <anmiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:50:12 by anmiguel          #+#    #+#             */
/*   Updated: 2024/09/02 15:50:46 by anmiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*

This function checks if placing a queen at a specific position 
violates the constraints of the puzzle.

Parameters:
- col: The current column in the board where we want to place a queen.

- board[]: Array representing the positions of queens on the board,
where board[i] gives the row position of the queen in column i.


board[col] == board[i]: Checks if the queen in column col is in 
the same row as the queen in column i (same row conflict).

col - i == tmp: Checks if the queens are on the same diagonal. 
col - i gives the diagonal difference and tmp is the absolute 
row difference. If they are equal, it means the queens are on 
the same diagonal.

*/

int	ft_cons(int col, int board[])
{
	int	i;
	int	tmp;

	i = 0;
	while (i < col)
	{
		tmp = board[col] - board[i];
		if (tmp < 0)
			tmp = tmp * -1;
		if (board[col] == board[i] || col - i == tmp)
			return (0);
		i++;
	}
	return (1);
}

/*

This function prints the current solution to the standard output.

Parameters:
-board[]: Array representing the current solution.

Convert each integer to ascii representation for write usage

*/

void	board_print(int board[])
{
	int		i;
	char	c;

	i = 0;
	while (i < 10)
	{
		c = board[i] + 48;
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}

/*

This is the recursive function that tries to place queens on 
the board using backtracking.

Parameters:
- col: The current column where we want to place a queen.
- count: A pointer to the count of solutions found.
board[]: Array representing the current configuration of the board.

If col == 10, all 10 queens are placed. The function prints the 
board and increments the solution count (*count).
Otherwise, it tries placing a queen in every row of column col 
and recursively attempts to place queens in the next column (col + 1).
Calls ft_cons to ensure no conflicts before placing a queen in the next column.

*/

void	is_queen(int col, int *count, int board[])
{
	int	i;

	i = 0;
	if (col == 10)
	{
		*count = *count + 1;
		board_print(board);
		return ;
	}
	while (i < 10)
	{
		board[col] = i;
		if (ft_cons(col, board))
			is_queen(col + 1, count, board);
		i++;
	}
}

/*

This function initializes the board and starts the process of 
solving the puzzle.

Initializes the board and the solution count.
Calls is_queen to start solving the puzzle from the first column.
Returns the total number of valid solutions found.

*/

int	ft_ten_queens_puzzle(void)
{
	int	count;
	int	i;
	int	board[10];

	count = 0;
	i = 0;
	while (i < 10)
		board[i++] = 0;
	is_queen(0, &count, board);
	return (count);
}

/*
int main(void)
{
	ft_ten_queens_puzzle();
	return (0);
}
*/