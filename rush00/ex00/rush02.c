/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdaxhele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 10:32:22 by bdaxhele          #+#    #+#             */
/*   Updated: 2022/08/07 10:36:36 by bdaxhele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c);

void	ft_first_last_line(char start, char middle, char end, int x)
{
	int	i;

	i = 1;
	ft_putchar(start);
	while (i < (x - 1))
	{
		ft_putchar(middle);
		i++;
	}
	if (x != 1)
	{
		ft_putchar(end);
	}
	ft_putchar('\n');
}

void	others_line(int x, int y)
{
	int	i;
	int	j;

	j = 1;
	while (j < (y - 1))
	{
		ft_putchar('B');
		i = 1;
		while (i < (x - 1))
		{
			ft_putchar(32);
			i++;
		}
		if (x != 1)
			ft_putchar('B');
		ft_putchar('\n');
		j++;
	}
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		ft_first_last_line('A', 'B', 'A', x);
		if (y != 1)
		{
			others_line(x, y);
			ft_first_last_line('C', 'B', 'C', x);
		}
	}
	else
	{
		write(1, "error", 5);
	}
}
