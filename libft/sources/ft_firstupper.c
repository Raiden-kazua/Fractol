/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_firstupper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/17 13:06:39 by bsouchet          #+#    #+#             */
/*   Updated: 2016/05/17 13:09:16 by bsouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_firstupper(char *str)
{
	if (str[0] >= 97 && str[0] <= 122)
		str[0] -= 32;
	return (str);
}
