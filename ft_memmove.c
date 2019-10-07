/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memmove.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jgambard <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/07 15:31:00 by jgambard     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/07 15:46:29 by jgambard    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned int		i;
	char				tmp[len];

	if (!len)
		return (dst);
	i = -1;
	while (++i < len)
		tmp[i] = ((char*)src)[i];
	while (--i > 0)
		((char*)dst)[i] = tmp[i];
	((char*)dst)[i] = tmp[i];
	return (dst);
}
