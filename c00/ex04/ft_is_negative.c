/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JoKicuma <kicuma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 08:13:59 by JoKicuma          #+#    #+#             */
/*   Updated: 2023/11/17 08:23:07 by JoKicuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	num_pos_neg;

	if (n < 0)
	{
		num_pos_neg = 'N';
	}
	else
	{
		num_pos_neg = 'P';
	}
	write(1, &num_pos_neg, 1);
}
