/*
** print_warning.c for My FTP in ./client/src/error
** 
** Made by lepage_b
** Login   <lepage_b@epitech.net>
** 
** Started on  Thu Mar 17 21:40:11 2011 lepage_b
** Last update Sun Apr 03 22:43:34 2011 lepage_b
*/

#include	<stdio.h>

void		print_warning(char *msg)
{
  fprintf(stderr, "Warning: %s\n", msg);
}

void		print_pwarning(char *cmd)
{
  perror(cmd);
}