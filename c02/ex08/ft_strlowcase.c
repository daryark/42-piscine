/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyarkovs <dyarkovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 13:05:16 by dyarkovs          #+#    #+#             */
/*   Updated: 2023/10/04 12:01:33 by dyarkovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i += 1;
	}
	return (str);
}

// int	main(void)
// {
// 	char	str[20] = "hEllo woRld!!3*3\n";

// 	ft_strlowcase(str);
// 	printf("%s", str);
// 	return (0);
// }
