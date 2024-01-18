/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquicuma <jquicuma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 16:38:33 by jquicuma          #+#    #+#             */
/*   Updated: 2024/01/18 17:02:36 by jquicuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
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
	int	div;
	int	mod;

	ft_div_mod(10, 3, &div, &mod);
	ft_putchar('D');
	ft_putchar(' ');
	ft_putnbr(div);
	ft_putchar('\n');
	ft_putchar('M');
	ft_putchar(' ');
	ft_putnbr(mod);
}
