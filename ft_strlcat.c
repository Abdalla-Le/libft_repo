/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnovis-a <lnovis-a@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 19:20:56 by lnovis-a          #+#    #+#             */
/*   Updated: 2024/10/11 12:06:08 by lnovis-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dst[i])
		i++;
	while (src[j] && j < size)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (ft_strlen(dst));
}

/*
int	main()
{
	char	str1[20] = "leticiaaa";
	char	str2[10] = "blim blom";

	printf("%i", ft_strlcat(str1, str2,5));
	return 0;
}*/
