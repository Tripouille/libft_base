/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_substr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jgambard <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 10:48:50 by jgambard     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/17 10:21:24 by jgambard    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char				*sub;
	unsigned int		i;

	i = 0;
	while (s[i])
		i++;
	if (start > i)
	{
		if (!(sub = malloc(sizeof(*sub))))
			return (0);
		*sub = 0;
		return (sub);
	}
	if (i < len)
		len = i;
	if (!(sub = malloc(sizeof(*sub) * (len + 1))))
		return (0);
	sub[len] = 0;
	i = -1;
	while (++i < len)
		sub[i] = s[start + i];
	return (sub);
}
