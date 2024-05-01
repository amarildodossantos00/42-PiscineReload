#include <unistd.h>

int	check_doubles(char *str, char character, int position)
{
	int	control;

	control = 0;
	while (control < position)
	{
		if (str[control] == character)
			return (0);
		control++;
		
	}
	return (1);
}

void	inter(char *str0, char *str1)
{
	int	control0;
	int	control1;

	control0 = 0;
	while (str0[control0] != '\0')
	{
		control1 = 0;
		while (str1[control1] != '\0')
		{
			if (str0[control0] == str1[control1])
			{
				if (check_doubles(str0, str0[control0], control0) == 1)
				{
					write(1, &str0[control0], 1);
					break ;
				}
			}
			control1++;
		}
		control0++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 3)
		inter(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}
