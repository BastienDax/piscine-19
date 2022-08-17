/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bastos <bastos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 17:10:50 by bdaxhele          #+#    #+#             */
/*   Updated: 2022/08/16 17:13:22 by bastos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_atoi(char *str)
{
	int	neg;
	int	rep;

	neg = 1;
	rep = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
	{
		str++;
	}
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			neg = neg * -1;
		}
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		rep = rep * 10 + *str - 48;
		str++;
	}
	return (rep * neg);
}
/*
int main()
{
	char str[] = "   -+--+--+1234ab567";
	int rep;

	rep = ft_atoi(str);

	printf("%d", rep);
}
*/