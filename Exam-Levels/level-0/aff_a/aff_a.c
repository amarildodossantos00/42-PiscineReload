#include <unistd.h>

int	main(int ac, char **av)
{
	int	control;

	control = 0;
	if (ac != 2)
	{
		write(1, "a", 1);
	}
	else
	{
		while (av[1][control] != '\0')
		{
			if (av[1][control] == 'a')
			{
				write(1, &av[1][control], 1);
				break ;
			}
			control++;
		}
	}
	write(1, "\n", 1);
}
