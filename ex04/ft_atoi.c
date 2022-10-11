/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maledesm <maledesm@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 12:43:39 by maledesm          #+#    #+#             */
/*   Updated: 2022/08/29 12:57:18 by maledesm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_atoi(char *str)
{
	int	a;
	int	n;

	a = 0;
	while (str[a] == 32 || (str[a] >= 9 && str[a] <=13))
		a++;
	while (str[a]  == 43 || str[a] == 45)
	{
		if (str[a] == 45)
			str[a] = str[a] * -1;
			a++;
	}
	while ( str[a] >= 0 & str[a] <= 9)
	{
		str[a] = str[a] * 10;
		//str[a] = (str[a] - 48);
		a++;
	}
	return (n);
}
int	main()
{	
	char str[] = " ---+--+1234ab567";
	printf("%d\n", ft_atoi(str));
	return (0);

}
