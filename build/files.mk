FILES		=	main.c \
					input_validation/incorrect_input.c \
					input_validation/validators/incorrect_num_of_args.c \
					input_validation/validators/not_only_digits.c \
					input_validation/validators/wrong_num_philos.c \
					input_validation/validators/helpers/is_digit.c \
					input_validation/validators/helpers/my_atoi.c \
					setup_args/setup_args.c \
					setup_args/alloc_args.c \
					setup_args/init_args.c

SRC_DIR = sources
OBJ_DIR		=	objects

SRCS		=	$(addprefix $(SRC_DIR)/, $(FILES))
OBJS		=	$(addprefix $(OBJ_DIR)/, $(SRCS:.c=.o))
