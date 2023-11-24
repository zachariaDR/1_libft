#include "libft.h"

t_list  *ft_lstsize(t_list *lst)
{
    if (!lst)
        return (NULL);
    while(lst->next != NULL)
        lst = lst->next;
    return (lst);
}