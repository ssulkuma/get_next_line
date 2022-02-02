/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssulkuma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 13:57:27 by ssulkuma          #+#    #+#             */
/*   Updated: 2021/12/07 18:11:57 by saritasul        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*mem;

	i = 0;
	if (!s)
		return (NULL);
	mem = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!mem)
		return (NULL);
	if (s[i] != '\0' && *f != NULL)
	{
		while (s[i])
		{
			mem[i] = f(i, s[i]);
			i++;
		}
	}
	mem[i] = '\0';
	return (mem);
}
