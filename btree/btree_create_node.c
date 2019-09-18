#include "ft_btree.h"

b_tree	*btree_create_node(void *data)
{
	b_tree *p;

	p = (b_tree *)malloc(sizeof(b_tree));
	p->data = data;
	p->left = NULL;
	p->right = NULL;
	return (p);
}
