/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvray <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 17:50:56 by tvray             #+#    #+#             */
/*   Updated: 2022/08/14 18:04:36 by tvray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	print_solution(int board[16]);
void	ft_putstr(char *str);
int		process(int board[16], int nbr[16], int pos);
int		test_possible(int argc, char **argv);

int	numbers(char *str, int *tab)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		if (str[2 * i] >= '1' && str[2 * i] <= '4')
			tab[i] = str[2 * i] - '0';
		else
		{
			ft_putstr("Error\n");
			return (0);
		}
		if (i < 15 && str[2 * i + 1] != ' ')
		{
			ft_putstr("Error\n");
			return (0);
		}
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	*board;
	int	*nbr;

	if (test_possible(argc, argv) == 1)
	{
		ft_putstr("Error\n");
		return (0);
	}
	board = malloc(sizeof(int) * 16);
	nbr = malloc(sizeof(int) * 16);
	if (numbers(argv[1], nbr))
	{
		if (process(board, nbr, 0) == 1)
			print_solution(board);
		else
			ft_putstr("Error\n");
	}
	free(nbr);
	free(board);
	return (0);
}
