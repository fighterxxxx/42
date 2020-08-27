/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsayah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/18 16:17:00 by nsayah            #+#    #+#             */
/*   Updated: 2017/03/18 16:28:15 by nsayah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    first_word(char *s)
{
    int     i = 0;

    while (s[i] == ' ' || s[i] == '\t')
        i++;
    while (s[i] != ' ' && s[i] != '\t' && s[i] != '\0')
    {
        ft_putchar(s[i]);
        i++;
    }
}

int     main(int ac, char **av)
{
    if (ac == 2)
        first_word(av[1]);
    ft_putchar('\n');
    return (0);
}