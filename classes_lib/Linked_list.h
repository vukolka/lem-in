#ifndef FDF_LINKED_LIST_H
#define FDF_LINKED_LIST_H

extern const void	*g_list;
void				llist_init();
void				llst_add(void **s_self, void *s_new);

typedef struct		s_llist
{
	void			*content;
	struct s_llist	*next;
}					t_llist;

#endif //FDF_LINKED_LIST_H
