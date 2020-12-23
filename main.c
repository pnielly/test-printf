#include "libftprintf.h"
#include <stdio.h>

int	main(void)
{
	int p;
	int n;
	printf("\nTEST C\n");
	printf("%d, \n", ft_printf("abc%15cabc%c|\n", '1', '\0'));
	printf("%d, \n", printf("abc%15cabc%c|\n", '1', '\0'));
	printf("\nTEST %%\n");
	printf("%d, \n", ft_printf("%%\n"));
	printf("%d, \n", printf("%%\n"));
	printf("\nTEST S\n");
	printf("%d, \n", ft_printf("a%.50.20s%-50.2s!%*.*sa\n", "abc\0dskdj", "abc", 0, 0, "zzc\0a"));
	printf("%d, \n", printf("a%.50.20s%-50.2s!%*.*sa\n", "abc\0dskdj", "abc", 0, 0, "zzc\0a"));
	printf("\nTEST P\n");
	printf("%d, \n", ft_printf("a%p!%.*p|\n", &p, NULL));
	printf("%d, \n", printf("a%p!%.*p|\n", &p, NULL));
	printf("\nTEST D\n");
	printf("%d, \n", ft_printf("a%000---+ *d|%#d|%+d|%0*i|\n", 123, 50, 0, -2147483648, 20, 5));
	printf("%d, \n", printf("a%000---+ *d|%#d|%+d|%0*i|\n", 123, 50, 0, -2147483648, 20, 5));
	printf("\nTEST U\n");
	printf("%d, \n", ft_printf("a%u|%u|%u|\n", 123, 0, 2147483647));
	printf("%d, \n", printf("a%u|%u}%u|\n", 123, 0, 2147483647));
	printf("\nTEST xX\n");
	printf("%d, \n", ft_printf("a%# x|%#X|%x|%X\n", 1, 150, 0, 0));
	printf("%d, \n", printf("a%# x|%#X|%x|%X\n", 1, 150, 0, 0));
	printf("\nTEST %%\n");
	printf("%d, \n", ft_printf("a%%|%%|\n"));
	printf("%d, \n", printf("a%%|%%|\n"));
	printf("\nTEST N\n");
	printf("%d, \n", ft_printf("a%%|%n|\n", &n));
	printf("%d, \n", printf("a%%|%n|\n", &n));
	printf("\nTEST Etoiles dont la premiere est negative\n");
	printf("%d, \n", ft_printf("<%**s %c>\n", -2, 5, "abc", 'a'));
	printf("%d, \n", printf("<%**s %c>\n", -2, 5,"abc", 'a'));
	printf("\nTEST SPACE FLAG\n");
	printf("%d, \n", printf("%   d\n", -13));
	printf("%d, \n", ft_printf("%   d\n", -13));
}
