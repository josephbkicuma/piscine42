/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquicuma <jquicuma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:38:09 by jquicuma          #+#    #+#             */
/*   Updated: 2024/01/18 15:49:48 by jquicuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	int	a = 45;
	int	*b = &a;
	int	**c = &b;
	int	***d = &c;
	int	****e = &d;
	int	*****f = &e;
	int	******g = &f;
	int	*******h = &g;
	int	********i = &h;

	ft_ultimate_ft(&i);
	ft_putchar('0' + (a / 10));
	ft_putchar('0' + (a % 10));
}
