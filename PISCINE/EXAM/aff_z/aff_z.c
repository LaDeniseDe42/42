/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_z.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdenizar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 10:45:45 by qdenizar          #+#    #+#             */
/*   Updated: 2022/08/03 10:55:28 by qdenizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int main(int argc, char **argv)
{
	(void )argc;
	(void) argv;
	write(1, "z", 1);
	write(1, "\n", 1);
	return (0);
}
