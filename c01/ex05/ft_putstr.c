/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyarkovs <dyarkovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:24:56 by dyarkovs          #+#    #+#             */
/*   Updated: 2023/09/29 10:52:48 by dyarkovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while ((str[i]) != '\0')
	{
		write(1, &str[i], 1);
		i += 1;
	}
}

// int	main(void)
// {
// 	char	*i;

// 	i = "Hello World\n";
// 	ft_putstr(i);
// 	return (0);
// }
