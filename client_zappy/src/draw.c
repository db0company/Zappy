/*
** draw.c for Zappy in ./client_zappy/src
** 
** Made by di-mar_j
** Login   <di-mar_j@epitech.net>
** 
** Started on  Thu Jun 23 22:12:26 2011 di-mar_j
** Last update Sun Jul 10 23:15:49 2011 di-mar_j
*/

#include "client_zappy.h"

void		draw_text(t_visu *visu, char *text, int coor[2])
{
  SDL_Surface	*texte;
  SDL_Color	couleurNoire;
  SDL_Rect	position;
  SDL_Surface	*base;

  texte = NULL;
  memset(&couleurNoire, 0, sizeof(couleurNoire));
  base = visu->info;
  position.x = coor[0];
  position.y = coor[1];
  texte = TTF_RenderText_Blended(visu->police, text, couleurNoire);
  SDL_BlitSurface(texte, NULL, base, &position);
  SDL_FreeSurface(texte);
}

void		draw_info(t_visu *v)
{
  SDL_Rect	pos;
  int		coor[2];

  if (!v->info)
    v->info =  SDL_CreateRGBSurface(SDL_HWSURFACE | SDL_DOUBLEBUF, WIDTH,
				    32, 32, 0, 0, 0, 0);
  pos.x = 0;
  pos.y = 32;
  SDL_FillRect(v->info, NULL, SDL_MapRGB(v->screen->format,  253, 63, 146));
  coor[1] = 0;
  coor[0] = 0;
  draw_text(v, "Linemate:", coor);
  coor[0] = 100;
  draw_text(v, "Deraumere:", coor);
  coor[0] = 200;
  draw_text(v, "Sibur:", coor);
  coor[0] = 300;
  draw_text(v, "Mendiane:", coor);
  coor[0] = 400;
  draw_text(v, "Phiras:", coor);
  coor[0] = 500;
  draw_text(v, "Thystame:", coor);
  coor[0] = 600;
  draw_text(v, "Food:", coor);
}

void		draw_stones(t_visu *v, int x, int y)
{
  SDL_Surface	*texte;
  SDL_Color	couleurNoire;
  SDL_Rect	position;
  char		*nb;
  t_box		*box;
  int		pos[2];

  texte = NULL;
  nb = NULL;
  memset(&couleurNoire, 0, sizeof(couleurNoire));
  position.x = x * 64;
  position.y = y * 64;
  pos[0] = x;
  pos[1] = y;
  if (!(box = get_data_as_arg(v->map, match_box, pos)))
    return ;
  asprintf(&nb, "%s%s%s%s%s%s%s ", box->food ?  "F" : "",
	   box->linemate ?  "L" : "",
	   box->deraumere ?  "D" : "", box->sibur ?  "S" : "",
	   box->mendiane ?  "M" : "",
	   box->phiras ?  "P" : "", box->thystame ?  "T" : "");
  texte = TTF_RenderText_Blended(v->police, nb, couleurNoire);
  SDL_BlitSurface(texte, NULL, v->draw, &position);
  SDL_FreeSurface(texte);
  free(nb);
}

void		draw_map(t_visu *v)
{
  SDL_Rect	pos;
  SDL_Surface	*img;
  int		x;
  int		y;

  x = 0;
  if (!v->draw)
    v->draw = SDL_CreateRGBSurface(SDL_HWSURFACE | SDL_DOUBLEBUF,
				   v->width * 64,
				   (v->height) * 64, 32, 0, 0, 0, 0);
  if (!(img = SDL_LoadBMP("data/grass.bmp")))
    return;
  while (x < v->width)
    {
      y = 0;
      while (y < v->height)
	{
	  pos.x = x * 64;
	  pos.y = y * 64;
	  SDL_BlitSurface(img, NULL, v->draw, &pos);
	  y++;
	}
      x++;
    }
  SDL_FreeSurface(img);
}

void		draw_player(void *p, void *v)
{
  SDL_Rect	pos;
  SDL_Surface	*img;

  pos.y = 64 * ((t_player *)p)->y;
  pos.x = 64 * ((t_player *)p)->x;
  img = SDL_LoadBMP("data/blob.bmp");
  if (!img)
    return;
  SDL_SetColorKey(img, SDL_SRCCOLORKEY, SDL_MapRGB(img->format, 0, 0, 0));
  SDL_BlitSurface(img, NULL, ((t_visu *)v)->draw, &pos);
  SDL_FreeSurface(img);
}
