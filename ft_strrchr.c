/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhkim <suhkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 19:14:21 by suhkim            #+#    #+#             */
/*   Updated: 2022/03/13 19:28:08 by suhkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char *s, int c)
{
	char	*ans;
	char	*sptr

	if (c == 0)
		return (sptr + ft_strlen(s));
	ans = NULL;
	while (*sptr)
	{
		if (*sptr == (char)c)
			ans = sptr;
		sptr++;
	}
	return (ans);
}
