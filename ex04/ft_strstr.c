/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 13:04:43 by msamoile          #+#    #+#             */
/*   Updated: 2021/02/18 10:12:03 by msamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int n;

	if (*to_find == '\0')
		return (str);
	i = 0;
	while (str[i])
	{
		n = 0;
		while (to_find[n] == str[i + n])
		{
			if (to_find[n + 1] == '\0')
			{
				return (&str[i]);
			}
			n++;
		}
		i++;
	}
	return (0);
}

#include <stdio.h>

int	main()
{
	char to_find[] = "so";
	char src[] = "i am so fucking tired";

	printf("%s", ft_strstr(src, to_find));
	return (0);
}
