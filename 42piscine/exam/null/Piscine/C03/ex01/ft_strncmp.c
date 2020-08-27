/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 12:45:12 by flmarsil          #+#    #+#             */
/*   Updated: 2019/09/09 11:41:14 by flmarsil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	if (n == 0)
		return (0);
	while (n > i + 1 && s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
int main()
{
	char s1[] = "€€€€";
	char s2[] = "$$$$";

	printf("%d\n", ft_strncmp(s1, s2, 3));
	printf("%d\n", strncmp(s1, s2, 3));
}


