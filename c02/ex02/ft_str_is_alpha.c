/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyarkovs <dyarkovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 16:14:33 by dyarkovs          #+#    #+#             */
/*   Updated: 2023/10/04 12:02:07 by dyarkovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	uppercase;
	int	lowercase;

	i = 0;
	while (str[i])
	{
		uppercase = (str[i] >= 'A' && str[i] <= 'Z');
		lowercase = (str[i] >= 'a' && str[i] <= 'z');
		if (!lowercase && !uppercase)
			return (0);
		i += 1;
	}
	return (1);
}

// int	main(void)
// {
// 	char	*str;
// 	int		res;

// 	str = "dsfakliklAEFTAE";
// 	res = ft_str_is_alpha(str);
// 	printf("%d", res);
// 	return (0);
// }
