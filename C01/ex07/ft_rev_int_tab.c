/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpesaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 19:47:22 by lpesaro           #+#    #+#             */
/*   Updated: 2022/09/14 12:58:44 by lpesaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	f;
	int	swap;

	i = 0;
	f = size - 1;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab[f];
		tab[f] = swap;
		i++;
		f--;
	}
}
