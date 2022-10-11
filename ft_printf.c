/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 20:39:29 by ktunchar          #+#    #+#             */
/*   Updated: 2022/10/11 17:37:12 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int  check_percent(char s, va_list args)
{
    int count;

	count = 0;
    if (s == 'c')
		count += ft_putchar_count(va_arg(args,int));
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
    printf("\nreturn value : %d\n",ft_printf("my alpha is %c \n%c",'a','b'));
	printf("-----------------\n");
    printf("\nreturn value is : %d\n",printf("my alpha is %c \n%c",'a','b'));
	
}
*/