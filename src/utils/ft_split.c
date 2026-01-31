/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasikci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 16:47:14 by skasikci          #+#    #+#             */
/*   Updated: 2026/01/29 16:51:40 by skasikci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include <stdlib.h>

static int	count_words(char *s)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == ' ')
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != ' ')
			i++;
	}
	return (count);
}

static char	*dup_word(char *s, int start, int end)
{
	char	*word;
	int		i;

	word = malloc(sizeof(char) * (end - start + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (start < end)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *s)
{
	char	**res;
	int		i;
	int		j;
	int		start;

	if (!s)
		return (NULL);
	res = malloc(sizeof(char *) * (count_words(s) + 1));
	if (!res)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == ' ')
			i++;
		start = i;
		while (s[i] && s[i] != ' ')
			i++;
		if (i > start)
			res[j++] = dup_word(s, start, i);
	}
	res[j] = NULL;
	return (res);
}
