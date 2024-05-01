#include <unistd.h>

int	ft_strlen(char *str)
{
	int	control;

	control = 0;
	while (str[control])
		control++;
	return (control);
}

void	last_word(char *str)
{
	int	len;

	len = ft_strlen(str);
	len--;
	while (str[len] == '\t' || str[len] == 32)
		len--;
	while (str[len] != '\t' || str[len] != 32)
	{
		write(1, &str[len], 1);
		len--;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		last_word(av[1]);
	write(1, "\n", 1);
}
