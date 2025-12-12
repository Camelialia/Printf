/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czahi <czahi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 10:28:38 by czahi             #+#    #+#             */
/*   Updated: 2025/12/09 15:49:43 by czahi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
    return (1);
}

int ft_format(va_list args, const char c)
{
    if(c == 'c')
        return (ft_putchar(va_arg(args, int)));
    else if(c == 'i' || c == 'd')
        return (ft_putnbr(va_arg(args, int)));
    else if(c == 's')
        return (ft_putstr(va_arg(args, char *)));
    else if(c == 'u')
        return (ft_putnbr_unsigned(va_arg(args, unsigned int)));
    return(0);
}

int ft_printf(const char *str, ...)
{
    va_list args;
    int i;
    int count;

    count = 0;
    i = 0;
    va_start(args, str);
    while (str[i])
    {
        if (str[i] == '%')
        {
            i++;
            count += ft_format(args, str[i]);
        }
        else
        {
            count += ft_putchar(str[i]);
        }
        i++;
    }
    va_end(args);
    return (count);
}

int main(void)
{
    ft_printf("Hello %c World %c", 'A', 'B');
    //printf("Hello %c World %c", 'A', 'B');
    ft_printf("\n");
    ft_printf("Hello %d", 42);
    ft_printf("Lalala %u", 300000);
}
