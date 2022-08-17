/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bastos <bastos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 13:34:57 by bastos            #+#    #+#             */
/*   Updated: 2022/08/18 01:19:47 by bastos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <unistd.h>

bool	is_possible(int board[][10], int at_x, int at_y)
{
	int	x;
	int	y;
	int	offsets[2];

	offsets[0] = at_y - at_x;
	offsets[1] = at_y + at_x;
	x = 0;
	while (x < 10)
	{
		y = 0;
		while (y < 10)
		{
			if (x == at_x || y == at_y
				|| y == x + offsets[0] || y == -x + offsets[1])
				if (board[y][x])
					return (true);
			y++;
		}
		x++;
	}
	return (false);
}

void	clear_column(int board[][10], int x)
{
	int	i;

	i = 0;
	while (i < 10)
	{
		board[i++][x] = false;
	}
}

void	print_position(int board[][10])
{
	int	y;
	int	column;

	y = 0;
	while (y < 10)
	{
		column = 0;
		while (column < 10)
		{
			if (board[y][column])
			{
				write(1, &"0123456789"[column], 1);
				break ;
			}
			column++;
		}
		y++;
	}
	write(1, "\n", 1);
}

bool	find_process(int board[][10], int x, int *process)
{
	int	y;

	if (x >= 10)
		return (true);
	y = 0;
	while (y < 10)
	{
		if (!is_possible(board, x, y))
		{
			board[y][x] = true;
			if (find_process(board, x + 1, process))
			{
				*process += 1;
				print_position(board);
			}
			board[y][x] = false;
		}
		y++;
	}
	return (false);
}

int	ft_ten_queens_puzzle(void)
{
	int	process;
	int	board[10][10];
	int	column;

	process = 0;
	column = 0;
	while (column++ < 10)
		clear_column(board, column - 1);
	find_process(board, 0, &process);
	return (process);
}
/*
int		main(void)
{
	ft_ten_queens_puzzle();
}*/