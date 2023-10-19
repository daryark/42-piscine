/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyarkovs <dyarkovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 23:09:23 by dyarkovs          #+#    #+#             */
/*   Updated: 2023/10/12 18:28:46 by dyarkovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	else if (nb <= 3)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0 || (nb % 5 == 0 && nb != 5))
		return (0);
	i = 2;
	while (i * i <= nb && i <= 46340)
	{
		if (nb % i == 0)
			return (0);
		++i;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 0)
		nb = 2;
	while (ft_is_prime(nb) == 0)
		nb++;
	return (nb);
}

// int	main(void)
// {
// 	printf("%d", ft_find_next_prime(769));
// 	return (0);
// }
