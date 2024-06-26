/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncmp.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jgambard <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/07 17:45:56 by jgambard     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/07 17:50:20 by jgambard    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stddef.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if ((*s1 || *s2) && (*s1 == *s2 && n && n - 1))
		return (ft_strncmp(++s1, ++s2, --n));
	else
		return (n ? (unsigned char)*s1 - (unsigned char)*s2 : 0);
}
