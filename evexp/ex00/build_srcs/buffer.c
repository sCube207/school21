/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buffer.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrawp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 16:25:33 by pgrawp            #+#    #+#             */
/*   Updated: 2019/08/18 17:15:07 by pgrawp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"
#include "../includes/calc.h"

int		g_pos;
int		g_strp;

void	push(int d, int *buf)
{
	if (g_pos < BUFSIZE)
		buf[g_pos++] = d;
	else
		ft_putstr("error: stack full\n");
}

int		pop(int *buf)
{
	if (g_pos > 0)
		return (buf[--g_pos]);
	else
	{
		ft_putstr("error: stack empty\n");
		return (0);
	}
}

char	getch(char *str)
{
	if (g_strp > 0)
		return (str[--g_strp]);
	else
		ft_putstr("error: no char's\n");
	return ('\0');
}

void	ungech(char c, char *str)
{
	if (g_strp < BUFSIZE)
		str[g_strp++] = c;
	else
		ft_putstr("error: too many char's\n");
}
