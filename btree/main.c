#include "ft_btree.h"
#include <stdio.h>

int main(/*int argc, char **argv*/)
{
		b_tree *head;

		head = btree_create_node("123");
		printf("%s ", head->data);
		return 0;
}
