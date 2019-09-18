#include "ft_btree.h"

void	btree_apply_prefix(b_tree *root, void (*func)(void *))
{
	if (root != NULL)
	{
			func(root->data);
			btree_apply_prefix(root->left, func);
			btree_apply_prefix(root->right, func);
	}
}
