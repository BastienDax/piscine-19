/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bastos <bastos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 21:59:30 by bastos            #+#    #+#             */
/*   Updated: 2022/08/17 11:45:09 by bastos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;
	int	rep;

	i = 1;
	rep = 0;
	if (nb == 0 || nb == 1)
		return (0);
	while (i <= nb)
	{
		if (nb % i == 0)
			rep++;
		i++;
	}
	if (rep == 2)
		return (1);
	return (0);
}
/*
int	main()
{
	printf("%d", ft_is_prime(21403445213));
}
*/