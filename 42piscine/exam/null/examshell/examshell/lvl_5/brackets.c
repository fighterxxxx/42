/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brackets.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsayah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/25 18:14:49 by nsayah            #+#    #+#             */
/*   Updated: 2017/03/25 18:17:37 by nsayah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		is_open_bracket(char c)
{
	if (c == '(' || c == '{' || c == '[')
		return (1);
	else
		return (0);
}

int		is_close_bracket(char c)
{
	if (c == ')' || c == '}' || c == ']')
		return (1);
	else
		return (0);
}

int		is_match(char open_bracket, char close_bracket)
{
	if (open_bracket == '(' && close_bracket == ')')
		return (1);
	if (open_bracket == '{' && close_bracket == '}')
		return (1);
	if (open_bracket == '[' && close_bracket == ']')
		return (1);
	return (0);
}

int		brackets(char *s, int index, char *tmp, char open_bracket)
{
	while (s[index])
	{
		if (is_open_bracket(s[index]))
		{
			*tmp = s[index];
			open_bracket = s[index];
			s[index] = ';';
			brackets(s, index + 1, tmp, open_bracket);
		}
		else if (is_close_bracket(s[index]))
		{
			if (is_match(open_bracket, s[index]) == 0)
				return (1);
			else
			{
				*tmp = 48;
				s[index] = ';';
			}
		}
		++index;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int		index = 1;
	char	tmp = 48;
	int		ret;

	if (argc == 1)
	{
		write(1, "\n", 1);
		return (1);
	}
	while (index < argc)
	{
		ret = brackets(argv[index], 0, &tmp, 0);
		if (tmp != 48 || ret == 1)
			write(1, "Error\n", 6);
		else
			write(1, "OK\n", 3);
		++index;
	}
	return (0);
}
