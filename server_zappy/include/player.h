/*
** player.h for  in /home/solvik/tek2/proj/Zappy/server_zappy/src/protocol
**
** Made by solvik blum
** Login   <blum_s@epitech.net>
**
** Started on  Mon Jun 13 15:55:26 2011 solvik blum
** Last update Wed Jun 29 10:56:57 2011 solvik blum
*/

#ifndef PLAYER_H_
# define PLAYER_H_

#  include	"ztypes.h"
#  include	"list.h"

# include	"team.h"
# include	"net.h"

#define		player_data	((t_player *)(client->data))

typedef enum
  {
    NORTH = 0,
    EAST,
    SOUTH,
    WEST
  }		e_direction;

typedef struct	s_player
{
  uint		id;
  uint		level;
  int		x;
  int		y;
  t_list 	*stones;
  e_direction	direction;

  t_fds		*client;
  t_team	*team;

  bool		fork;
  uint		food;
  double	foodt;
}		t_player;

/*
** See destroy.c
*/

t_player        *player_destroy(t_player *);

#endif /* PLAYER_H_ */
