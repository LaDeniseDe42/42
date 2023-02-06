/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stock_and_convert.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdenizar <qdenizar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 11:23:05 by qdenizar          #+#    #+#             */
/*   Updated: 2023/02/06 15:36:33 by qdenizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	split_me_this_shit(char **argv, t_pile *stock)
{
	char	**buffer;

	buffer = ft_split(argv[1], ' ');
	stock_me_this_shit2(buffer, stock, stock->how_much);
}

void	stock_me_this_shit(char **bufarg, t_pile *stock, int argc)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	stock->pile_a = ft_calloc(argc, sizeof(t_pile));
	if (!(stock->pile_a))
		print_error("erreur de malloc");
	while (bufarg[j])
	{
		stock->pile_a[i] = ft_atoi(bufarg[j]);
		i++;
		j++;
	}
}

void	stock_me_this_shit2(char **bufarg, t_pile *stock, int argc)
{
	int	i;

	i = 0;
	stock->pile_a = ft_calloc(argc, sizeof(t_pile));
	if (!(stock->pile_a))
		print_error("erreur de malloc");
	while (bufarg[i])
	{
		stock->pile_a[i] = ft_atoi(bufarg[i]);
		i++;
	}
}
