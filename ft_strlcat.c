/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jgambard <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/07 17:53:15 by jgambard     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/07 17:54:15 by jgambard    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stddef.h>

unsigned int	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int		dl;
	unsigned int		sl;

	dl = 0;
	while (dest[dl])
		dl++;
	sl = 0;
	while (size > 1 && src[sl] && (dl + sl < size - 1))
	{
		dest[dl + sl] = src[sl];
		sl++;
	}
	if (dl < size - 1)
		dest[dl + sl] = 0;
	if (size && dl > size)
		dl = size;
	while (src[sl])
		sl++;
	return (size ? sl + dl : sl);
}
