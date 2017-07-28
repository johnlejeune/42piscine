/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alucas- <alucas-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 11:53:57 by alucas-           #+#    #+#             */
/*   Updated: 2017/07/05 11:53:58 by alucas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;

	if (nb <= 0)
		return (0);
	if (nb == 0)
		return (0);
	if (nb == 1)
		return (0);
	i = 1;
	while (++i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
	}
	return (1);
}
