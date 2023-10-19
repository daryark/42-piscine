/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyarkovs <dyarkovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 14:21:29 by dyarkovs          #+#    #+#             */
/*   Updated: 2023/09/24 21:24:35 by dyarkovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);

// int string_to_char(char *str)
// {

// }

int	main(int total_num, char arr[])
{
	int x;
	int y;

	x = arr[1] - '0';
	y = arr[2] - '1';
	rush(x, y);
	return (0);
}
