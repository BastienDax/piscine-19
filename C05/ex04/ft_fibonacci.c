/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bastos <bastos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 18:55:26 by bdaxhele          #+#    #+#             */
/*   Updated: 2022/08/17 13:55:49 by bastos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	if (index > 0)
		return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
	return (0);
}
/*
int main()
{
	printf("%d", ft_fibonacci(5));
}
*/