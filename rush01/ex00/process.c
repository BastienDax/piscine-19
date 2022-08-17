/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvray <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 17:52:07 by tvray             #+#    #+#             */
/*   Updated: 2022/08/14 17:52:11 by tvray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check(int board[16], int pos, int nbr[16]);
int	ft_strlen(char *str);

int	test_possible(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	if (ft_strlen(argv[1]) != 31)
		return (1);
	return (0);
}

int	is_double(int board[16], int pos, int num)
{
	int	i;

	i = (pos / 4) * 4;
	while (i < pos)
	{
		if (board[i] == num)
			return (1);
		i ++;
	}
	i = pos % 4;
	while (i < pos)
	{
		if (board[i] == num)
			return (1);
		i += 4;
	}
	return (0);
}

int	process(int board[16], int nbr[16], int pos)
{
	int	size;

	if (pos == 16)
		return (1);
	size = 0;
	while (++size <= 4)
	{
		if (is_double(board, pos, size) == 0)
		{
			board[pos] = size;
			if (check(board, pos, nbr) == 0)
			{
				if (process(board, nbr, pos + 1) == 1)
					return (1);
			}
		}
	}
	return (0);
}
