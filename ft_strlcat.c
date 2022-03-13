/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhkim <suhkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 17:54:41 by suhkim            #+#    #+#             */
/*   Updated: 2022/03/13 18:48:27 by suhkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	d_len;
	size_t	s_len;

	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	i = 0;
	if (dstsize == 0)
		return (s_len + dstsize);
	while (*(src + i) != '\0' && d_len + i < dstsize - 1)
	{
		*(dst + d_len + i) = *(src + i);
		i++;
	}
	*(dst + d_len + i) = '\0';
	if (dstsize <= d_len)
		return (s_len + dstsize);
	else
		return (s_len + d_len);
}
