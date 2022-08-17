/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bastos <bastos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 18:01:03 by bdaxhele          #+#    #+#             */
/*   Updated: 2022/08/17 13:40:24 by bastos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	rep;

	rep = 1;
	while (nb > 0)
	{
		rep *= nb;
		nb--;
	}
	if (nb < 0)
		return (0);
	return (rep);
}
/*
int main()
{
	printf("%d", ft_iterative_factorial(1));
}
*/