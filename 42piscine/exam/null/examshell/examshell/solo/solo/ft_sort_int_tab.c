void	ft_swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
				ft_swap(&tab[i], &tab[j]);
			j++;
		}
		i++;
	}
}

#include <stdio.h>

int		main()
{
	int tab[] = {5, 9, 6, 4, 3, 1, 8, 5, 4, 2};
	int i;

	i = 0;
	ft_sort_int_tab(tab, 10);
	while (i < 10)
	{
		printf("%d", tab[i]);
		i++;
	}
	return (0);	
}
