/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamailul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 15:17:49 by mamailul          #+#    #+#             */
/*   Updated: 2020/07/10 15:19:47 by mamailul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void     ft_print_alphabet(void)
{
    char    start;

    start = '0';
    while(start <= '9')
    {
        ft_putchar(start);
        start++;
    }
}
~
