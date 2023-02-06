/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdenizar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 11:28:41 by qdenizar          #+#    #+#             */
/*   Updated: 2022/07/29 11:58:10 by qdenizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	ft_find_next_prime(int nb);
int	ft_is_prime;

int main()
{
	printf("%d", ft_find_next_prime(-85));
}

int	ft_find_next_prime(int nb)
{
	int i;
	int resultat;

	i = 2;
	resultat = 0;
	if ( nb <= 1)
		return (2);
	while ( i < 47000 && i < nb )
	{
		if ( nb % i == 0) 
		{
				nb++;
				i = 1;
			}
		i++;

	}
	
	return (nb);
}
