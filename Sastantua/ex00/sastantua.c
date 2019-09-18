/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrawp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/04 11:38:52 by pgrawp            #+#    #+#             */
/*   Updated: 2019/08/04 23:22:16 by pgrawp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int print_block(int height, int width, int size);
void print_spaces(int step, int width);

void sastantua(int size)
{
	int height;
	int step;
	int width;
	int add_width;
	
	step = 0;
	height = 2;
	add_width = 2;
	width = 1;
	while (step++ < size)
	{
		if (step % 2 == 1)
			add_width += 2;
		height++;
		width = print_block(height, width, size);

		width += add_width;
	}
}

int print_block(int height, int width, int size)
{
	int floors;
	int count;

	floors = 0;
	count = 0;
	while (floors++ < height)
	{
		print_spaces(size, width);
		count = 0;
		while (count++ < width)
			putchar('*');
		putchar('\\');
		putchar('\n');
		width += 2;
	}
	return width;
}

void print_spaces(int size, int width)
{
	int spaces;
	int count;
	int steps_width;

	count = 0;
	steps_width = 4;
	spaces = (2 * 3 + size - 1) * size;  
	while ( count < size)
	{
		if (count % 2 == 1 && count < size)
			steps_width += 2;
		spaces += steps_width;
		count++;
	}
	spaces = spaces - steps_width  - width / 2;
	count = 0;
	while (count++ < spaces)
		putchar('-');
	putchar('/');
}	

int main()
{
	sastantua(7);
}
