/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdenizar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 17:25:54 by qdenizar          #+#    #+#             */
/*   Updated: 2022/07/20 18:50:40 by qdenizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str);

int main()
{
	char test[] ="qweeqweqweqweqweqw";

	ft_str_is_alpha(test);
	printf("%d", ft_str_is_alpha(test));

}


int	ft_str_is_alpha(char *str)
{
	int i;
	int answer;

	i = 0;
	answer = 10;
	while(str[i] && answer > 0)
	{
		if (str[i] >= 'A' && str[i] <= 'Z' || str[i] <= 'z' && str[i] >= 'a')
			answer = 1;
		if (str[0] ==str['\0'])
			answer = 1;
		if (str[i] < 'A' || str[i] > 'Z' &&  str[i] < 'a' || str[i] > 'z')
			answer = 0;
		i++;
	}
	if (answer == 10)
		answer = 0;
	return (answer);
			
}
