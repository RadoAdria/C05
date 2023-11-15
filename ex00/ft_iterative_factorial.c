/* ************************************************************************** */
/*
                */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rado andria   <adresse@ecole.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 12:11:30 by rado andria       #+#    #+#             */
/*   Updated: 2023/09/29 12:11:30 by rado andria      ###   ########.fr       */
/*
                */
/* ************************************************************************** */
#include "ft_iterative_factorial.h"

int	ft_iterative_factorial(int nb)
{
	int	facto;
	int	i;

	i = 1;
	facto = 1;
	if (nb < 0 || nb - (int) nb != 0)
		return (0);
	else
	{
		while (++i <= nb)
		{
			facto *= i;
		}
	}
	return (facto);
}
