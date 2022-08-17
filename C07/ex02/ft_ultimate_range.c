/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bastos <bastos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 21:45:37 by bastos            #+#    #+#             */
/*   Updated: 2022/08/17 22:20:55 by bastos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <string.h>
#include <stdio.h>
*/
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	i;
	int	*tab;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	len = (max - 1) - min;
	tab = malloc(sizeof(int) * len);
	if (tab == NULL)
	{
		*range = 0;
		return (-1);
	}
	*range = tab;
	i = 0;
	while (i <= len)
	{
		tab[i] = min + i;
		i++;
	}
	return (len);
}
/*
int	main()
{
	int *range;
	int min = 10;
	int max = 69;
	ft_ultimate_range(&range, min, max);
}
*/