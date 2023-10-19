/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyarkovs <dyarkovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:38:51 by dyarkovs          #+#    #+#             */
/*   Updated: 2023/10/12 11:07:09 by dyarkovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

int	ft_error_handle(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!base[0] || !base[1])
		return (1);
	while (base[i])
	{
		j = i + 1;
		if (base[i] == 43 || base[i] == 45)
			return (1);
		if (base[i] < 32 || base[i] > 126)
			return (1);
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_write_base_nbr(int nbr, char *base)
{
	int		i;
	long	nb;

	i = 0;
	nb = nbr;
	while (base[i])
		i++;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb < i)
	{
		write(1, &base[nb], 1);
	}
	else
	{
		ft_write_base_nbr((nb / i), base);
		ft_write_base_nbr((nb % i), base);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	nb;

	nb = nbr;
	if (ft_error_handle(base))
		return ;
	ft_write_base_nbr(nb, base);
}

// int	main(void)
// {
// 	ft_putnbr_base(-4345, "0123456789abcdef");
// 	return (0);
//}
