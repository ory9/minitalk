/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oallan <oallan@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 16:56:41 by oallan            #+#    #+#             */
/*   Updated: 2023/12/30 19:07:11 by oallan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static	int	ft_count_words(char const *str, char c)
{
	size_t	count;

	count = 0;
	while (*str)
	{
		while (*str == c)
			str++;
		if (*str)
			count++;
		while (*str && *str != c)
			str++;
	}
	return (count);
}

static	int	ft_count_non_delim(char const *str, char c)
{
	size_t	length;

	length = 0;
	while (str[length] && str[length] != c)
		length++;
	return (length);
}

char	**ft_split(char const *s, char c)
{
	char	**results;
	size_t	word_len;
	int		i;

	if (!s)
		return (0);
	results = (char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!results)
		return (0);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			word_len = ft_count_non_delim(s, c);
			results[i++] = ft_substr(s, 0, word_len);
			s = s + word_len;
		}
	}
	results[i] = NULL;
	return (results);
}
