/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putnbr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jgambard <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/09 12:47:01 by jgambard     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/08 13:49:04 by jgambard    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putcharfd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
		ft_putcharfd('-', fd);
	if (n >= 10 || n <= -10)
	{
		ft_putnbr_fd(n < 0 ? -(n / 10) : (n / 10), fd);
		ft_putnbr_fd(n < 0 ? -(n % 10) : (n % 10), fd);
	}
	else
		ft_putcharfd((n < 0 ? -n : n) + '0', fd);
}
