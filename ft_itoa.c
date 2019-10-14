/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jgambard <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 12:05:22 by jgambard     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/14 15:17:30 by jgambard    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

static long		ft_pow(long nbr, long pow)
{
	long		result;

	result = 1;
	while (--pow > 0)
		result *= nbr;
	return (result);
}

char			*ft_itoa(int n)
{
	char	*result;
	char	neg;
	int		i;
	int		j;
	long	ln;

	ln = n;
	i = 1;
	neg = (ln < 0 ? 1 : 0);
	if (ln < 0)
		ln = -ln;
	while ((ln / 10) / ft_pow(10, i))
		i++;
	if (!(result = malloc(sizeof(*result) * (i + 1 + neg))))
		return (0);
	result[i + neg] = 0;
	j = 0;
	if (neg)
		result[j++] = '-';
	while (i > 0)
	{
		result[j++] = (ln / ft_pow(10, i)) + '0';
		ln %= ft_pow(10, (i--));
	}
	return (result);
}
