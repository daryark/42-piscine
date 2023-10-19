/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyarkovs <dyarkovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:17:07 by dyarkovs          #+#    #+#             */
/*   Updated: 2023/10/12 03:03:46 by dyarkovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}

void	ft_sort_arr(int argc, char **argv)
{
	int		i;
	char	*swap_box;

	i = 1;
	while (i < argc)
	{
		while (i < (argc - 1))
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				swap_box = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = swap_box;
			}
			i++;
		}
		i = 1;
		argc--;
	}
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_print_strarr(char **arr)
{
	int	i;

	i = 1;
	while (arr[i])
	{
		ft_putstr(arr[i]);
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	ft_sort_arr(argc, argv);
	ft_print_strarr(argv);
	return (0);
}
