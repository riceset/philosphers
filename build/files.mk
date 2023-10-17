FILES		=	main.c

SRC_DIR = sources
OBJ_DIR		=	objects

SRCS		=	$(addprefix $(SRC_DIR)/, $(FILES))
OBJS		=	$(addprefix $(OBJ_DIR)/, $(SRCS:.c=.o))
