/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyarkovs <dyarkovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 22:45:29 by dyarkovs          #+#    #+#             */
/*   Updated: 2023/10/04 12:01:56 by dyarkovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h> 

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i += 1;
	}
	return (1);
}

// int	main(void)
// {
// 	char	*str;
// 	int		res;

// 	str = "dsfaklik";
// 	res = ft_str_is_lowercase(str);
// 	printf("%d", res);
// 	return (0);
// }
