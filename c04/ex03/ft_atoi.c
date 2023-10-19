/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyarkovs <dyarkovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 12:38:39 by dyarkovs          #+#    #+#             */
/*   Updated: 2023/10/10 01:00:22 by dyarkovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_atoi(char *str)
{
	int	sign;
	int	nb;

	sign = 1;
	nb = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str && (*str == '+' || *str == '-'))
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		if (!nb)
			nb += (*str - '0');
		else
			nb = nb * 10 + (*str - '0');
		str++;
	}
	return (nb * sign);
}

// int	main(int argc, char **argv)
// {
// 	if (argc == 2)
// 		printf("%d", ft_atoi(argv[1]));
// 	return (0);
// }
