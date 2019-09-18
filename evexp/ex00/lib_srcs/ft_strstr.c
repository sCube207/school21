/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrawp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 14:56:50 by pgrawp            #+#    #+#             */
/*   Updated: 2019/08/06 15:30:34 by pgrawp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char *begin_f;
	char *pos;

	begin_f = to_find;
	while (*str != 0)
	{
		if (*str == *to_find)
		{
			pos = str;
			while (*pos++ == *to_find++ && *to_find != '\0')
				;
			if (*to_find == '\0')
				return (str);
			to_find = begin_f;
		}
		str++;
	}
	return (0);
}
