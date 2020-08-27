/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 19:11:48 by flmarsil          #+#    #+#             */
/*   Updated: 2019/09/01 19:15:00 by flmarsil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_is_a(int x, int y, int i, int j)
{
	if ((i == 0 && j == 0) || (i == y - 1 && x != 1 && j == 0 && y != 1))
		return (1);
	return (0);
}

int		ft_is_c(int x, int y, int i, int j)
{
	if ((i == y - 1 && j == x - 1) || (i == 0 && j == x - 1))
		return (1);
	return (0);
}

int		ft_is_b(int x, int y, int i, int j)
{
	int col;
	int row;

	col = (i > 0 && i < y - 1) && (j == 0 || j == x - 1);
	row = (j > 0 && j < x - 1) && (i == 0 || i == y - 1);
	if (col || row)
		return (1);
	return (0);
}

void	rush(int x, int y)
{
	int i;
	int j;

	if (x <= 0 || y <= 0)
		return ;
	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			if (ft_is_a(x, y, i, j))
				ft_putchar('A');
			else if (ft_is_c(x, y, i, j))
				ft_putchar('C');
			else if (ft_is_b(x, y, i, j))
				ft_putchar('B');
			else
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
