/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssulkuma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 10:33:21 by ssulkuma          #+#    #+#             */
/*   Updated: 2021/12/07 15:31:10 by saritasul        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	chr;
	size_t	len;

	chr = (char)c;
	len = ft_strlen(s);
	while (s[len] != chr && len > 0)
		len--;
	if (s[len] == chr)
		return ((char *)&s[len]);
	else
		return (NULL);
}
