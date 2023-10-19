/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyarkovs <dyarkovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 10:29:17 by dyarkovs          #+#    #+#             */
/*   Updated: 2023/10/07 11:25:40 by dyarkovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*temp;

	temp = dest;
	while (*temp)
		temp++;
	while (*src && nb)
	{
		*temp = *src;
		temp++;
		src++;
		nb--;
	}
	*temp = '\0';
	return (dest);
}

// int	main(int argc, char **argv)
// {
// 	if (argc == 3)
// 		printf("%s", ft_strncat(argv[1], argv[2], 5));
// 	return (0);
// }
