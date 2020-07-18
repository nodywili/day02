/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nodywili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 14:00:19 by nodywili          #+#    #+#             */
/*   Updated: 2020/07/18 08:17:54 by nodywili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
void ft_putchar(char c){
		write(1, &c, 1);
}

void ft_is_negative(int n)
{
		
			if(n >= 0){
							ft_putchar('P');
			}
			else{
							ft_putchar('N');
			}
}
