/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaragat <smaragat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 01:15:58 by smaragat          #+#    #+#             */
/*   Updated: 2026/03/08 03:26:12 by smaragat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	parse_input(char *arg, int views[16])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (arg[i])
	{
		if (arg[i] >= '1' && arg[i] <= '4')
		{
			if (j >= 16)
				return (0);
			views[j++] = arg[i] - '0';
			i++;
			if (arg[i] != ' ' && arg[i] != '\0')
				return (0);
		}
		else if (arg[i] == ' ')
			i++;
		else
			return (0);
	}
	return (j == 16);
}
