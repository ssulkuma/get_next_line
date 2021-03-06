/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssulkuma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 14:52:45 by ssulkuma          #+#    #+#             */
/*   Updated: 2021/12/07 11:58:47 by saritasul        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	n_len(int n)
{
	size_t	len;

	len = 0;
	if (n == -2147483648)
	{
		len = 11;
		return (len);
	}
	if (n == 0)
		len++;
	if (n < 0)
	{
		n = n * (-1);
		len++;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static char	*check_min(char *str, int n, size_t len)
{
	size_t	i;

	i = 0;
	if (n == -2147483648)
	{
		str[i] = '-';
		str[len - 1] = '8';
		n = 214748364;
		i++;
		len--;
	}
	len = len - 1;
	while (n > 0)
	{
		str[len] = (n % 10) + '0';
		n = n / 10;
		len--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;

	len = n_len(n);
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n == -2147483648)
		return (check_min(str, n, len));
	if (n < 0)
	{
		str[0] = '-';
		n = n * (-1);
	}
	len = len - 1;
	while (n > 0)
	{
		str[len--] = (n % 10) + '0';
		n = n / 10;
	}
	return (str);
}
