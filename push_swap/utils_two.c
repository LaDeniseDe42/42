/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_two.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdenizar <qdenizar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 09:38:53 by qdenizar          #+#    #+#             */
/*   Updated: 2023/01/18 11:37:06 by qdenizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_nbc(char const *s, char separateur)
{
	int	nbc;
	int	i;
	int	j;

	i = 0;
	j = 0;
	nbc = 0;
	while (s[j])
	{
		if (s[j] != separateur && i == 0)
		{
			i = 1;
			nbc++;
		}
		else if (s[j] == separateur)
			i = 0;
		j++;
	}
	return (nbc);
}

char	*ft_workforme(char const *s, char c, int i)
{
	int		j;
	char	*tab;
	int		k;

	j = i;
	k = 0;
	while (s[j] && s[j] != c)
		j++;
	tab = malloc(sizeof(char) * (j - i + 1));
	if (!tab)
		return (0);
	while (s[i] && i < j)
		tab[k++] = s[i++];
	tab[k] = '\0';
	return (tab);
}

void	*free_tab(char **tab)
{
	int	i;

	i = 0;
	if (!tab)
		return (NULL);
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free (tab);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		k;
	char	**tab;

	i = 0;
	if (!s)
		return (0);
	k = 0;
	tab = ft_calloc((ft_nbc(s, c) + 1), sizeof(char *));
	if (!tab)
		return (free_tab(tab));
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (k < ft_nbc(s, c))
		{
			tab[k] = ft_workforme(s, c, i);
			if (tab[k++] == 0)
				return (free_tab(tab));
		}
		while (s[i] && s[i] != c)
			i++;
	}
	return (tab);
}

char	*ft_strchr(char *s, int c)
{
	char			*str;
	int				i;

	str = s;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
			return (str + i);
		i++;
	}
	if (str[i] == (char)c)
		return (str + i);
	return (0);
}
