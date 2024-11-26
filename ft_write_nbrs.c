#include "ft_printf.h"

int	ft_write_int(int n)
{
	int	i;
	char *nbr;

	i = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	nbr = ft_itoa(n);
	while (nbr[i] != '\0')
	{
		write(1, &nbr[i], 1);
		i++;
	}
	free(nbr);
	return (i);
}

int	ft_write_unsigned_int(unsigned int n)
{
	unsigned int	i;
	char *nbr;

	i = 0;
	nbr = ft_utoa(n);
	while (nbr[i] != '\0')
	{
		write(1, &nbr[i], 1);
		i++;
	}
	free(nbr);
	return (i);
}
