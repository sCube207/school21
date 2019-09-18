#include "ft_btree.h"

void	btree_apply_infix(b_tree *root, void (*func)(void *))
{
	if (root != NULL)
	{
			btree_apply_infix(root->left, func);
			func(root->data);
			btree_apply_infix(root->right, func);
	}
}
