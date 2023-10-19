/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyarkovs <dyarkovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 23:16:34 by dyarkovs          #+#    #+#             */
/*   Updated: 2023/10/05 15:06:53 by dyarkovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h> 

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (!(*str >= 32 && *str <= 126))
			return (0);
		str++;
	}
	return (1);
}

// int	main(void)
// {
// 	char	*str;
// 	int		res;

// 	str = "dgfer54665$3#$";
// 	res = ft_str_is_printable(str);
// 	printf("%d", res);
// 	return (0);
// }
