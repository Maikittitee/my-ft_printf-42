/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 20:39:29 by ktunchar          #+#    #+#             */
/*   Updated: 2022/10/12 00:15:01 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int  check_percent(char s, va_list args)
{
    int count;

	count = 0;
     if (s == 'c')
	 	count += ft_putchar_count(va_arg(args,int));
    if (s == 's')
        count += ft_putstr_count(va_arg(args,char*));
    if (s == 'd' || s == 'i')
		count += ft_putnbr_d_count(va_arg(args,int));
    if (s == 'x')
	 	count += ft_putnbr_x_count(va_arg(args,unsigned int));
    if (s == 'X')
	 	count += ft_putnbr_ux_count(va_arg(args,unsigned int));
    if (s == 'u')
	 	count += ft_putnbr_u_count(va_arg(args,unsigned int));
    if (s == '%')
        count += ft_putchar_count('%');
	return (count);

}

int ft_printf(const char *str, ...)
{
    va_list args;
    int i;
    int count;

    i = 0;
    count = 0;

    va_start(args, str);
    while (str[i])
    {
        if (str[i] == '%')
        {
            count += check_percent(str[i + 1], args);
			i++;
        }
        else
        {
            ft_putchar_count(str[i]);
            count++;
        }
		i++;
    } 
    return (count);
}
/*
int main()
{
    //printf("\n%d\n",ft_printf("Hello"));
    // printf("\nreturn value : %d\n",ft_printf("%d\n",2));
	// printf("-----------------\n");
    // printf("\nreturn value is : %d\n",printf("%d\n",2));
    printf("%%");

    return (0);
	
}*/
