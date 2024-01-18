/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquicuma <jquicuma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:52:33 by jquicuma          #+#    #+#             */
/*   Updated: 2024/01/18 16:16:47 by jquicuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int		i;
	char	num[11];

	if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
	}
	i = 0;
	while (nb > 9)
	{
		num[i] = '0' + (nb % 10);
		nb = nb / 10;
		i++;
	}
	num[i] = '0' + (nb % 10);
	while (i >= 0)
	{
		ft_putchar(num[i]);
		i--;
	}
}	

int	main(void)
{
	int	a = 1297;
	int	b = 789;

	ft_swap(&a, &b);
	ft_putchar('A');
	ft_putchar(' ');
	ft_putnbr(a);
	ft_putchar('\n');
	ft_putchar('B');
	ft_putchar(' ');
	ft_putnbr(b);
	ft_putchar('\n');
}
