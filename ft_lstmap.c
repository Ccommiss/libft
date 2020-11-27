#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new;
	t_list *init;

	if (!(lst) || !(f))
		return (NULL);
	if (!(new = ft_lstnew(f(lst->content))))
		del(lst);
	init = new;
	lst = lst->next;
	while (lst != NULL)
	{
		new->next = ft_lstnew(f(lst->content));
		new = new->next;
		lst = lst->next;
	}
	return (init);
}
