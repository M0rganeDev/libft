/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: morgane <git@morgane.dev>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 09:29:33 by morgane           #+#    #+#             */
/*   Updated: 2024/12/12 09:29:52 by morgane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s1, int s2)
{
	while (*s1 != '\0')
	{
		if (*s1 == (char)s2)
			return ((char *)s1);
		++s1;
	}
	if (*s1 == (char)s2)
		return ((char *)s1);
	return ((void *)0);
}
