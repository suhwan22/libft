/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhkim <suhkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 19:01:36 by suhkim            #+#    #+#             */
/*   Updated: 2022/03/13 19:11:41 by suhkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *sptr;

	sptr = (char *)s;
	if (c == 0)
		return (sptr + ft_strlen(s));
	while (*sptr)
	{
		if (*sptr == (char)c)
			return (sptr);
		sptr++;
	}
	return (NULL);
}
