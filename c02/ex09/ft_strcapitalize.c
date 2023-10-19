/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyarkovs <dyarkovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:42:50 by dyarkovs          #+#    #+#             */
/*   Updated: 2023/10/05 15:03:06 by dyarkovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (i == 0
			|| (!(str[i - 1] >= 'A' && str[i - 1] <= 'Z')
				&& !(str[i - 1] >= 'a' && str[i - 1] <= 'z')
				&& !(str[i - 1] >= '0' && str[i - 1] <= '9')))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i += 1;
	}
	return (str);
}

// int	main(void)
// {
// 	char	*str;

// 	str = "";
// 	printf("%s", ft_strcapitalize(str));
// 	return (0);
// }
// 