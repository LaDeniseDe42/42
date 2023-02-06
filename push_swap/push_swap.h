/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdenizar <qdenizar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 15:30:30 by qdenizar          #+#    #+#             */
/*   Updated: 2023/02/06 16:02:46 by qdenizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "ft_printf/ft_printf.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct t_nb
{
	int				val_n;
	int				index;
	int				z;
	struct t_nb		*next;
	struct t_nb		*before;
}					t_number;

typedef struct t_p
{
	char			**pile_char_a;
	char			**pile_char_b;
	int				*pile_a;
	int				**pile_b;
	struct t_p		*pa;
	struct t_p		*pb;
	int				index;
	int				cara;
	int				for_malloc;
	int				how_much;
	t_number		*nb;
}					t_pile;

typedef struct t_d_p
{
	int	last_nb_pa;
	int	last_nb_pb;
	int	first_nb_pa;
	int	first_nb_pb;
	int	size_pa;
	int	size_pb;
}		t_dp;

typedef struct t_la_pour_gratter_deux_ligne
{
	int	i;
	int	j;
	int	how_much;
}		t_la_pour_gratter_deux_ligne;

void	print_error(char *message);
int		ft_strlen(const char *s);
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int n, int fd);
int		ft_atoi(char *str);
char	**ft_split(char const *s, char c);
void	*free_tab(char **tab);
char	*ft_workforme(char const *s, char c, int i);
int		ft_nbc(char const *s, char separateur);
void	*ft_calloc(size_t count, size_t size);
void	ft_bzero(void *s, size_t n);
char	*ft_strchr(char *s, int c);

void	is_digit_sign_or_space(char **argv, int i, int j);
int		how_much_number(char **argv, int argc);
int		argv_with_only_space(char **argv);
int		read_my_back(char **argv, int i, int j);
void	stock_argv(char **argv, int argc, int j, t_pile *n);
int		len_argv(char **argv);
char	*copy_total_argv(char *stock_me_this_shit, char **argv);
int		how_much_number_two(char **argv, int i, int j);

int		is_correct_input(char **argv);
int		arg_is_zero(char *argv);
int		have_duplicates(char **argv);
int		arg_is_number(char *argv);
int		ft_isdigit(char c);
int		is_sign(char c);
int		nbstr_cmp(const char *s1, const char *s2);
void	init_struct(t_pile *stock);
void	stock_me_this_shit(char **bufarg, t_pile *stock, int argc);
void	split_me_this_shit(char **argv, t_pile *stock);
void	stock_me_this_shit2(char **bufarg, t_pile *stock, int argc);
void	double_not_pass(t_pile *stock);

#endif