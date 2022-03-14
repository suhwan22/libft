/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhkim <suhkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 20:43:41 by suhkim            #+#    #+#             */
/*   Updated: 2022/03/14 21:06:12 by suhkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long	ans;
	int		sign;

	ans = 0;
	sign = 1;
	while ((9 <= *str && *str <= 13) || *str == 32)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*(str++) == '-')
			sign = -1;
	}
	while (*str && *str >= '0' && *str <= '9')
	{
		ans = 10 * ans + (*str - '0');
		str++;
	}
	if (ans < 0)
}

#include <stdio.h>
#include <stlib.h>

int main()
{
	printf("%d\n", atoi(
}
