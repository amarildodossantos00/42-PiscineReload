#include <unistd.h>

int	ft_strlen(char *str)
{
	int	control;

	control = 0;
	while (str[control])
		control++;
	return (control);
}
