/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpesaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 11:45:51 by lpesaro           #+#    #+#             */
/*   Updated: 2022/09/12 15:00:49 by lpesaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print(int a, int b, int c, int d)
{
	a += 48;
	b += 48;
	c += 48;
	d += 48;
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (a != 57 || b != 56)
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	ft_print_comb2(void)
{
	int	i[4];

	i[0] = 0;
	while (i[0] <= 9)
	{
		i[1] = 0;
		while (i[1] <= 9)
		{
			i[2] = i[0];
			while (i[2] <= 9)
			{
				i[3] = i[1] + 1;
				while (i[3] <= 9)
				{
					print(i[0], i[1], i[2], i[3]);
					i[3]++;
				}
			i[2]++;
			}
		i[1]++;
		}
	i[0]++;
	}
}
