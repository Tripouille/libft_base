/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memchr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jgambard <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/07 15:49:17 by jgambard     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/11 17:39:41 by jgambard    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;

	i = -1;
	while (++i < n)
		if ((unsigned char)c == ((unsigned char*)s)[i])
			return ((void*)s + i);
	return (0);
}
