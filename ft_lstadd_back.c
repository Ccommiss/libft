#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *curr;

	if (*alst == NULL)
		*alst = new;
	else
	{
		curr = *alst;
		while (curr->next != NULL)
			curr = curr->next;
		curr->next = new;
		curr->next->next = NULL;
	}
}
