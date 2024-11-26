#include "ft_printf.h"

int	ft_hex_len(unsigned int n)
{
	int	len;

	len = 1;
	while (n >= 16)
	{
		len++;
		n /= 16;
	}
	return (len);
}
void	ft_put_hex(unsigned int n, const char format)
{
	if (n >= 16)
	{
		ft_put_hex(n / 16, format);
		ft_put_hex(n % 16, format);
	}
	else if (n <= 9)
		ft_write_char(n + '0');
	else
	{
		if (format == 'x')
			ft_write_char(n - 10 + 'a');
		else if (format == 'X')
			ft_write_char(n - 10 + 'A');
	}
}
int	ft_hex(unsigned int n, const char format)
{
	ft_put_hex(n, format);
	return(ft_hex_len(n));
}
