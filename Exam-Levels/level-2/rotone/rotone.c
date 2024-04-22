#include <unistd.h>

void	rotone(char *str)
{
	int	control;

	control = 0;
	while (str[control] != '\0')
	{
		if ((str[control] >= 'a' && str[control] <= 'y') || (str[control] >= 'A' && str[control] <= 'Y'))
			str[control] += 1;
		else if ((str[control] == 'z') || (str[control] == 'Z'))
			str[control] -= 25;
		write(1, &str[control], 1);
		control++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		rotone(av[1]);
	write(1, "\n", 1);
}
