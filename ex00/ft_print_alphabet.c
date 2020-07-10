/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nodywili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 15:17:33 by nodywili          #+#    #+#             */
/*   Updated: 2020/07/10 11:29:07 by nodywili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c);

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
void ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main()
{
	
	ft_print_alphabet();
	return 0;
}



