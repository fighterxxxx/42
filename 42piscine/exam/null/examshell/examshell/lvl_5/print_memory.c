#include <unistd.h>

#define DIGIT "0123456789abcdef"

void	ft_print_hex(const unsigned char *addr, size_t size)
{
	unsigned space = 40;
	unsigned count = 0;

	if (size > 16)
		size = 16;
	while (size)
	{
		write(1, &DIGIT[*addr / 16], 1);
		write(1, &DIGIT[*addr % 16], 1);
		space -= 2;
		++count;
		if (!(count % 2))
		{
			--space;
			write(1, " ", 1);
		}
		++addr;
		--size;
	}
	while (space)
	{
		write(1, " ", 1);
		--space;
	}
}

void	ft_print_ascii(const unsigned char *addr, size_t size)
{
	if (size > 16)
		size = 16;
	while (size)
	{
		if (*addr > 31 && *addr < 127)
			write(1, addr, 1);
		else
			write(1, ".", 1);
		++addr;
		--size;
	}
	write(1, "\n", 1);
}

void	print_memory(const void *addr, size_t size)
{
	size_t	count;

	if (!addr)
		return ;
	count = 0;
	while (count < size)
	{
		ft_print_hex((const unsigned char *)(addr + count), (size - count));
		ft_print_ascii((const unsigned char *)(addr + count), (size - count));
		count += 16;
	}
}
