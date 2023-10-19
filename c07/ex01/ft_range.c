/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyarkovs <dyarkovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 10:07:57 by dyarkovs          #+#    #+#             */
/*   Updated: 2023/10/12 19:09:47 by dyarkovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*new;

	i = 0;
	if (min >= max)
		return (NULL);
	new = (int *)malloc(sizeof(int) * (max - min));
	if (!new)
		return (NULL);
	while (min < max)
	{
		new[i] = min;
		min++;
		i++;
	}
	return (new);
}

int	main(void)
{
	int	i;
	int	*range;
	int minimun;
	int maximum;

	minimun = 3;
	maximum = 5;

	range = (int *)malloc(sizeof(int) * (maximum - minimun));
	if (range == NULL)
		printf("Memory allocation failed\n");
	range = ft_range(maximum, minimun);
	
	i = 0;
	// printf("%p", range);
	// while (range[i])
	// {
	// 	printf("%d ", range[i]);
	// 	i++;
	// }
	
	// free(range);
	return (0);
}
