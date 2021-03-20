/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eankaye <eankaye@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 11:20:17 by eankaye           #+#    #+#             */
/*   Updated: 2021/02/23 11:37:11 by eankaye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

#define BUFFER_SIZE 6 

int				end_or_error(int ret, char *buf, char **sup_str);
int				alloc_strs(char **buf, char **sup, int fd);
char			*ft_strdup(const char *str);
int				make_line(int fd, char *buf, char **line, char **sup);
int				get_next_line(int fd, char **line);
unsigned long	ft_strlen(char *str);
char			*trunc_str_wfree(char *str);
void			stock_supp(const char *str, char *sup, int nb_car, int mode);
char			*ft_strjoin_wfree(char *str, char *buf, int nb_car);
int				newline_in_str(char *str, int nb_car, int mode);

#endif
