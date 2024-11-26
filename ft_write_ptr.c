#include "ft_printf.h"

int	ft_ptr_len(uintptr_t n)
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
void	ft_put_ptr(uintptr_t n)
{
	if (n >= 16)
	{
		ft_put_ptr(n / 16);
		ft_put_ptr(n % 16);
	}
	else
	{
		if (n <= 9)
			ft_write_char(n + '0');
		else
			ft_write_char(n - 10 + 'a');
	}
}
int	ft_write_ptr(unsigned long long ptr)
{
	int len;

	len = 0;
	len += write(1, "0x", 2);
	if (ptr == 0)
		len += write(1, "0", 1);
	else
	{
		ft_put_ptr(ptr);
		len += ft_ptr_len(ptr);
	}
	return (len);
}
