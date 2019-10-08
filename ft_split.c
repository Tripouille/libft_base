/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_split.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jgambard <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 11:40:05 by jgambard     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/08 11:51:29 by jgambard    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_wc(char const *str, char c)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		count += (str[i] ? 1 : 0);
		while (str[i] && str[i] != c)
			i++;
	}
	return (count);
}

int		ft_wsize(char const *str, char c)
{
	int		i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

void	ft_fillsplit(char **split, char const *str, char c, int w)
{
	int		wsize;
	int		istr;
	int		i;
	int		j;

	istr = 0;
	i = -1;
	while (++i < w)
	{
		while (str[istr] && str[istr] == c)
			istr++;
		wsize = ft_wsize(str + istr, c);
		split[i] = malloc(sizeof(**split) * (1 + wsize));
		split[i][wsize] = 0;
		j = 0;
		while (str[istr + j] && str[istr + j] != c)
		{
			split[i][j] = str[istr + j];
			j++;
		}
		istr += j;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		w;

	if (!s)
		return (0);
	w = ft_wc(s, c);
	if (!(split = malloc(sizeof(*split) * (1 + w))))
		return (0);
	if (w)
		ft_fillsplit(split, s, c, w);
	split[w] = 0;
	return (split);
}
