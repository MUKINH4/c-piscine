/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_grid.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaragat <smaragat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 00:41:51 by smaragat          #+#    #+#             */
/*   Updated: 2026/03/08 06:44:00 by smaragat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	init_grid(int base[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			base[i][j] = 0;
			j++;
		}
		i++;
	}
}

void	print_grid(int base[4][4])
{
	int	row;
	int	col;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			ft_putchar(base[row][col] + '0');
			if (col < 3)
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
