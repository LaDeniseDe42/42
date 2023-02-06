/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdenizar <qdenizar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:20:47 by qdenizar          #+#    #+#             */
/*   Updated: 2023/02/06 16:00:07 by qdenizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	is_digit_sign_or_space(char **argv, int i, int j)
{
	while (argv[i])
	{
		while (argv[i][j])
		{
			if (argv[i][j] == '+' && !ft_isdigit(argv[i][j + 1]))
				print_error("un + ou un - se balade tout seul dans les args");
			if (argv[i][j] == '-' && !ft_isdigit(argv[i][j + 1]))
				print_error("un + ou un - se balade tout seul dans les args");
			if ((argv[i][j] == '-' || argv[i][j] == '+')
				&& ((ft_isdigit(argv[i][j + 1]) == 1) && (ft_isdigit(argv[i][j
							- 1]) == 1)))
				print_error("une erreur de ce type est presente 1-3");
			if (((argv[i][j] != '0') && (argv[i][j] != '1')
					&& (argv[i][j] != '2') && (argv[i][j] != '3')
					&& (argv[i][j] != '4') && (argv[i][j] != '5')
					&& (argv[i][j] != '6') && (argv[i][j] != '7')
					&& (argv[i][j] != '8') && (argv[i][j] != '9')
					&& (argv[i][j] != ' ') && (argv[i][j] != '-')
					&& (argv[i][j] != '+')) && (argv[i]))
				print_error("des cara non autorise sont present.");
			j++;
		}
		j = 0;
		i++;
	}
}

int	argv_with_only_space(char **argv)
{
	int	i;
	int	j;
	int	k;
	int	b;

	i = 1;
	j = 0;
	k = 0;
	b = 0;
	while (argv[i])
	{
		if (argv[i][k] == ' ')
		{
			while (argv[i][k++] == ' ')
				if (argv[i][k + 1] == '\0')
					return (b + 1);
			k = 0;
		}
		while (argv[i][j])
			j++;
		j = 0;
		i++;
	}
	return (b);
}

void	double_not_pass(t_pile *stock)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (stock->pile_a[i])
	{
		while (stock->pile_a[j] && stock->pile_a[i] != stock->pile_a[j])
		{
			j++;
			if(stock->pile_a[i] == stock->pile_a[j])
				print_error("I never allow you to put double in my list");
		}
		i++;
		j = i + 1;
	}
}
