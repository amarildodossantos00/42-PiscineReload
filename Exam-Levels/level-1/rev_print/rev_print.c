#include <unistd.h>

int	ft_strlen(char *str)
{
	int	control;

	control = 0;
	while (str[control])
		control++;
	return (control);
}

char	*ft_rev_print(char *str)
{
	int	len;

	len = ft_strlen(str);
	len--;
	while (len >= 0)
	{
		write(1, &str[len], 1);
		len--;
	}
}
