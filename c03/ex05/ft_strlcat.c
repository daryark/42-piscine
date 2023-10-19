/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyarkovs <dyarkovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 16:23:02 by dyarkovs          #+#    #+#             */
/*   Updated: 2023/10/07 21:48:58 by dyarkovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	dest_len;
	unsigned int	i;

	src_len = 0;
	dest_len = 0;
	i = 0;
	while (src[src_len])
		src_len++;
	if (size == 0)
		return (src_len);
	while (dest[dest_len])
		dest_len++;
	if (size <= dest_len)
		return (src_len + size);
	while (size && (size - dest_len) && src[i])
	{
		dest[dest_len + i] = src[i];
		i++;
		size--;
	}
	dest[dest_len + i] = '\0';
	return (src_len + dest_len);
}

// int	main(void)
// {
// 	printf("%lu", strlcat(dest, src, 4));
// 	return (0);
// }
