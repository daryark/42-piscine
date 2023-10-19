/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyarkovs <dyarkovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 13:19:59 by dyarkovs          #+#    #+#             */
/*   Updated: 2023/09/23 21:01:28 by dyarkovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// #include "rush04.c"

// #include <stdio.h>

void rush(int x, int y);

// int main(int nb, char **args)
int main(void)
{
    // for(int i = 1; i < nb; i++){
    //     printf("Args: %s\n\n", args[i]);
    // }

    rush(1, 1);
	return (0);
}
///

#include "ft_putchar.c"

// void ft_putchar(char c);

void rush(int x, int y)
{
	int col;
	int ch;

	col = 1; //y
	ch = 1; //x

	while(x >= ch & y >= col)
	{
		// if(x == 1 || y == 1) 
		// {

		// }

		if (col == 1 && ch == 1 || y - col == 0 && x - ch == 0) ft_putchar('A');
		else if (col == 1 && x - ch == 0 || y - col == 0 && ch == 1) ft_putchar('C');
		else if (col == 1 || ch == 1 || y - col == 0 || x - ch == 0) ft_putchar('B');
		else ft_putchar(' ');

		if (ch == x)
		{
			ch = 1;
			col += 1;
			ft_putchar('\n');
		}
		else ch += 1;
	}
}
///

void	choose_printed_char(int x, int y, int ch, int col)
{
	if (x == 1 && y != 1 && y - col == 0 || y == 1 && x != 1 && x - ch == 0)
	{
		ft_putchar('C');
		ft_putchar('\n');
		return ;
	}
	if (col == 1 && ch == 1 || y - col == 0 && x - ch == 0)
		ft_putchar('A');
	else if (col == 1 && x - ch == 0 || y - col == 0 && ch == 1)
		ft_putchar('C');
	else if (col == 1 || ch == 1 || y - col == 0 || x - ch == 0)
		ft_putchar('B');
	else
		ft_putchar(' ');
	return ;
}

void	go_new_line(int x, int y, int *ch, int *col)
{
	if (*ch == x)
	{
		*ch = 1;
		*col += 1;
		ft_putchar('\n');
	}
	else
		ch += 1;
}

void	rush(int x, int y)
{
	int	col;
	int	ch;

	col = 1;
	ch = 1;
	while (x >= ch & y >= col)
	{
		choose_printed_char(x, y, ch, col);
		go_new_line(x, y, &ch, &col);
	}
}

int same_edge_corner;
	// int contra_edge_corner;
	// int one_edge_center;
	// int one_dimention_arr_last_letter;

	// same_edge_corner = col == 1 && ch == 1 || y - col == 0 && x - ch == 0;