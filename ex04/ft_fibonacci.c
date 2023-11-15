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
#include "ft_fibonacci.h"

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1 || index == 2)
		return (1);
	else
	{
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
}
