/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_in_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iagudo-d <i.agudo@outlook.es>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 16:35:27 by iagudo-d          #+#    #+#             */
/*   Updated: 2022/09/08 16:35:44 by iagudo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void 	ft_is_negative(int n)
{
	if (n < 0)
		write(1, "N", 1);
	else
		write(1, "P",1);
}

/*int	main(void)
{
	int	pos;
	int	neg;
	int	neu;

	pos = 123;
	neg = -3422;
	neu = 0;
	ft_is_negative(neg);
	return (0);
}*/
