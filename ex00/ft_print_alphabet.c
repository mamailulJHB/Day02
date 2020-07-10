/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamailul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 08:22:51 by mamailul          #+#    #+#             */
/*   Updated: 2020/07/10 15:20:12 by mamailul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	 ft_print_alphabet(void) 
{
	char	start;

	start = 'a';
	while(start <= 'z')
	{
		ft_putchar(start);
		start++;
	}
} 
