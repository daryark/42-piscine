/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyarkovs <dyarkovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:56:42 by dyarkovs          #+#    #+#             */
/*   Updated: 2023/10/06 11:18:29 by dyarkovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	*hex;

	i = 0;
	hex = "0123456789abcdef";
	while (str[i])
	{
		if (str[i] < 32 || str[i] == 127)
		{
			write(1, "\\", 2);
			write(1, &hex[str[i] / 16], 1);
			write(1, &hex[str[i] % 16], 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}

// int	main(void)
// {
// 	char	*str;

// 	str = "Coucou\ntu vas ? \t = 09, \n = 0a, \v = 0b";
// 	ft_putstr_non_printable(str);
// 	return (0);
// }
