/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_in_arr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpaladii <vpaladii@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 05:47:00 by vpaladii          #+#    #+#             */
/*   Updated: 2018/01/06 05:47:00 by vpaladii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		min_in_arr(int *arr, int size)
{
	int min;

	min = 2147483647;
	while (size--)
	{
		if (*arr < min)
			min = *arr;
		arr++;
	}
	return (min);
}
