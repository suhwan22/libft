/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhkim <suhkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 14:15:17 by suhkim            #+#    #+#             */
/*   Updated: 2022/03/22 21:17:14 by suhkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*sptr;

	sptr = (const unsigned char *)s;
	while (n)
	{
		if (*sptr == (unsigned char)c)
			return ((void *)sptr);
		sptr++;
		n--;
	}
	return (0);
}
