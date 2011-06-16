
#ifndef		TSERV_H_
# define	TSERV_H_

#  include	"network.h"
#  include	"map.h"

typedef		struct
{
  t_map		map;
  t_list *	module;		// t_module
}		t_server;

uint		get_map_width(void);
uint		get_map_height(void);
t_box *		get_map(void);
uint		get_map_max(void);
t_box *		get_box(uint, uint);

void		set_map_width(uint);
void		set_map_height(uint);
void		set_map(t_box *);

#endif		/* !TSERV_H_ */