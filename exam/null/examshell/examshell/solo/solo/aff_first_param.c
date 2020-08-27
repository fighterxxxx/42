/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   test.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fmarsili <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/18 11:43:08 by fmarsili     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/21 16:06:24 by fmarsili    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}


int		main(int argc, char **argv)
{
	(void)argc;
	if (argc < 2)
	{
		write(1, "\n", 1);
		return (0);
	}

	ft_putstr(argv[1]);
	write(1, "\n", 1);
	return (0);
}
