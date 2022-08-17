/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdaxhele <bdaxhele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 18:17:14 by bdaxhele          #+#    #+#             */
/*   Updated: 2022/08/11 18:45:23 by bdaxhele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	rep;

	rep = 1;
	if (nb > 0)
	{
		rep *= nb * ft_recursive_factorial(nb - 1);
		nb--;
	}
	if (nb < 0)
		return (0);
	return (rep);
}

/*
int main()
{
	printf("%d", ft_recursive_factorial(4));
}
*/