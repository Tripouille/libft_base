/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strmapi.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jgambard <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 12:15:10 by jgambard     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/08 12:33:25 by jgambard    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*mapi;
	int		size;

	size = 0;
	while (s[size])
		size++;
	if (!(mapi = malloc(sizeof(*mapi) * (size + 1))))
		return (0);
	mapi[size] = 0;
	while (--size >= 0)
		mapi[size] = (*f)(size, s[size]);
	return (mapi);
}
