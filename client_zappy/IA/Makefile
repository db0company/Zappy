##
## Makefile for Zappy in ./client_zappy/IA
## 
## Made by di-mar_j
## Login   <di-mar_j@epitech.net>
## 
## Started on  Thu Jun 23 22:12:26 2011 di-mar_j
## Last update Sun Jul 10 23:15:49 2011 di-mar_j
##

NAME		=	client_zappy_IA

## Directories

INCLUDE		=	-I../include/			\
			-I../../common/include/		\
			-I../../lib/network/include	\
			-I../../lib/List/include

LIB_DIR		=	../../lib/

## Files Prefixes


## Sources

SRCS		=	ia.c					\
			gere.c					\
			../../common/src/time.c

## Libraries
LIB		=	-L$(LIB_DIR)/network -lnet		\
			-L$(LIB_DIR)/List -llist



## functions
OBJS		=	$(SRCS:.c=.o)

RM		=	rm -f

CC		=	gcc
CFLAGS		+=	-W -Wall -Wextra -ggdb

## RULES

all		:	$(NAME)

$(NAME)		:	lib $(OBJS)
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME) $(LIB)

# libs
lib		:
			@(cd $(LIB_DIR) && make)

libre		:
			@(cd $(LIB_DIR) && make re)

libclean	:
			@(cd $(LIB_DIR) && make clean)

libfclean	:
			@(cd $(LIB_DIR) && make fclean)

## clean
clean		:	libclean
			$(RM) $(OBJS)

fclean		:	libfclean clean
			$(RM) $(NAME)

## re
re		:	fclean libre all

.c.o		:
			$(CC) -c $(CFLAGS) $< -o $(<:.c=.o) $(INCLUDE)

