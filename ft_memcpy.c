/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhkim <suhkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 16:58:48 by suhkim            #+#    #+#             */
/*   Updated: 2022/03/22 21:22:52 by suhkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dptr;
	unsigned char	*sptr;

	if (dst == src)
		return (dst);
	sptr = (unsigned char *)src;
	dptr = (unsigned char *)dst;
	while (n)
	{
		*dptr++ = *sptr++;
		n--;
	}
	return (dst);
}
