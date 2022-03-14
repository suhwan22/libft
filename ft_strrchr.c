/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhkim <suhkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 19:14:21 by suhkim            #+#    #+#             */
/*   Updated: 2022/03/14 16:36:23 by suhkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*ans;
	const char	*sptr;

	sptr = s;
	if (c == 0)
		return ((char *)sptr + ft_strlen(s));
	ans = NULL;
	while (*sptr)
	{
		if (*(char *)sptr == (char)c)
			ans = sptr;
		sptr++;
	}
	return ((char *)ans);
}
