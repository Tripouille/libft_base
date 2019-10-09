/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstmap.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jgambard <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 16:33:15 by jgambard     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/08 16:47:15 by jgambard    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(void *))
{
	t_list		*map;
	t_list		*tmp;

	if (!lst)
		return (0);
	map = (*f)(lst->content);
	tmp = map;
	while ((lst = lst->next))
	{
		map->next = (*f)(lst->content);
		map = map->next;
	}
	return (tmp);
}
