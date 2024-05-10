/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amdos-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 09:05:54 by amdos-sa          #+#    #+#             */
/*   Updated: 2024/05/09 12:17:04 by amdos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb > 16 || nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	while (nb > 0)
	{
		res *= nb;
		nb--;
	}
	return (res);
}
