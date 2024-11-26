#include "ft_printf.h"

int	ft_write_string(char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		return(6);
	}
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}
int ft_write_char(int c)
{
	write(1, &c, 1);
	return 1;
}


