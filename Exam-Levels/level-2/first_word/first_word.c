#include <unistd.h>

int	main(int ac, char **av)
{
	int	control;

	control = 0;
	if (ac == 2)
	{
		while (av[1][control] == '\t' || av[1][control] == 32)
			control++;
		while (av[1][control] != '\0' && av[1][control] != '\t' && av[1][control] != 32)
		{
			write(1, &av[1][control], 1);
			control++;
		}
	}
	write(1, "\n", 1);
}
