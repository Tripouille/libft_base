/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_calloc.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jgambard <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 10:30:59 by jgambard     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/17 12:45:31 by jgambard    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t		total_size;
	size_t		i;
	char		*ptr;

	total_size = count * size;
	i = -1;
	if (!(ptr = malloc(total_size)))
		return (0);
	while (++i < total_size)
		ptr[i] = 0;
	return (ptr);
}
