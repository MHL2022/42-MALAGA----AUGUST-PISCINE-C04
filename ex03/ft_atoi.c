/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marialedesmabasualdo <maledesm@studen      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 22:57:00 by marialede         #+#    #+#             */
/*   Updated: 2022/08/29 16:34:04 by maledesm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	a;
	int	n;
	int	r;

	a = 0;
	n = 1 ;
	while (str[a] == 32 || (str[a] >= 9 && str[a] <= 13))
		a++;
	while (str[a] == 43 || str[a] == 45)
	{
		if (str[a] == 45)
			n = n * -1;
			a++;
	}
	while (str[a] >= 48 && str[a] <= 57)
	{
		r = (str[a] - 48) + (r * 10);
		a++;
	}
	return (r * n);
}
