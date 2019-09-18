#include "ft_btree.h"

void	btree_apply_suffix(b_tree *root, void (*func)(void *))
{
	if (root != NULL)
	{
			btree_apply_suffix(root->left, func);
			btree_apply_suffix(root->right, func);
			func(root->data);
	}
}
