/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_un.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <lraggio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 18:47:58 by lraggio           #+#    #+#             */
/*   Updated: 2024/09/29 02:35:34 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_print_un(unsigned int n)
{
	int		i;
	char	*s;

	i = 0;
	s = ft_utoa_base(n, 10, "0123456789");
	i = ft_print_string(s);
	free (s);
	return (i);
}
