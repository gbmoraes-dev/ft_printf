/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putcolor.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoraes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 22:44:57 by gamoraes          #+#    #+#             */
/*   Updated: 2024/02/06 22:45:04 by gamoraes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putcolor(char *s, char *color)
{
	int	size;

	size = 0;
	size += ft_putstr(color);
	size += ft_putstr(s);
	size += ft_putstr(RESET);
	return (size);
}
