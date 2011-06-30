/*
** insert_data_before.c for  in /Users/Lifely/Developer/project/Zappy/lib/List
** 
** Made by Julien Di Marco
** Login   <Lifely@epitech.net>
** 
** Started on  Thu Jun 30 05:35:48 2011 Julien Di Marco
** Last update Thu Jun 30 05:35:48 2011 Julien Di Marco
*/

#include	<stdlib.h>
#include	"list.h"

bool		insert_data_before(t_list * list, t_node * node, void * data)
{
  t_node *	new;

  if ((new = new_node(data)))
    {
      if ((insert_node_before(list, node, new)))
	return (true);
      free(new);
    }
  return (false);
}

