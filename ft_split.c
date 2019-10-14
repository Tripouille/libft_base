/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_split.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jgambard <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 11:40:05 by jgambard     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/14 10:04:41 by jgambard    ###    #+. /#+    ###.fr     */
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

char	**ft_free_all(char **split, int i)
{
	if (--i >= 0)
	{
		ft_free_all(split + 1, i);
		free(*split);
	}
	else
		free(split);
	return (0);
}

char	**ft_fillsplit(char **split, char const *str, char c, int w)
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
		if (!(split[i] = malloc(sizeof(**split) * (1 + wsize))))
			return (ft_free_all(split, i));
		split[i][wsize] = 0;
		j = 0;
		while (str[istr + j] && str[istr + j] != c)
		{
			split[i][j] = str[istr + j];
			j++;
		}
		istr += j;
	}
	return (split);
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
	split[w] = 0;
	return (ft_fillsplit(split, s, c, w));
}
