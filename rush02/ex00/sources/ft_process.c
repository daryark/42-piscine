/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyarkovs <dyarkovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 14:25:27 by svalchuk          #+#    #+#             */
/*   Updated: 2023/10/12 09:49:12 by dyarkovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

//find the number in the file until the end of 0-9 and return to atoi, 
//where transform it to int
char	*ft_get_nb(int fd)
{
	int		i;
	char	c[1];
	char	*str;

	str = malloc(sizeof(char) * 128);
	if (!(str))
		return (NULL);
	i = 0;
	read(fd, c, 1);
	while (c[0] == '\n') //? end of the string
		read(fd, c, 1); //read do iteration + 1(because of last 1 in params) inside;
	while (c[0] >= '0' && c[0] <= '9')
	{
		str[i] = c[0];
		read(fd, c, 1);
		i++;
	}
	return (str);
}

char	*ft_get_val(int fd, char *c)
{
	int		i;
	char	*str;

	str = malloc(sizeof(char) * 128); //?? why 	128 size so much?
	if (!(str))
		return (NULL);
	i = 0;
	while (c[0] != '\n')
	{
		str[i] = c[0];
		read(fd, c, 1);
		i++;
	}
	return (str);
}

t_list	*ft_allocate_and_initialize_tab(int fd)
{
	int		i;
	t_list	*tab; //80: eighty (pointer to one obj)
	char	c[1];
	char	*tmp;

	tab = malloc(sizeof(t_list) * 33);
	if (!tab) // if the memory was done wrong - handle error, return null.
		return (NULL);
	i = 0;
	while (i < 32)
	{
		tab[i].nb = ft_atoi(ft_get_nb(fd));
		read(fd, c, 1);
		while (c[0] == ' ')
			read(fd, c, 1);
		if (c[0] == ':')
			read(fd, c, 1);
		while (c[0] == ' ')
			read(fd, c, 1);
		tmp = ft_get_val(fd, c); //string value of the number
		tab[i].val = ft_strdup(tmp);
		free(tmp); //free the memory, from ft_get_val, as it was allocated more free space 
		// and then th normal value was relocated to the ft_strdup with less memory,
		// then we free the first allocation - not needed space anymore
		i++;
	}
	return (tab);
}


//!open the file
t_list	*ft_process(char *file)
{
	int		fd; //file descriptor, open file
	t_list	*tab; //all array of objs in numbers.dist

	fd = open(file, O_RDONLY);
	if (fd == -1)
		return (NULL);
	tab = ft_allocate_and_initialize_tab(fd); // read the file and get the string value from it.
	close(fd);
	return (tab);
}

// t_list	*ft_process(char *file)
// {
// 	int		i;
// 	int		fd;
// 	char	c[1];
// 	t_list	*tab;
// 	char	*tmp;

// 	fd = open(file, O_RDONLY);
// 	tab = malloc(sizeof(t_list) * 33);
// 	if (fd == -1 || !(tab))
// 		exit(1);
// 	i = 0;
// 	while (i < 32)
// 	{
// 		tab[i].nb = ft_atoi(ft_getnb(fd));
// 		read(fd, c, 1);
// 		while (c[0] == ' ')
// 			read(fd, c, 1);
// 		if (c[0] == ':')
// 			read(fd, c, 1);
// 		while (c[0] == ' ')
// 			read(fd, c, 1);
// 		tmp = ft_getval(fd, c);
// 		tab[i].val = ft_strdup(tmp);
// 		free(tmp);
// 		i++;
// 	}
// 	close(fd);
// 	return (tab);
// }
