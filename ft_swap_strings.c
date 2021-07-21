/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_strings.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccommiss <ccommiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 14:34:21 by ccommiss          #+#    #+#             */
/*   Updated: 2020/12/28 11:43:34 by ccommiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_swap_strings(char **one, char **two)
{
	char	*a;

	a = *one;
	*one = *two;
	*two = a;
}
