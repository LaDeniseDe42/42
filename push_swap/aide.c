/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aide.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdenizar <qdenizar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 09:02:20 by qdenizar          #+#    #+#             */
/*   Updated: 2023/01/19 10:29:49 by qdenizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// int	main(int ac, char **av)
// {
// 	t_stack	*stack_a;
// 	t_stack	*stack_b;
// 	int		stack_size;

// 	if (ac < 2)
// 		return (0);
// 	if (!is_correct_input(av))
// 		exit_error(NULL, NULL);
// 	stack_b = NULL;
// 	stack_a = fill_stack_values(ac, av);
// 	stack_size = get_stack_size(stack_a);
// 	assign_index(stack_a, stack_size + 1);
// 	push_swap(&stack_a, &stack_b, stack_size);
// 	free_stack(&stack_a);
// 	free_stack(&stack_b);
// 	return (0);
// }

/* arg_is_number:
*   Checks if the argument is a number. +1 1 and -1 are all valid numbers.
*   Return: 1 if the argument is a number, 0 if not.
*/
// static int	arg_is_number(char *av)
// {
// 	int	i;

// 	i = 0;
// 	if (is_sign(av[i]) && av[i + 1] != '\0')
// 		i++;
// 	while (av[i] && is_digit(av[i]))
// 		i++;
// 	if (av[i] != '\0' && !is_digit(av[i]))
// 		return (0);
// 	return (1);
// }

/* have_duplicates:
*   Checks if the argument list has duplicate numbers.
*   Return: 1 if a duplicate is found, 0 if there are none.
*/
// static int	have_duplicates(char **av)
// {
// 	int	i;
// 	int	j;

// 	i = 1;
// 	while (av[i])
// 	{
// 		j = 1;
// 		while (av[j])
// 		{
// 			if (j != i && nbstr_cmp(av[i], av[j]) == 0)
// 				return (1);
// 			j++;
// 		}
// 		i++;
// 	}
// 	return (0);
// }

/* arg_is_zero:
*   Checks the argument is a 0 to avoid 0 +0 -0 duplicates
*	and 0 0000 +000 -00000000 too.
*   Return: 1 if the argument is a zero, 0 if it contains
*	anything else than a zero.
*/
// static int	arg_is_zero(char *av)
// {
// 	int	i;

// 	i = 0;
// 	if (is_sign(av[i]))
// 		i++;
// 	while (av[i] && av[i] == '0')
// 		i++;
// 	if (av[i] != '\0')
// 		return (0);
// 	return (1);
// }

/* is_correct_input:
*   Checks if the given arguments are all numbers, without duplicates.
*   Return: 1 if the arguments are valid, 0 if not.
*/
// int	is_correct_input(char **av)
// {
// 	int	i;
// 	int	nb_zeros;

// 	nb_zeros = 0;
// 	i = 1;
// 	while (av[i])
// 	{
// 		if (!arg_is_number(av[i]))
// 			return (0);
// 		nb_zeros += arg_is_zero(av[i]);
// 		i++;
// 	}
// 	if (nb_zeros > 1)
// 		return (0);
// 	if (have_duplicates(av))
// 		return (0);
// 	return (1);
// }

/* is_digit:
*   Checks if the character is a digit.
*   Return: 1 if the character is a digit, 0 if not.
*/
// int	is_digit(char c)
// {
// 	return (c >= '0' && c <= '9');
// }

/* is_sign:
*   Checks if the character is number sign, + or -.
*   Return: 1 if the character is a sign, 0 if not.
*/
// int	is_sign(char c)
// {
// 	return (c == '+' || c == '-');
// }

/* nbstr_cmp:
*   Compares two strings of digits to check if they are the same or not.
*   If one of the strings starts with a '+' sign, it is ignored and the rest
*   of the number string is checked.
*   This is so that +123 == 123 but -123 != 123.
*   Return: 0 if the strings match, another value if they do not.
*/
// int	nbstr_cmp(const char *s1, const char *s2)
// {
// 	int	i;
// 	int	j;

// 	i = 0;
// 	j = i;
// 	if (s1[i] == '+')
// 	{
// 		if (s2[j] != '+')
// 			i++;
// 	}
// 	else
// 	{
// 		if (s2[j] == '+')
// 			j++;
// 	}
// 	while (s1[i] != '\0' && s2[j] != '\0' && s1[i] == s2[j])
// 	{
// 		i++;
// 		j++;
// 	}
// 	return ((unsigned char)s1[i] - (unsigned char)s2[j]);
// }



		///////////////////////////////////////////////////////////

// int	is_correct_input(char **argv)
// {
// 	int	i;
// 	int	bool;
// 	int	how_many_zeros;

