/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccommiss <ccommiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 18:45:42 by ccommiss          #+#    #+#             */
/*   Updated: 2020/11/27 18:45:43 by ccommiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		size_nbr(int n)
{
	int size;

	size = 0;
	if (n < 0)
	{
		size++;
		n = -n;
	}
	if (n == 0)
		return (1);
	while (n >= 1)
	{
		size++;
		n = n / 10;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*nbr;
	int		size;
	int		nbis;

	nbis = n;
	nbr = NULL;
	size = size_nbr(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (!(nbr = (char *)malloc(size * sizeof(char) + 1)))
		return (NULL);
	nbr[size] = '\0';
	if (n < 0)
		n = -n;
	while (size > 0)
	{
		nbr[size - 1] = (n % 10) + 48;
		n = n / 10;
		size--;
		if (nbis < 0)
			nbr[0] = '-';
	}
	return (nbr);
}
