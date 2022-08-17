/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bastos <bastos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 18:16:30 by bastos            #+#    #+#             */
/*   Updated: 2022/08/17 21:51:56 by bastos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <string.h>
#include <stdio.h>
*/
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	len;

	if (min >= max)
		return (0);
	len = (max - 1) - min;
	tab = malloc(sizeof(int) * len);
	if (tab == NULL)
		return (0);
	while (min < (max - 1))
	{
		tab[min] = min;
		min++;
	}
	return (tab);
}
/*
int	main()
{
	int min = 10;
	int max = 69;
	ft_range(min, max);
}
*/