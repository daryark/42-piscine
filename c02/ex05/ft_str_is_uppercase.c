/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyarkovs <dyarkovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 23:14:20 by dyarkovs          #+#    #+#             */
/*   Updated: 2023/10/04 12:01:51 by dyarkovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h> 

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i += 1;
	}
	return (1);
}

// int	main(void)
// {
// 	char	*str;
// 	int		res;

// 	str = "HYGBKGVK";
// 	res = ft_str_is_uppercase(str);
// 	printf("%d", res);
// 	return (0);
// }
