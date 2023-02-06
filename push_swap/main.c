/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdenizar <qdenizar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 17:04:53 by qdenizar          #+#    #+#             */
/*   Updated: 2023/02/06 16:01:47 by qdenizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	t_pile	*stock;

	i = 1;
	j = 0;
	stock = malloc(sizeof(t_pile));
	if (!stock)
		return (0);
	init_struct(stock);
	if (argc < 2)
		print_error("Ou sont les nombres a trier ?");
	is_digit_sign_or_space(argv, i, j);
	if (argv_with_only_space(argv) == 1)
		print_error("il y a un argument vide");
	stock->how_much = how_much_number(argv, argc);
	if (argc == 2)
		split_me_this_shit(argv, stock);
	if (argc > 2)
		stock_me_this_shit(argv, stock, argc - 1);
	double_not_pass(stock);
	// VERIFIER S'IL Ny A PAS DE DOUBLONS
	// CONVERTIR ET STOCKER ARGV DANS UN TAB D'INT int *array = malloc(argc
	return (0);
}

void	init_struct(t_pile *stock)
{
	stock->pile_char_a = NULL;
	stock->pile_char_b = NULL;
	stock->pile_a = NULL;
	stock->pile_b = NULL;
	stock->pa = NULL;
	stock->pb = NULL;
	stock->index = 0;
	stock->cara = 0;
	stock->for_malloc = 0;
	stock->how_much = 0;
	stock->nb = 0;
}
