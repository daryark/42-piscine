/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyarkovs <dyarkovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:52:47 by dyarkovs          #+#    #+#             */
/*   Updated: 2023/10/11 00:41:34 by dyarkovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	pow_num;

	pow_num = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power--)
		pow_num *= nb;
	return (pow_num);
}

// int	main(void)
// {
// 	printf("%d", ft_iterative_power(0, 0));
// 	return (0);
// }
