/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bastos <bastos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 08:57:50 by bdaxhele          #+#    #+#             */
/*   Updated: 2022/08/18 00:53:19 by bastos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_process(int nbr, char *base, int len)
{
	if (nbr == -2147483648)
	{
		ft_process(nbr / len, base, len);
		ft_putchar(base[-(nbr % len)]);
		return ;
	}
	if (nbr < 0)
	{
		ft_putchar('-');
		ft_process(-nbr, base, len);
		return ;
	}
	if (nbr > len - 1)
		ft_process(nbr / len, base, len);
	ft_putchar(base[nbr % len]);
}

int	ft_check_base_error(char *str)
{
	int		i;
	int		j;
	char	*string;

	i = 0;
	string = str;
	if (!str)
		return (0);
	if (str[0] == '\0' || ft_strlen(str) <= 1)
		return (0);
	while (*string)
	{
		if (*string == '+' || *string == '-')
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

void	ft_putnbr_base(int nbr, char *base)
{
	int	len;

	if (!ft_check_base_error(base))
		return ;
	len = ft_strlen(base);
	ft_process(nbr, base, len);
}
/*
int main()
{
	ft_putnbr_base(-2147483648, "r");
	printf("\n");
	ft_putnbr_base(100, "0\a23456789");
	printf("\n");
	ft_putnbr_base(-2147483648, "0123456789");
	printf("\n");
	ft_putnbr_base(-2147483648, "0123456789abcdef");
}
*/