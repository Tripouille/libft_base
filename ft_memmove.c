/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memmove.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jgambard <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/07 15:31:00 by jgambard     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/12 10:42:11 by jgambard    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;

	if (!len || (!dst && !src))
		return (dst);
	i = (dst > src ? len - 1 : 0);
	while (len--)
	{
		((char*)dst)[i] = ((char*)src)[i];
		i += (dst > src ? -1 : 1);
	}
	return (dst);
}
