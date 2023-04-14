/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_cub_struct.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkochary <rkochary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 17:33:33 by rkochary          #+#    #+#             */
/*   Updated: 2023/04/14 18:25:34 by rkochary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

    // char **map;
    // char *NO;
    // char *SO;
    // char *WE;
    // char *EA;
    // int f[3] ;
    // int c[3] ;


#include "cub.h"

void init_cub(t_map *map, t_cub *cub)
{
    int i;
   // cub->map  = (char **)malloc(sizeof(char *) * (countStringLength(map->texture) + 1));

    cub->map = map->map;
    i = 0;
    cub->NO = NULL;
    cub->WE = NULL;
    cub->SO = NULL;
    cub->EA = NULL;
    while(map->texture[i])
    {
        if(map->texture[i][0] == 'N' && map->texture[i][1] == 'O')
        {
           // cub->NO = malloc((ft_strlen(map->texture[i]) + 1) * sizeof(char));
            cub->NO = map->texture[i];
        }
        if(map->map[i][0] == 'S' && map->map[i][1] == 'O')
        {
            cub->SO = map->map[i];
        }
        if(map->map[i][0] == 'W' && map->map[i][1] == 'E')
        {
            cub->WE = map->map[i];
        }
        if(map->map[i][0] == 'E' && map->map[i][1] == 'A')
        {
            cub->EA = map->map[i];
        }
     i++;   
    }
    i = 0;
    while(i < 3)
    {        
        cub->c[i] = map->c[i];
        cub->f[i] = map->f[i];
        i++;
    }
}