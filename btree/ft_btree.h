#ifndef FT_BTREE_H
# define FT_BTREE_H
# include <stdlib.h>

typedef struct			s_tree
{
		void			*data;
		struct s_tree	*left;
		struct s_tree	*right;
}						b_tree;
b_tree					*btree_create_node(void *data);
void					btree_insert_node(b_tree **root, void *data, int (*f)(void *, void *));
void					btree_apply_prefix(b_tree **root, void (*func)(void *));	
void					btree_apply_infix(b_tree **root, void (*func)(void *));	
void					btree_apply_suffix(b_tree **root, void (*func)(void*));	
#endif