// 	how_many_zeros = 0;
// 	i = 1;
// 	bool = 1;
// 	while (argv[i])
// 	{
// 		if (bool == arg_is_number(argv[i]))
// 			print_error("Certains arguments ne sont pas des nombres");
// 		how_many_zeros += arg_is_zero(argv[i]);
// 		i++;
// 	}
// 	if (how_many_zeros > 1)
// 		print_error("plusieurs arguments sont des doublons de 0");
// 	// if (bool == have_duplicates(argv))
// 	// 	print_error("Il y a des doublons, echec de la mission");
// 	return (1);
// }

// int	arg_is_zero(char *argv)
// {
// 	int	i;

// 	i = 0;
// 	if (is_sign(argv[i]))
// 		i++;
// 	while (argv[i] && argv[i] == '0')
// 		i++;
// 	if (argv[i] != '\0')
// 		return (0);
// 	return (1);
// }

// int	have_duplicates(char **argv)
// {
// 	int	i;
// 	int	j;

// 	i = 1;
// 	while (argv[i])
// 	{
// 		j = 1;
// 		while (argv[j])
// 		{
// 			if (j != i && nbstr_cmp(argv[i], argv[j]) == 0)
// 				return (1);
// 			j++;
// 		}
// 		i++;
// 	}
// 	return (0);
// }

// int	arg_is_number(char *argv)
// {
// 	int	i;

// 	i = 0;
// 	if (is_sign(argv[i]) && argv[i + 1] != '\0')
// 		i++;
// 	while (argv[i] && ft_isdigit(argv[i]))
// 		i++;
// 	if (argv[i] != '\0' && !ft_isdigit(argv[i]))
// 		return (1);
// 	return (0);
// }

// int	nbstr_cmp(const char *s1, const char *s2)
// {
// 	int	i;
// 	int	j;

// 	i = 0;
// 	j = 0;
// 	if (s1[i] == '+')
// 	{
// 		if (s2[j] != '+')
// 			i++;
// 	}
// 	else
// 	{
// 		if (s2[j] == '+')
// 			j++;
// 	}
// 	while (s1[i] != '\0' && s2[j] != '\0' && s1[i] == s2[j])
// 	{
// 		i++;
// 		j++;
// 	}
// 	return ((unsigned char)s1[i] - (unsigned char)s2[j]);
// }



// int	main(int argc, char **argv)
// {
// 	printf("ypuhou\n");
// 	int		i;
// 	int		j;
// 	int		k;
// 	int		l;
// 	int		m;
// 	int		n;
// 	t_pile	*t;

// 	i = 1;
// 	j = 0;
// 	k = 0;
// 	l = 0;
// 	m = 0;
// 	n = 0;
// 	if (argc < 2)
// 		print_error("Ou sont les nombres a trier ?");
// 	t = malloc(sizeof(t_pile));
// 	if (!t)
// 		return (0);
// 	while ((i <= argc) && argv[i])
// 	{
// 		m = ft_strlen(argv[i]);
// 		n = m + n;
// 		i++;
// 	}
// 	j = 0;
// 	i = 1;
// 	t->pile_char_a = malloc(sizeof(char *) * n);
// 	n = 0;
// 	m = 0;
// 	while (i <= argc - 1)
// 	{
// 		printf("----------------------------------------\n");
// 		// if (((argv[i][j] != '0') && (argv[i][j] != '1') && (argv[i][j] != '2') //  IF AUTRE QUE NUM ET SPACE
// 		// 	&& (argv[i][j] != '3') && (argv[i][j] != '4') && (argv[i][j] != '5')
// 		// 	&& (argv[i][j] != '6') && (argv[i][j] != '7') && (argv[i][j] != '8')
// 		// 	&& (argv[i][j] != '9') && (argv[i][j] != ' ')) && (argv[i][j]))
// 		// 	print_error("des cara non autorise sont present dans les args");
// 		is_digit_sign_or_space(argv[i]);
// 		if ((argv[i][j] >= '0' && argv[i][j] <= '9') && argv[i][j])  // IF 1
// 		{
// 			printf("if1 -> i = [%d], l = [%d]\n", i, l);
// 			m = ft_strlen(argv[i]);
// 			t->pile_char_a[l] = malloc(m * sizeof(char *));
// 			if (!t->pile_char_a[l])
// 				return (0);
// 			t->pile_char_a[l][k] = argv[i][j];
// 			printf("%c\n", t->pile_char_a[l][k]);
// 			printf("if1.2 -> i = [%d], l = [%d]\n", i, l);   //IF 1.2
// 			k++;
// 			j++;
// 		}
// 		if (argv[i][j] == ' ')
// 		{
// 			printf("if2 -> i = [%d], l = [%d]\n", i, l);   // IF 2
// 			while (argv[i][j] == ' ' && argv[i][j])
// 				j++;
// 			if ((argv[i][j] >= '0' && argv[i][j] <= '9') && argv[i][j])
// 				l++;
// 		}
// 		if (argv[i][j] == '\0')
// 		{
// 			printf("if3 -> i = [%d], l = [%d]\n", i, l);    // IF 3
// 			i++;
// 			l++;
// 			j = 0;
// 			k = 0;
// 		}
// 	}
// 	return (0);
// }