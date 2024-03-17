NAME = 

SERVER = server

CLIENT = client

SERVER_BONUS = server_bonus

CLIENT_BONUS = client_bonus


LIBFT = ./libft/libft.a

LIBFT_DIR = ./libft

INC = -I. -I $(LIBFT_DIR)

CC = cc

FLAGS = -Wall -Wextra -Werror

SRC_S = server.c

SRC_C = client.c

SRC_S_BONUS = server_bonus.c

SRC_C_BONUS = client_bonus.c


$(NAME): all

$(SERVER): $(LIBFT)
			$(CC) $(FLAGS) $(SRC_S) $(INC) $(LIBFT) -o $(SERVER)

$(CLIENT): $(LIBFT)
			$(CC) $(FLAGS) $(SRC_C) $(INC) $(LIBFT) -o $(CLIENT)

$(SERVER_BONUS): $(LIBFT)
			$(CC) $(FLAGS) $(SRC_S_BONUS) $(INC) $(LIBFT) -o $(SERVER_BONUS)

$(CLIENT_BONUS): $(LIBFT)
			$(CC) $(FLAGS) $(SRC_C_BONUS) $(INC) $(LIBFT) -o $(CLIENT_BONUS)


all: $(SERVER) $(CLIENT) $(SERVER_BONUS) $(CLIENT_BONUS)

mandatory: $(SERVER) $(CLIENT)

bonus: $(SERVER_BONUS) $(CLIENT_BONUS)

clean:
		rm -f $(SERVER) $(CLIENT) $(SERVER_BONUS) $(CLIENT_BONUS)
		$(MAKE) clean -C $(LIBFT_DIR)

$(LIBFT):
		$(MAKE) -C ./libft

fclean: clean
		$(MAKE) fclean -C $(LIBFT_DIR)

re: fclean all

m: mandatory

b: bonus

.PHONY: all clean fclean re mandatory bonus m b
