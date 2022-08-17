/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bastos <bastos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 14:45:37 by bastos            #+#    #+#             */
/*   Updated: 2022/08/17 21:43:53 by bastos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <string.h>
#include <stdio.h>
*/
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*s1;

	len = ft_strlen(src) + 1;
	s1 = malloc(sizeof(char) * len);
	if (s1 == NULL)
		return (0);
	i = 0;
	while (src[i] != '\0')
	{
		s1[i] = src[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
/*
int	main()
{
	char *s1 = "Salut";
	printf("%s", strdup(s1));
	printf("\n");
	printf("%s", ft_strdup(s1));
}
*/