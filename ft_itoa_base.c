/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccommiss <ccommiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 18:45:42 by ccommiss          #+#    #+#             */
/*   Updated: 2020/12/31 19:30:46 by ccommiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		size_nbr(int n, int base)
{
	int size;
	unsigned int nbis;

	size = 0;
	nbis = n;
	if (base == 16)
		nbis = (unsigned int)n;
	if (nbis < 0)
	{
		size++;
		nbis = -n;
	}
	if (nbis == 0)
		return (1);
	while (nbis >= 1)
	{
		size++;
		nbis = nbis / base;
	}
	return (size);
}

static char 	*def_base(int base)
{
	char *def;

	def = (char *)malloc(sizeof(char) * base + 1);
	if (!def)
		return(NULL);
	if (base == 16)
		def = "0123456789abcdef";
	else if (base == 10)
		def = "0123456789";
	return (def);
}

char	*ft_itoa_base(int n, int base, int size)
{
	char	*nbr;
	unsigned int		nbis;
	char	*tab;

	nbis = n;
	nbr = NULL;
	if (base == 16)
		nbis = (unsigned int)n;
	size = size_nbr(nbis, base);
	tab = def_base(base);

	if (n == 0)
		return (ft_strdup("0"));
	if (!(nbr = (char *)malloc(size * sizeof(char) + 1)))
		return (NULL);
	nbr[size] = '\0';
	if (n < 0)
		n = -n;
	while (nbis > 0)
	{

		nbr[size - 1] = tab[nbis % base];
		nbis = nbis / base;
		size--;
	//	if (nbis < 0)
		//	nbr[0] = '-';
	}
	return (nbr);
}
