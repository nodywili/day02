/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nodywili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 15:17:33 by nodywili          #+#    #+#             */
/*   Updated: 2020/07/16 16:00:36 by nodywili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
				write(1, &c, 1);
}

void ft_print_alphabet(void)
{
	char start;
	char end;

	start = 'a';
	end = 'z';
	while (start <= end)
	{
		ft_putchar(start);
		start++;
	}

	ft_putchar('\n');

}




