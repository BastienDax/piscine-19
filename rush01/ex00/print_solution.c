/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_solution.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvray <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 17:51:29 by tvray             #+#    #+#             */
/*   Updated: 2022/08/14 17:51:32 by tvray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb);
void	ft_putchar(char c);

void	print_solution(int tab[16])
{
	int	i;

	i = -1;
	while (++i < 16)
	{
		ft_putnbr(tab[i]);
		if (i % 4 != 3)
			ft_putchar(' ');
		else
			ft_putchar('\n');
	}
}
