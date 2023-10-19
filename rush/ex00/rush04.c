/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyarkovs <dyarkovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 14:11:31 by dyarkovs          #+#    #+#             */
/*   Updated: 2023/09/24 21:24:53 by dyarkovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char y);

void	choose_printed_char(int x, int y, int ch, int col)
{
	if (col == 1 && ch == 1)
		ft_putchar('A');
	else if ((col == 1 && ch == x) || (col == y && ch == 1))
		ft_putchar('C');
	if (col == y && ch == x)
		ft_putchar('A');
	else if (col == 1 || ch == 1 || col == y || ch == x)
		ft_putchar('B');
	else
		ft_putchar(' ');
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
		if (ch == x)
		{
			ch = 1;
			col += 1;
			ft_putchar('\n');
		}
		else
			ch += 1;
	}
}
