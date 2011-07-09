/*
** map_random_stone.c for  in /home/solvik/tek2/proj/Zappy/server_zappy
**
** Made by solvik blum
** Login   <blum_s@epitech.net>
**
** Started on  Sat Jul  9 18:41:58 2011 solvik blum
** Last update Sat Jul  9 18:41:58 2011 solvik blum
*/

#include	<stdlib.h>
#include	<stdio.h>

#include	"tserver.h"
#include	"stone.h"
#include	"conf.h"

static const e_stone stonetab[] =
  {
    LINEMATE,
    DERAUMERE,
    SIBUR,
    MENDIANE,
    PHIRAS,
    THYSTAME
  };

void		map_random_stone(void)
{
  static size_t	i = 0;

  set_box_addstone(rand() % get_map_width(),
		   rand() % get_map_height(),
		   stonetab[i++],
		   rand() % map_nb_stones);
  i = (i < (sizeof(stonetab) / sizeof(*stonetab)) ? i : 0);
}
