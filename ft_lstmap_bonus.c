/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstmap.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jgambard <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 16:33:15 by jgambard     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/13 11:02:05 by jgambard    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

t_list		*ft_lstn(void *content)
{
	t_list		*new;

	if (!(new = malloc(sizeof(*new))))
		return (0);
	new->content = (void*)content;
	new->next = 0;
	return (new);
}

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *))
{
	t_list		*map;
	t_list		*tmp;

	if (!lst || !(map = ft_lstn((*f)(lst->content))))
		return (0);
	tmp = map;
	while ((lst = lst->next))
	{
		if (!(map->next = ft_lstn((*f)(lst->content))))
			return (0);
		map = map->next;
	}
	return (tmp);
}
