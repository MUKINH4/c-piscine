/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaragat <smaragat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 18:42:36 by hvanique          #+#    #+#             */
/*   Updated: 2026/03/02 11:45:18 by smaragat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_h(int x)
{
	int	coluna;

	coluna = 1;
	ft_putchar('A');
	while (coluna <= x - 2)
	{
		ft_putchar('B');
		coluna++;
	}
	if (x > 1)
		ft_putchar('C');
	ft_putchar('\n');
}

void	ft_f(int x)
{
	int	coluna;

	coluna = 1;
	ft_putchar('C');
	while (coluna <= x - 2)
	{
		ft_putchar('B');
		coluna++;
	}
	if (x > 1)
		ft_putchar('A');
	ft_putchar('\n');
}

void	ft_mid(int x, int y)
{
	int	linha;
	int	coluna;

	linha = 0;
	while (linha < y - 2)
	{
		ft_putchar('B');
		coluna = 0;
		while (coluna < x - 2)
		{
			ft_putchar(' ');
			coluna++;
		}
		if (y != 1 && x != 1 && x > 1)
			ft_putchar('B');
		ft_putchar('\n');
		linha++;
	}
}

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		ft_putstr("colunas e linhas deve ser maior que zero");
		return ;
	}
	ft_h(x);
	ft_mid(x, y);
	if (y > 1)
		ft_f(x);
}
