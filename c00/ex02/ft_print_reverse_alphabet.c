/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iagudo-d <i.agudo@outlook.es>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 16:32:38 by iagudo-d          #+#    #+#             */
/*   Updated: 2022/09/08 16:32:47 by iagudo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	rev_alfa;

	rev_alfa = 'z';
	while (rev_alfa >= 'a')
	{
		write(1, &rev_alfa, 1);
		rev_alfa--;
	}
}

/*int	main()
{
	ft_print_reverse_alphabet();
	return (0);
}*/
