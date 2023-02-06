/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdenizar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 13:30:43 by qdenizar          #+#    #+#             */
/*   Updated: 2022/07/19 16:06:31 by qdenizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	eureka;
	int	stock;

	i = 0;
	while (tab[i])
	{
		eureka = i +1;
		if (tab[i] > tab[eureka])
		{
			stock = tab[eureka];
			tab[eureka] = tab[i];
			tab[i] = stock;
			i = 0;
		}
		else
			i++;
	}
}
