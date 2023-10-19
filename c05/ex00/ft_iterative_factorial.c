/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyarkovs <dyarkovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 23:37:57 by dyarkovs          #+#    #+#             */
/*   Updated: 2023/10/11 00:29:18 by dyarkovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	f;

	f = 1;
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		f *= nb;
		nb--;
	}
	return (f);
}

// int	main(void)
// {
// 	printf("%d", ft_iterative_factorial(0));
// 	return (0);
// }
