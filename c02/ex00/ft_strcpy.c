/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyarkovs <dyarkovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 01:15:26 by dyarkovs          #+#    #+#             */
/*   Updated: 2023/10/06 09:55:06 by dyarkovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i += 1;
	}
	dest[i] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char	*str;
// 	char	copy[13];

// 	str = "Hello world!";
// 	ft_strcpy(copy, str);
// 	printf("%s\n->1: %p\n->2: %p\n", copy, (void *)str, (void *)copy);
// 	return (0);
// }
