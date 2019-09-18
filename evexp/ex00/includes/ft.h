/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrawp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 16:47:44 by pgrawp            #+#    #+#             */
/*   Updated: 2019/08/18 16:25:17 by pgrawp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <stdlib.h>
# include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *s);
int		ft_strcmp(char *s, char *t);
int		ft_strlen(char *s);
void	ft_swap(int *a, int *b);
int		ft_atoi(char *s);
int		ft_factorial(int nb);
int		ft_power(int nb);
void	ft_putnbr(int nb);
char	*ft_strcat(char *dest, char *s);
int		ft_sqrt(int nb);
char	*ft_strcpy(char *dest, char *str);
char	*ft_strncat(char *s, char *t, int n);
int		ft_strstr(char *s, char *t, unsigned int n);
#endif
