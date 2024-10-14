/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnovis-a <lnovis-a@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 10:22:19 by lnovis-a          #+#    #+#             */
/*   Updated: 2024/10/04 10:39:11 by lnovis-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s2[i] && s1[i] && s1[i] == s2[i] && n > i)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int	main()
{
	char s1[] = "leticia";
	char s2[] = "leticio";

	size_t n = 7;
	printf("%d",ft_strncmp(s1, s2, n));
	return (0);
}*/
