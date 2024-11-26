#include "ft_printf.h"

int	ft_format(va_list *args, const char format)
{
	int	total_length;

	total_length = 0;
	if (format == 'd' || format == 'i')
		total_length += ft_write_int(va_arg(*args, int));
	else if (format == '%')
	{
		total_length += 1;
		write(1, "%", 1);
	}
	else if (format == 'u')
		total_length += ft_write_unsigned_int(va_arg(*args, unsigned int));
	else if (format == 's')
		total_length += ft_write_string(va_arg(*args, char *));
	else if (format == 'c')
		total_length += ft_write_char(va_arg(*args, int));
	else if (format == 'x' || format == 'X')
		total_length += ft_hex(va_arg(*args, unsigned int), format);
	else if (format == 'p')
		total_length += ft_write_ptr(va_arg(*args, unsigned long long));
	return (total_length);
}

int	ft_printf(const char *str, ...)
{
	int	i;
	int	total_length;
	va_list	args;

	i = 0;
	total_length = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%' && str[i + 1] != '\0')
			total_length += ft_format(&args, str[++i]);
		else
		{
			write (1, &str[i], 1);
			total_length++;
		}
		i++;
	}
	va_end(args);
	return(total_length);
}
