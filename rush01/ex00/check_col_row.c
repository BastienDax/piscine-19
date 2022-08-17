/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_col_row.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvray <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 17:51:10 by tvray             #+#    #+#             */
/*   Updated: 2022/08/14 17:51:12 by tvray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_colup(int board[16], int pos, int nbr[16])
{
	int	i;
	int	max;
	int	count;

	i = pos % 4;
	max = 0;
	count = 0;
	if ((pos / 4) == 3)
	{
		while (i <= pos)
		{
			if (board[i] > max)
			{
				max = board[i];
				count++;
			}
			i += 4;
		}
		if (nbr[pos % 4] != count)
			return (1);
	}
	return (0);
}

int	check_rowright(int board[16], int pos, int nbr[16])
{
	int	i;
	int	max_size;
	int	nbr_tower;

	i = (pos / 4) * 4 + 3;
	max_size = 0;
	nbr_tower = 0;
	if (pos % 4 == 3)
	{
		while (i >= (pos / 4) * 4)
		{
			if (board[i] > max_size)
			{
				max_size = board[i];
				nbr_tower++;
			}
			i --;
		}
		if (nbr[12 + pos / 4] != nbr_tower)
			return (1);
	}
	return (0);
}

int	check_coldown(int board[16], int pos, int nbr[16])
{
	int	i;
	int	max;
	int	count;

	i = pos;
	max = 0;
	count = 0;
	if (pos / 4 == 3)
	{
		while (i >= 0)
		{
			if (board[i] > max)
			{
				max = board[i];
				count++;
			}
			i -= 4;
		}
		if (nbr[4 + pos % 4] != count)
			return (1);
	}
	return (0);
}

int	check_rowleft(int board[16], int pos, int nbr[16])
{
	int	i;
	int	max;
	int	count;

	i = (pos / 4) * 4;
	max = 0;
	count = 0;
	if (pos % 4 == 3)
	{
		while (i <= pos)
		{
			if (board[i] > max)
			{
				max = board[i];
				count++;
			}
			i ++;
		}
		if (nbr[8 + pos / 4] != count)
			return (1);
	}
	return (0);
}

int	check(int board[16], int pos, int nbr[16])
{
	if (check_rowleft(board, pos, nbr) == 1)
		return (1);
	if (check_rowright(board, pos, nbr) == 1)
		return (1);
	if (check_coldown(board, pos, nbr) == 1)
		return (1);
	if (check_colup(board, pos, nbr) == 1)
		return (1);
	return (0);
}
