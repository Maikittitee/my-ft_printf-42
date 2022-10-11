/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 20:35:53 by ktunchar          #+#    #+#             */
/*   Updated: 2022/10/11 23:14:26 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
#define PRINTF_H


#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <string.h>
#include <stdio.h>


int ft_printf(const char *str, ...);
int ft_putchar_count(char c);
int ft_putnbr_d_count(int n);
int	ft_putnbr_o_count(int n);
int	ft_putnbr_x_count(int n);
int	ft_putnbr_ux_count(int n);
int	ft_putnbr_u_count(unsigned int n);

#endif