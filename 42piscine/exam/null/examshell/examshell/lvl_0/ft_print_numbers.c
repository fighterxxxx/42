/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsayah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/18 15:26:33 by nsayah            #+#    #+#             */
/*   Updated: 2017/03/18 15:57:47 by nsayah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_numbers(void)
{
    char nb;

    nb = 48;
    while (nb <= 57)
    {
        ft_putchar(nb);
        nb++;
    }
    ft_putchar('\n');
}