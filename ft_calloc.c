/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_calloc.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jgambard <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 10:30:59 by jgambard     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/08 10:40:22 by jgambard    ###    #+. /#+    ###.fr     */
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
	ptr = malloc(total_size);
	while (++i < total_size)
		ptr[i] = 0;
	return (ptr);
}
