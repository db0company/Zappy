/*
** zappy_protocol.h for  in /home/solvik/tek2/proj/Zappy/server_zappy/modules/zappy_protocol
**
** Made by solvik blum
** Login   <blum_s@epitech.net>
**
** Started on  Wed Jun 29 10:24:19 2011 solvik blum
** Last update Sat Jul  9 03:03:26 2011 ramnes
*/

#ifndef		ZAPPY_PROTOCOL_H_
# define	ZAPPY_PROTOCOL_H_

#include	"napi.h"
#include	"module.h"

extern t_module	*zappy_module;
t_module	*get_module(void);

int		zappy_avance(t_fds *, char *);
int		zappy_droite(t_fds *, char *);
int		zappy_gauche(t_fds *, char *);
int		zappy_voir(t_fds *, char *);
int		zappy_inventaire(t_fds *, char *);
int		zappy_prend(t_fds *, char *);
int		zappy_pose(t_fds *, char *);
int		zappy_expulse(t_fds *, char *);
int		zappy_broadcast(t_fds *, char *);
int		zappy_incantation(t_fds *, char *);
int		zappy_connect_nbr(t_fds *, char *);
int		zappy_fork(t_fds *, char *);

e_stone		is_stone(char *);
uint		get_ressource_id(char *);

int		first_quad(int, void *);
int		second_quad(int, void *);
int		third_quad(int, void *);
int		fourth_quad(int, void *);

int		get_sound_direction(int, void *);

bool		handshaking(t_fds *, char *);
bool		disconnection(fds);
double		timer(void);
bool		update(double);

bool		zappy_handshaking(t_fds *, char *);
bool		zappy_disconnection(fds);
double		zappy_timer(void);
bool		zappy_update(double);

#endif		/* !ZAPPY_PROTOCOL_H_ */
