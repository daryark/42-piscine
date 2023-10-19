/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyarkovs <dyarkovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 18:57:12 by dyarkovs          #+#    #+#             */
/*   Updated: 2023/09/24 13:14:36 by dyarkovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	res;

	res = 'P';
	if (n < 0)
	{
		res = 'N';
	}
	write(1, &res, 1);
}

// int	main(void)
// {
// 	ft_is_negative(0);
// 	return (0);
// }