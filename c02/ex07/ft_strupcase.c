/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyarkovs <dyarkovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 01:15:00 by dyarkovs          #+#    #+#             */
/*   Updated: 2023/10/04 12:01:39 by dyarkovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i += 1;
	}
	return (str);
}

// int	main(void)
// {
// 	char	str[20] = "hEllo woRld!!3*3\n";

// 	ft_strupcase(str);
// 	printf("%s", str);
// 	return (0);
// }
