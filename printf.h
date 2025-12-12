/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czahi <czahi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 10:30:28 by czahi             #+#    #+#             */
/*   Updated: 2025/12/09 15:16:22 by czahi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

#include <stdarg.h>
#include <unistd.h>

int	ft_printf(const char *, ...);
int	ft_putchar(char c);
int    ft_putstr(char *s);
int	ft_putnbr(int n);
int ft_putnbr_unsigned(unsigned int n);

#endif