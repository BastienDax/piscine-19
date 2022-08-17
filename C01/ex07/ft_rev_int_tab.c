/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdaxhele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 12:31:54 by bdaxhele          #+#    #+#             */
/*   Updated: 2022/08/07 13:30:39 by bdaxhele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_rev_int_tab(int *tab, int size)
{
	int	tab_reverse;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		tab_reverse = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = tab_reverse;
		i++;
	}
}
