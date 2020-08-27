/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 13:50:53 by flmarsil          #+#    #+#             */
/*   Updated: 2019/09/07 13:52:50 by flmarsil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# define RUSH01_H

int		left(int **grid, int *tab, int j);
int		right(int **grid, int *tab, int j);
int		top(int **grid, int *tab, int i);
int		down(int **grid, int *tab, int i);
int		finder(int **grid, int *tab, int i, int j);

#endif
