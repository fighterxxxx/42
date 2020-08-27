/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   headers.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codebrai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 23:21:58 by codebrai          #+#    #+#             */
/*   Updated: 2019/09/18 23:22:06 by codebrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADERS_H
# define HEADERS_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

# define BUFFSIZE 8192

typedef struct	s_pres
{
	int			i;
	int			j;
	int			maxsquare;
}				t_pres;

void			ft_putchar(char c);
void			ft_putstr(char *str);
int				ft_fillstr(char *str, int len);
char			*ft_strcpy(char *dest, char *src);
char			*ft_strcat(char *dest, char *src);

char			*ft_realloc(char *map, char *tmp, int len, char *lect);
char			*ft_readmaps(int fd, int checkread);
int				ft_checkread(int *checkread, char *lect);

char			*ft_checkfirstline(char *carac, char *map, int *i);
int				ft_checklines(char *carac, char *map, int *i);
int				ft_checkcarac(char *carac, char singlecar);
int				ft_checkmap(char *carac, char *map);
int				ft_caracvalue(char *carac, char singlecar);

void			ft_nblicol(char *map, int *lines, int *columns, int i);
int				**ft_makegrid(char *carac, char *map, int *lines, int *columns);
int				**ft_mallocgrid(int *lines, int *columns);
void			ft_fillgrid(int **grid, char *carac, char *map, int *columns);
void			ft_fillgridzero(int **grid, int columns);

int				ft_min(int **cache, int i, int j);
void			ft_findmax(int **grid, int **cache, int columns, t_pres *res);
void			ft_revgrid(int **grid, int columns);
void			ft_fillrep(int **grid, t_pres res);

char			**ft_mallocchargrid(int lines, int columns);
char			ft_transcarac(char *carac, int value);
void			ft_trgrid(char **print, int **grid, char *carac, int columns);
void			ft_printres(char **print, int columns);

int				ft_stdin(void);
int				ft_mapsolution(char *av);
int				ft_mapsolution2(int **grid, char *map, char *carac);
void			ft_mapsolution3(int **grid, int **cache, char **print);

int				ft_atoi(char *str);
int				ft_checknblignes(char *map, int i);
int				ft_checknblignes2(int nb, char *map, int i);

#endif
