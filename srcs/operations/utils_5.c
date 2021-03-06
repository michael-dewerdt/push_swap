/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_5.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mea <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 14:10:57 by mea               #+#    #+#             */
/*   Updated: 2022/03/11 09:52:50 by mea              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	*copyposnbinarray(int *arr, t_stack **stack_a)
{
	t_stack	*tmp;
	int		i;

	i = 0;
	tmp = *stack_a;
	while (tmp)
	{
		if (tmp->nb > 0)
		{
			arr[i] = tmp->nb;
			i++;
		}
		tmp = tmp->next;
	}
	return (arr);
}

int	sizeofmyposarray(t_stack **stack_a)
{
	t_stack	*tmp;
	int		i;

	i = 0;
	tmp = *stack_a;
	while (tmp)
	{
		if (tmp->nb >= 0)
			i++;
		tmp = tmp->next;
	}
	return (i);
}

int	sizeofmynegarray(t_stack **stack_a)
{
	t_stack	*tmp;
	int		i;

	i = 0;
	tmp = *stack_a;
	while (tmp)
	{
		if (tmp->nb < 0)
			i++;
		tmp = tmp->next;
	}
	return (i);
}
