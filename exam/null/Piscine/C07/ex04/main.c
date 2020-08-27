/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 08:34:27 by flmarsil          #+#    #+#             */
/*   Updated: 2019/09/14 09:34:14 by flmarsil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src);
int		*ft_range(int min, int max);
int		ft_ultimate_range(int **range, int min, int max);
char	*ft_strjoin(int size, char **strs, char *sep);
char	*ft_convert_base(char *nbr, char *base_from, char *base_to);
char	**ft_split(char *str, char *charset);

int		main(int argc, char **argv)
{
//	int *tab;
	(void)argv;
	(void)argc;
//	int i;
//	char	**tab;
//	i = -1;
//	**************************************************************************
//	printf("%s\n", ft_strdup(argv[1]));
//	**************************************************************************
//	tab = ft_range(-10, 10);
//	while (i < 20)
//	{
//		printf("%i\n", tab[i]);
//		i++;
//	}
//	**************************************************************************
//	printf("%i\n", ft_ultimate_range(&tab, -10, 10));
//	**************************************************************************
//	printf("%s\n", ft_strjoin(argc, argv, "."));
//	**************************************************************************
	printf("%s\n", ft_convert_base(argv[1], argv[2], argv[3]));
//	**************************************************************************
//	tab = ft_split(argv[1], argv[2]);
//	while (tab[++i])
//	printf("%s\n", tab[i]);
//	return (0);
}
