#コンパイラ
CC	:= cc
#コンパイルオプション
CFLAGS	:= -Wall -Wextra -Werror
#実行ファイル名（仮
TARGET	:=
#静的ライブラリ名
NAME	:= libft.a
#コンパイルするファイル.ディレクトリ内のすべての.cファイル
SRCS	:=ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_tolower.c ft_toupper.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
SRCSB	:= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c ft_lstmap.c $(SRCS)
#オブジェクトファイル SRCSの.c から.oへ書き換える。
OBJS	:= $(SRCS:.c=.o)
OBJSB	:= $(SRCSB:.c=.o)

##################################

#静的ファイル生成
$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)
	
bonus: $(OBJS) $(OBJSB)
	ar rc $(NAME) $(OBJS) $(OBJSB)
	ranlib $(NAME)
#上
all: $(NAME)
#依存関係。.cから.o作成：コンパル指定、依存ファイル名に置き換え。ターゲットファイル名に置き換え。
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

#.o 実行ファイル　.dを削除
clean:
	rm -f $(OBJS) $(OBJSB)
#Make clean +静的ファイル削除
fclean: clean
	rm -f $(NAME)

#fclean +all
re: fclean all

#もしカレントディレクトリに同名ファイルがあったときの対策。
.PHONY: all clean fclean re bonus
