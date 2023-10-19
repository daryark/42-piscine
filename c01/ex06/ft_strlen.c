/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyarkovs <dyarkovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 18:20:24 by dyarkovs          #+#    #+#             */
/*   Updated: 2023/09/29 01:41:58 by dyarkovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != 0)
		len += 1;
	return (len);
}

// int	main(void)
// {
// 	char	*str;
// 	char	length;

// 	str = "string length";
// 	length = ft_strlen(str);
// 	return (0);
// }
