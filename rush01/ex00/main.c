/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaragat <smaragat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 21:23:36 by smaragat          #+#    #+#             */
/*   Updated: 2026/03/08 08:08:48 by smaragat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);
void	init_grid(int base[4][4]);
int		parse_input(char *arg, int views[16]);
int		solve(int base[4][4], int pos, int views[16]);
void	print_grid(int base[4][4]);

int	main(int argc, char **argv)
{
	char	*arg;
	int		base[4][4];
	int		views[16];

	if (argc != 2 || !parse_input(arg, views))
	{
		ft_putstr("Invalid arguments\n");
		return (0);
	}
	arg = argv[1];
	init_grid(base);
	if (solve(base, 0, views))
		print_grid(base);
	else
		ft_putstr("No solution\n");
	return (0);
}
