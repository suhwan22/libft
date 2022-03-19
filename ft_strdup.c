/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhkim <suhkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 18:21:40 by suhkim            #+#    #+#             */
/*   Updated: 2022/03/18 20:47:23 by suhkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*dstr;

	len = ft_strlen(s1);
	dstr = (char *)malloc(sizeof(char) * (len + 1));
	if (dstr == NULL)
		return (NULL);
	ft_strlcpy(dstr, (char *)s1, len + 1);
	return (dstr);
}
