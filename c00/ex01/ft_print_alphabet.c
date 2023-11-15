/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JoKicuma <kicuma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 07:06:06 by JoKicuma          #+#    #+#             */
/*   Updated: 2023/11/15 07:14:48 by JoKicuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	letra;

	letra = 96;
	while (letra++ < 122)
	{
		write(1, &letra, 1);
	}
}
