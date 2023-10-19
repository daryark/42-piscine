/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyarkovs <dyarkovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 01:41:50 by dyarkovs          #+#    #+#             */
/*   Updated: 2023/09/30 17:45:52 by dyarkovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end;
	int	temp;

	start = 0;
	end = (size - 1);
	while (start < end)
	{
		temp = *(tab + start);
		*(tab + start) = *(tab + end);
		*(tab + end) = temp;
		start += 1;
		end -= 1;
	}
}

// int	main(void)
// {
// 	int	arr[7];
// 	int	i;

// 	i = 0;
// 	while (i < 7)
// 	{
// 		arr[i] = i;
// 		i += 1;
// 	}
// 	ft_rev_int_tab(&arr[0], 7);
// 	return (0);
// }
