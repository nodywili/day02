/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nodywili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 13:01:10 by nodywili          #+#    #+#             */
/*   Updated: 2020/07/10 13:35:00 by nodywili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

void ft_putchar(char c);

void ft_print_reverse_alphabet(void)
{
	char start;
	char end;

	start = 'a';
	end = 'z';
	while( end >= 'a')
	{
		ft_putchar(end);
		end--;
	}	

	ft_putchar('\n');
}

int main()
{
	ft_print_reverse_alphabet();
	return(0);
}

void ft_putchar(char c)
{
	write(1, &c,1);

}
