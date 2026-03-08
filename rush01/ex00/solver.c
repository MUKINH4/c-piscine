/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaragat <smaragat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 02:38:31 by smaragat          #+#    #+#             */
/*   Updated: 2026/03/08 07:42:26 by smaragat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb);
void	ft_putchar(char c);
int		is_safe(int base[4][4], int row, int col, int num);
int		check_view_left(int row[4], int view);
int		check_view_right(int row[4], int view);
int		check_view_top(int base[4][4], int col, int view);
int		check_view_bottom(int base[4][4], int col, int view);

int	check_all_views(int base[4][4], int views[16])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (!check_view_top(base, i, views[i]))
			return (0);
		if (!check_view_bottom(base, i, views[4 + i]))
			return (0);
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (!check_view_left(base[i], views[8 + i]))
			return (0);
		if (!check_view_right(base[i], views[12 + i]))
			return (0);
		i++;
	}
	return (1);
}

int	solve(int base[4][4], int pos, int views[16])
{
	int	row;
	int	col;
	int	num;

	if (pos == 16)
		return (check_all_views(base, views));
	row = pos / 4;
	col = pos % 4;
	num = 1;
	while (num <= 4)
	{
		if (is_safe(base, row, col, num))
		{
			base[row][col] = num;
			if (solve(base, pos + 1, views))
				return (1);
			base[row][col] = 0;
		}
		num++;
	}
	return (0);
}
