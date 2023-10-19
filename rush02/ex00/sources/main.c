/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyarkovs <dyarkovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 14:25:21 by svalchuk          #+#    #+#             */
/*   Updated: 2023/10/10 03:07:04 by dyarkovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_get_dec(int nb)
{
	if (nb >= 90)
		return (90);
	else if (nb >= 80)
		return (80);
	else if (nb >= 70)
		return (70);
	else if (nb >= 60)
		return (60);
	else if (nb >= 50)
		return (50);
	else if (nb >= 40)
		return (40);
	else if (nb >= 30)
		return (30);
	else if (nb >= 20)
		return (20);
	else if (nb <= 20)
		return (nb);
	else
		return (0);
}

int	ft_get_mult(int nb)
{
	if (nb >= 1000000000)
		return (1000000000);
	else if (nb >= 1000000)
		return (1000000);
	else if (nb >= 1000)
		return (1000);
	else if (nb >= 100)
		return (100);
	else
		return (ft_get_dec(nb));
}

void	ft_print(int n, t_list *tab, int *first)
{
	int	i;
	int	mult;

	i = 0;
	mult = ft_get_mult(n);
	if (mult >= 100)
		ft_print(n / mult, tab, first);
	if (*first == 0)
		write(1, " ", 1);
	*first = 0;
	while (tab[i].nb != mult) //search for int in dict
		i++;
	ft_putstr(tab[i].val);
	if (mult != 0 && n % mult != 0)
		ft_print(n % mult, tab, first);
}

//if not a number or lower than zero, return 1 - have an error;
int	ft_error(char **argv)
{
	int	i;

	if (ft_atoi(argv[1]) < 0)
	{
		return (1);
	}
	i = 0;
	while (argv[1][i])
	{
		if (argv[1][i] < 48 || argv[1][i] > 57)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	t_list	*tab;
	int		*first;
	int		addr_first;

	addr_first = 1;
	first = &addr_first;
	if (argc == 2)
	{
		if (ft_error(argv))
		{
			write(1, "Error\n", 6);
			return (0);
		}
		tab = ft_process("numbers.dict");
		ft_print(ft_atoi(argv[1]), tab, first);
		ft_putchar('\n');
	}
	return (0);
}
