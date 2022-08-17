/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdaxhele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 07:40:38 by bdaxhele          #+#    #+#             */
/*   Updated: 2022/08/04 17:01:15 by bdaxhele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	nb1;
	char	nb2;
	char	nb3;

	nb1 = '/';
	while (++nb1 <= '9')
	{
		nb2 = nb1;
		while (++nb2 <= '9')
		{
			nb3 = nb2;
			while (++nb3 <= '9')
			{
				ft_putchar(nb1);
				ft_putchar(nb2);
				ft_putchar(nb3);
				if (nb1 != '7')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}
