/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhkim <suhkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 16:00:01 by suhkim            #+#    #+#             */
/*   Updated: 2022/03/13 18:24:04 by suhkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*pt;
	unsigned char	value;

	pt = (unsigned char *)b;
	value = (unsigned char)c;
	while (len)
	{
		*pt++ = value;
		len--;
	}
	return (b);
}
