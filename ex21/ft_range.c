/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvictor <dvictor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 16:57:47 by dvictor           #+#    #+#             */
/*   Updated: 2019/09/05 15:51:08 by dvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int			*range;
	long int	i;
	long int	j;

	j = 0;
	if (max <= min)
		return (NULL);
	i = max - min;
	if (!(range = (int *)malloc(sizeof(range) * i + 1)))
		return (NULL);
	while (min < max)
	{
		range[j] = min;
		min++;
		j++;
	}
	range[j] = '\0';
	return (range);
}
