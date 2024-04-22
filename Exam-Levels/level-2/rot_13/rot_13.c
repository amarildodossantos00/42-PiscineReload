#include <unistd.h>

void	rot_13(char *str)
{
	int	control;

	control = 0;
	while (str[control] != '\0')
	{
		if ((str[control] >= 'a' && str[control] <= 'm') || (str[control] >= 'A' && str[control] <= 'M'))
		{
			str[control] += 13;
		}
		else if ((str[control] >= 'n' && str[control] <= 'z') || (str[control] >= 'N' && str[control] <= 'Z'))
		{
			str[control] -= 13;
		}
		write(1, &str[control], 1);
		control++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		rot_13(av[1]);
	write(1, "\n", 1);
	return (0);
}
