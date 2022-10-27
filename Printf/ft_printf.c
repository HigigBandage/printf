/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfinn <dfinn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:34:14 by dfinn             #+#    #+#             */
/*   Updated: 2022/10/27 14:54:11 by dfinn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

(va_arg(args,

#include "libft.h"
#include "ft_printf.h"

char	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
		
int	ft_format(va_list args, const char format)
{
	int	print_lenght;

	print_lenght = 0;
	if (format == c)
		print_lenght += ft_putchar(va_arg, args, char);
	if (format == s)
		print_lenght += ft_putstr(va_arg, args, char *);

}

int	ft_printf(const char *format, ...)
{
	int		i;
	va_list	args;
	int		print_lenght;

	i = 0;
	print_lenght = 0;
	va_start(args, format);
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1])
		{
			print_lenght += ft_format(args, str[i + 1]);
			i++;
		}
		else
		{
			print_lenght += ft_putchar(format);
			i++;
		}
		va_ends(args);
		return (print_lenght);
	}
}
