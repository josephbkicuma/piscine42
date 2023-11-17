/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JoKicuma <kicuma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 05:51:05 by JoKicuma          #+#    #+#             */
/*   Updated: 2023/11/17 08:27:43 by JoKicuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_is_negative.c"

int	main(void)
{
	int	num;

	printf("Digite um numero\n");
	scanf("%d", &num);
	ft_is_negative(num);
}
