/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nodywili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 15:44:51 by nodywili          #+#    #+#             */
/*   Updated: 2020/07/13 16:53:18 by nodywili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_putchar(char c){
				write(1,&c,1);
}

void ft_putnbr(int nb){
				if(nb < 0){
								nb = (nb * -1);
								ft_putchar('-');

				}
				if (nb > 9){
								ft_putnbr(nb / 10);
								ft_putchar(nb % 10 + '0');
				}
				else{
								ft_putchar(nb + 48);
								
				}


}

int main(){

				ft_putnbr(42);
				return 0;
}
