/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_double_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccommiss <ccommiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 15:24:11 by ccommiss          #+#    #+#             */
/*   Updated: 2021/03/15 15:24:17 by ccommiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free_double_tab(char **tab)
{
	int i;

	i = -1;
	while(tab[++i] != NULL)
		free(tab[i]);
	free(tab);
	tab = NULL;
}