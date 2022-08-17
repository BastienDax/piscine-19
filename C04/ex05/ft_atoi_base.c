/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bastos <bastos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 12:10:13 by bdaxhele          #+#    #+#             */
/*   Updated: 2022/08/16 17:07:56 by bastos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_check_space(char c)
{
	return (c == '\t' || c == '\n' || c == '\v' || c == '\f'
		|| c == '\r' || c == ' ');
}

int	ft_check_base_error(char *str)
{
	int		i;
	int		j;
	char	*string;

	i = 0;
	string = str;
	if (str[0] == '\0' || str[1] == 1)
		return (0);
	while (*string)
	{
		if (ft_check_space(*string) || *string == '+' || *string == '-')
			return (0);
		string++;
	}
	while (i < string - str)
	{
		j = i + 1;
		while (j < string - str)
			if (str[i] == str[j++])
				return (0);
		i++;
	}
	return (1);
}

int	process_base(char *base, char str)
{
	int		i;

	i = 0;
	while (base[i])
	{
		if (base[i] == str)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	neg;
	int	rep;
	int	len;

	neg = 1;
	rep = 0;
	if (!ft_check_base_error(base))
		return (0);
	len = ft_strlen(base);
	while (ft_check_space(*str))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			neg = neg * -1;
		str++;
	}
	while (process_base(base, *str) != -1)
	{
		rep = rep * len;
		rep = rep + process_base(base, *str);
		str++;
	}
	return (rep * neg);
}
/*
int	main(void)
{
	printf("%d\n", ft_atoi_base("-123456", "0123456789"));
	fflush(stdout);
	printf("%d\n", ft_atoi_base("11110001001000000", "01"));
	fflush(stdout);
	printf("%d\n", ft_atoi_base("-1e240", "0123456789abcdef"));
	fflush(stdout);
}
*/