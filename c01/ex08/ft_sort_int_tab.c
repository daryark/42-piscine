/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyarkovs <dyarkovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 05:18:15 by dyarkovs          #+#    #+#             */
/*   Updated: 2023/09/29 12:03:16 by dyarkovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	swap;
	int	count;

	count = 0;
	while (count < (size - 1))
	{
		if (tab[count] > tab[count + 1])
		{
			swap = tab[count];
			tab[count] = tab[count + 1];
			tab[count + 1] = swap;
			count = 0;
		}
		else
		{
			count += 1;
		}
	}
}

// int	main(void)
// {
// 	int	tab[4];
// 	int	s;
// 	int	length;

// 	s = 0;
// 	length = 4;
// 	while (tab[s] < length)
// 	{
// 		tab[s] = (length - s);
// 		s += 1;
// 	}
// 	ft_sort_int_tab(tab, length);
// 	return (0);
// }
//
//
// void	ft_sort_int_tab(int *tab, int size)
// {
// 	int	swap_box;
// 	int	current;
// 	int	loop;
// 	int	changes;

// 	swap_box = 0;
// 	loop = 1;
// 	while (loop < size)
// 	{
// 		current = 0;
// 		if (changes == 0 && loop > 1)
// 			return ;
// 		changes = 0;
// 		while (current < (size - 1))
// 		{
// 			if (*(tab + current) > *(tab + (current + 1)))
// 			{
// 				swap_box = *(tab + current);
// 				*(tab + current) = *(tab + (current + 1));
// 				*(tab + (current + 1)) = swap_box;
// 				changes += 1;
// 			}
// 			current += 1;
// 		}
// 		loop += 1;	
// 	}
// }
//