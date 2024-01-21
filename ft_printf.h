/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugao <yugao@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 03:28:21 by yugao             #+#    #+#             */
/*   Updated: 2024/01/21 02:04:43 by yugao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H
# include "./Libft/libft.h"
# include <stdarg.h>

size_t	ft_putinbr_fd(unsigned int n, int fd);
size_t	dec_to_hex(unsigned int num, int is_mayuscura);
size_t	ft_print_pointer(void *ptr);
int		is_c_legal(char c);
size_t	count_arg(const char *str);
size_t	asistant_print(int type, va_list arg);
int		ft_printf(char const *str, ...);

#endif
