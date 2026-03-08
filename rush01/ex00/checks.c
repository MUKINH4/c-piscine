/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaragat <smaragat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 21:23:06 by smaragat          #+#    #+#             */
/*   Updated: 2026/03/08 07:41:42 by smaragat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_entry(char	*arg)
{
	int	i;

	i = 0;
	while (arg[i])
	{
		if (arg[i] >= '1' && arg[i] <= '4')
			return (1);
		else
			return (0);
		i++;
	}
	return (0);
}

int	is_safe(int base[4][4], int row, int col, int num)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (base[row][i] == num)
			return (0);
		if (base[i][col] == num)
			return (0);
		i++;
	}
	return (1);
}
