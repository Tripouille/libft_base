/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memccpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jgambard <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/07 14:57:25 by jgambard     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/11 17:26:40 by jgambard    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (unsigned char)c != (unsigned char)((char*)src)[i])
	{
		((char*)dst)[i] = (unsigned char)((char*)src)[i];
		i++;
	}
	if (i < n)
		((char*)dst)[i] = (unsigned char)((char*)src)[i];
	return ((unsigned char)c != ((char*)src)[i] ? 0 : dst + i + 1);
}
