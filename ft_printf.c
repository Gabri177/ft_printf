/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugao <yugao@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 22:03:15 by yugao             #+#    #+#             */
/*   Updated: 2024/01/14 22:56:24 by yugao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

int	ft_printf(char const *str, ...)
{
	va_list	arg;
	char	buff[1024];

	va_start (arg, buff);
	va_end (arg);
}