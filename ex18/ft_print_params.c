/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amdos-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 10:14:41 by amdos-sa          #+#    #+#             */
/*   Updated: 2024/05/10 11:02:02 by amdos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(int ac, char *av[])
{
	int	count;
	int	count1;

	count = 1;
	if (ac > 1)
	{
		while (count < ac)
		{
			count1 = 0;
			while (av[count][count1] != '\0')
			{
				ft_putchar(av[count][count1]);
				count1++;
			}
			ft_putchar('\n');
			count++;
		}
	}
	return (0);
}
