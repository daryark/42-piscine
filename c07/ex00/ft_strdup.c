/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyarkovs <dyarkovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 03:22:32 by dyarkovs          #+#    #+#             */
/*   Updated: 2023/10/12 18:49:24 by dyarkovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>
// #include <string.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*new;

	len = 0;
	while (src[len])
		len++;
	new = (char *)malloc(sizeof(char) * (len + 1));
	if (!new)
		return (NULL);
	i = 0;
	while (i < len)
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

// int	main(void)
// {
// 	char	*s;

// 	s = "leng";
// 	printf("start: %p\n", s);
// 	printf("ft: %p\n", ft_strdup(s));
// 	printf("native: %p\n", strdup(s));
// 	printf("%s\n", ft_strdup(s));
// 	printf("%s\n", strdup(s));
// 	return (0);
// }
