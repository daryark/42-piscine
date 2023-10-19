/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyarkovs <dyarkovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:11:59 by dyarkovs          #+#    #+#             */
/*   Updated: 2023/10/07 21:49:19 by dyarkovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 != *s2)
		return (*s1 - *s2);
	return (0);
}

// int	main(void)
// {
// 	char	*s1;
// 	char	*s2;

// 	s1 = "Hello";
// 	s2 = "Hello";
// 	printf("%d\n", ft_strcmp(s1, s2));
// 	s1 = "Hello";
// 	s2 = "Hel";
// 	printf("%d\n", ft_strcmp(s1, s2));
// 	s1 = "Hello";
// 	s2 = "Hello1";
// 	printf("%d\n", ft_strcmp(s1, s2));
// 	s1 = "";
// 	s2 = "";
// 	printf("%d\n", ft_strcmp(s1, s2));
// 	s1 = "b";
// 	s2 = "a";
// 	printf("%d\n", ft_strcmp(s1, s2));
// 	s1 = "ab";
// 	s2 = "acd";
// 	printf("%d\n", ft_strcmp(s1, s2));
// 	return (0);
// }
