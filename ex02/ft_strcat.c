/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 14:53:44 by msamoile          #+#    #+#             */
/*   Updated: 2021/02/16 15:56:27 by msamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int n;

	i = 0;
	while ( dest[i])
		i++;
	n = 0;
	while (src[n])
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
	char src[] = "moto";
	char dest[] = "hello ";

	printf("%s\n", ft_strcat(dest, src));
	return (0);
}
