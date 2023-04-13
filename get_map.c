/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkochary <rkochary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 17:11:06 by rkochary          #+#    #+#             */
/*   Updated: 2023/04/13 17:11:12 by rkochary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub.h"

static void	throwmessage(void)
{
	perror("Error");
	exit(1);
}

int	getheightofmap(char **map)
{
	int	i;

	i = 0;
	while (map[i] != NULL)
		i++;
	return (i);
}

void	helper(int cond)
{
	if (cond)
		throwmessage();
}
