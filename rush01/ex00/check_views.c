/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_views.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaragat <smaragat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 06:49:44 by smaragat          #+#    #+#             */
/*   Updated: 2026/03/08 06:49:45 by smaragat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_view_left(int row[4], int view)
{
	int	i;
	int	count;
	int	max_height;

	i = 0;
	count = 0;
	max_height = 0;
	while (i < 4)
	{
		if (row[i] > max_height)
		{
			count++;
			max_height = row[i];
		}
		i++;
	}
	return (count == view);
}

int	check_view_right(int row[4], int view)
{
	int	i;
	int	count;
	int	max_height;

	i = 3;
	count = 0;
	max_height = 0;
	while (i >= 0)
	{
		if (row[i] > max_height)
		{
			count++;
			max_height = row[i];
		}
		i--;
	}
	return (count == view);
}

int	check_view_top(int base[4][4], int col, int view)
{
	int	i;
	int	count;
	int	max_height;

	i = 0;
	count = 0;
	max_height = 0;
	while (i < 4)
	{
		if (base[i][col] > max_height)
		{
			count++;
			max_height = base[i][col];
		}
		i++;
	}
	return (count == view);
}

int	check_view_bottom(int base[4][4], int col, int view)
{
	int	i;
	int	count;
	int	max_height;

	i = 3;
	count = 0;
	max_height = 0;
	while (i >= 0)
	{
		if (base[i][col] > max_height)
		{
			count++;
			max_height = base[i][col];
		}
		i--;
	}
	return (count == view);
}
