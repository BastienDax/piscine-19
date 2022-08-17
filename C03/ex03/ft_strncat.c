/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdaxhele <bdaxhele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 21:30:00 by bdaxhele          #+#    #+#             */
/*   Updated: 2022/08/12 12:24:49 by bdaxhele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	c;

	i = 0;
	c = 0;
	while (dest[c] != '\0')
		c++;
	while ((src[i] != '\0') && (i < nb))
	{
		dest[c + i] = src[i];
		i++;
	}
	dest[c + i] = '\0';
	return (dest);
}

/*
int main()
{
	char s1[] = "Hello";
	char s2[] = "World !";
 
	printf("%s", ft_strncat(s1, s2, 13));
}
*/