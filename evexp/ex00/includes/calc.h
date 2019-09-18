/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrawp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 16:19:50 by pgrawp            #+#    #+#             */
/*   Updated: 2019/08/18 17:10:20 by pgrawp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CALC_H
# define CALC_H
# define BUFSIZE 200
# define MAXARG 4096

int		eval_expr(char *s);
char	getch(char *str);
void	ungetch(char c, char *str);
void	push(int d, int *buf);
int		pop(int *buf);
#endif
