/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <JFikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 16:04:00 by JFikents          #+#    #+#             */
/*   Updated: 2024/03/06 16:35:43 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "level_1.h"

void	parse_input(char *input, t_biders **biders)
{
	char	**s_input;

	s_input = ft_split(input, ',');
	*biders = ft_calloc(1, sizeof(t_biders));
	while (s_input)
	{
		search_bider(biders, ft_atoi(s_input[0]));
		s_input++;
	}
}

int	main(int argc, char **argv)
{
	t_biders	*biders;

	if (argc < 2)
		return (ft_printf("Error\n"), 1);
	parse_input(argv[1], &biders);
	return (0);
}
