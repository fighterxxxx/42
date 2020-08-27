/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: decoloma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 21:12:16 by decoloma          #+#    #+#             */
/*   Updated: 2019/09/02 14:14:06 by flmarsil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_o1(int x, int y, int i, int j)
{
	if ((i == 0 && j == 0) || (i == y - 1 && x != 1 && j == x - 1 && y != 1))
		return (1);
	return (0);
}

int		ft_o2(int x, int y, int i, int j)
{
	if ((i == y - 1 && j == 0) || (i == 0 && j == x - 1))
		return (1);
	return (0);
}

int		ft_dash(int x, int y, int i, int j)
{
	if ((j > 0 && j < x - 1) && (i == 0 || i == y - 1))
		return (1);
	return (0);
}

int		ft_pipe(int x, int y, int i, int j)
{
	if ((i > 0 && i < y - 1) && (j == 0 || j == x - 1))
		return (1);
	return (0);
}

void	rush(int x, int y)
{
	int i;
	int j;

	//if (x <= 0 || y <= 0)
	//	return ;
	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			if (ft_o1(x, y, i, j) || ft_o2(x, y, i, j))
				ft_putchar('o');
			else if (ft_dash(x, y, i, j))
				ft_putchar('-');
			else if (ft_pipe(x, y, i, j))
				ft_putchar('|');
			else
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
