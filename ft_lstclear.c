#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list **init;
	t_list *tmp;

	init = lst;
	while ((*lst) != NULL)
	{
		del((*lst)->content);
		tmp = *lst;
		(*lst) = (*lst)->next;
		free(tmp);
	}
	free(*lst);
	init = NULL;
}
