#include "ft_btree.h"

void	btree_insert_data(b_tree **head, void *data, int *(cmpf)(void *,void *))
{
		b_tree *p;

		p = *head;
		if (*head == NULL)
		{
				*head = btree_create_node(data);
		}
		else if (cmpf(data, p->data) >= 0)
		{
				btree_insert_data(&(*head)->right, data, cmpf);
		}
		else
				btree_insert_data(&(*head)->left, data, cmpf);
}
