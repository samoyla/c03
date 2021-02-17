/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 12:55:17 by msamoile          #+#    #+#             */
/*   Updated: 2021/02/17 13:03:33 by msamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int n;

	i = 0;
	while (dest[i])
		i++;
	n = 0;
	while (src[n] && n < nb)
	{
		dest[i + n] = src[n];
		n++;
	}
	dest[i + n] = '\0';
	return (dest);
}

#include <stdio.h>

int	main()
{
	char src[] = "long, bitch";
	char dest[100] = "J'avoue, ca commence a etre ";

	printf("%s", ft_strncat(dest, src, 5));
	return (0);
}
