/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtrim.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jgambard <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 11:13:36 by jgambard     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/08 13:01:21 by jgambard    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

char	ft_cinstr(char const *s1, char const c)
{
	while (*s1 && *s1 != c)
		s1++;
	return (*s1 == c ? 1 : 0);
}

int		ft_toend(char const *s1)
{
	int		left;

	left = 0;
	while (s1[left])
		left++;
	return (left);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		i;
	char	*trim;

	start = 0;
	while (s1[start] && ft_cinstr(set, s1[start]))
		start++;
	end = start + ft_toend(s1 + start);
	if (end == start)
	{
		trim = malloc(sizeof(*trim));
		*trim = 0;
		return (trim);
	}
	while (end >= 0 && ft_cinstr(set, s1[--end]))
		;
	if (!(trim = malloc(sizeof(*trim) * (end - start + 2))))
		return (0);
	i = -1;
	while (start + (++i) <= end)
		trim[i] = s1[start + i];
	trim[end - start + 1] = 0;
	return (trim);
}
