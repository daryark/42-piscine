/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyarkovs <dyarkovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 14:25:18 by svalchuk          #+#    #+#             */
/*   Updated: 2023/10/10 11:55:44 by dyarkovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H //if there is no header file, than make it
# define FT_H //define and ensures that it won't be defined again
//during the subsequent inclusions of the header file

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int		nb;
	char	*val;
}			t_list;
int			ft_atoi(const char *str);
char		*ft_strdup(char *src);
void		ft_putchar(char c);
void		ft_putstr(char *str);
char		*ft_get_nb(int fd);
char		*ft_get_val(int fd, char *c);
t_list		*ft_process(char *file);

#endif //ensures, that all the definitions inside will be processed only
// once even if the header file is included in multiple files
