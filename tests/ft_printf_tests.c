#include <stdio.h>
#include <limits.h>
#include "../ft_printf.h"

int	main(void)
{
	int	i;
	int	d;
	void *p;
	void *add;
	void *ptr;
	void *add2;
	void *ptr2;
	unsigned int	x;
	unsigned int	X;
	unsigned int	u;
	char	c;
	char	*s;

	i = 1;
	d = 1;
	p = &i;
	add = (void *)42;
	ptr = (void *)NULL;
	add2 = &i;
	ptr2 = &d;
	u = 123325435;
	x = 123456789;
	X = 123456789;
	c = 'a';
	s = "HELLOOO";

	printf("printf d:\n %d %d %d %d %d\n", -1, 0, INT_MIN, INT_MAX, 010);
	ft_printf("ft_printf d:\n %d %d %d %d %d\n", -1, 0, INT_MIN, INT_MAX, 010);

	printf("printf d:\n %i %i %i %i %i\n", -1, 0, INT_MIN, INT_MAX, 010);
	ft_printf("ft_printf d:\n %i %i %i %i %i\n", -1, 0, INT_MIN, INT_MAX, 010);

	printf("printf u:\n %u %u %u %u %u\n", -1, -1000, 010, INT_MIN, UINT_MAX);
	ft_printf("ft_printf u:\n %u %u %u %u %u\n", -1, -1000, 010, INT_MIN, UINT_MAX);

	printf("printf s\n: %s %s %s\n", "Hello", "1234", "");
	ft_printf("ft_printf s\n: %s %s %s\n", "Hello", "1234", "");

	printf("printf x:\n %x %x %x %x %x %x %x\n", 123456789, 123, -123, -1, 0, INT_MIN, UINT_MAX);
	ft_printf("ft_printf x:\n %x %x %x %x %x %x %x\n", 123456789, 123, -123, -1, 0, INT_MIN, UINT_MAX);

	printf("printf X:\n %X %X %X %X %X %X %X\n", 123456789, 123, -123, -1, 0, INT_MIN, UINT_MAX);
	ft_printf("ft_printf X:\n %X %X %X %X %X %X %X\n", 123456789, 123, -123, -1, 0, INT_MIN, UINT_MAX);

	printf("printf zero case:\n%d %i %x %X %u %p\n", 0, 0, 0, 0, 0, (void *)0);
	ft_printf("ft_printf zero case:\n%d %i %x %X %u %p\n", 0, 0, 0, 0, 0, (void *)0);

	printf("printf p addressess:\n %p %p\n", add, ptr);
	ft_printf("ft_printf p addressess:\n %p %p\n", add, ptr);
	printf("printf p addressess:\n %p %p\n", add2, ptr2);
	ft_printf("ft_printf p addressess:\n %p %p\n", add2, ptr2);
	printf("printf NULL p:\n %p\n", (void*)NULL);
	ft_printf("ft_printf NULL p:\n %p\n", (void*)NULL);

	printf("printf percent: %%\n");
	ft_printf("ft_printf percent: %%\n");

	printf("printf mix of specifiers: \n%d %u %s %x %X %p %% %i\n", 123, 123, "Hellohello", 123456789, 123456789, &i, 123456);
	ft_printf("ft_printf mix of specifiers: \n%d %u %s %x %X %p %% %i\n", 123, 123, "Hellohello", 123456789, 123456789, &i, 123456);

	printf("printf count: %i\n", printf("Hello it's %dth of %s !\n", 27, "November"));
	ft_printf("ft_printf count: %i\n", ft_printf("Hello it's %dth of %s !\n", 27, "November"));

	printf("printf: \nHello, here is an integer: %d, here is another integer: %i, here is a character: %c here is an unsigned int: %u\n"
			"here is a string: %s, here is a lowercase hexadecimal: %x, here is an uppercase hexadecimal: %X,\n"
			"here is a pointer address %p\n",
			d, i, c, u, s, x, X, p);
	ft_printf("ft_printf: \nHello, here is an integer: %d, here is another integer: %i, here is a character: %c here is an unsigned int: %u\n"
			"here is a string: %s, here is a lowercase hexadecimal: %x, here is an uppercase hexadecimal: %X,\n"
			"here is a pointer address %p\n",
			d, i, c, u, s, x, X, p);
}
