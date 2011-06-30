/*
** get_node_as_arg.c for  in /Users/Lifely/Developer/project/Zappy/lib/List
** 
** Made by Julien Di Marco
** Login   <Lifely@epitech.net>
** 
** Started on  Thu Jun 30 05:36:02 2011 Julien Di Marco
** Last update Thu Jun 30 05:36:02 2011 Julien Di Marco
*/

#include	<stdlib.h>
#include	"list.h"

t_node *	get_node_as_arg(t_list * list,
				bool (*match_node)(t_node *, void *),
				void * arg)
{
  if (list)
    {
      list->cur = list->begin;
      while (list->cur)
	{
	  if (match_node(list->cur, arg))
	    return (list->cur);
	  list->cur = list->cur->next;
	}
    }
  return (NULL);
}

