/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nodywili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 16:34:33 by nodywili          #+#    #+#             */
/*   Updated: 2020/07/10 16:37:36 by nodywili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c);

void ft_print_numbers(void)
{
				char number = '0';
				while(number<= '9')
				{
								ft_putchar(number);
								number++;
				}
				ft_putchar('\n');
}

void ft_putchar(char c)
{
				write(1, &c, 1);
}

int main(void)
{
				ft_print_numbers();
				return(0);
}
