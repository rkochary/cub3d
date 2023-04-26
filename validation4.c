/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation4.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkochary <rkochary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:54:06 by aremkrtc          #+#    #+#             */
/*   Updated: 2023/04/26 16:01:44 by rkochary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub.h"

void	init_vc(t_valid *v)
{
	v->foundmap = 0;
	v->foundtextures = 0;
	v->foundfloorcolor = 0;
	v->line = NULL;
}

int	validate_color_texture(char **texture, int numLines)
{
	t_valid	v;
	int		i;

	i = 0;
	init_vc(&v);
	while (i < numLines)
	{
		v.line = texture[i];
		if (!v.foundtextures && (ft_strncmp(v.line, "NO", 2) == 0 \
		|| ft_strncmp(v.line, "SO", 2) == 0 || \
		ft_strncmp(v.line, "WE", 2) == 0 || ft_strncmp(v.line, "EA", 2) == 0))
		{
			v.foundtextures = 1;
			continue ;
		}
		if (!v.foundfloorcolor && ft_strncmp(v.line, "F", 1) == 0)
		{
			v.foundfloorcolor = 1;
			continue ;
		}
		i++;
	}
	if (!v.foundtextures || !v.foundfloorcolor)
		return (ft_perror("Error: Textures or color element not found.\n"));
	return (1);
}
