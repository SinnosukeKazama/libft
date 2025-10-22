#コンパイラ
CC	:= cc
#コンパイルオプション
CFLAGS	:= -Wall -Wextra -Werror
#実行ファイル名（仮
TARGET	:=
#静的ライブラリ名
NAME	:= libft.a
#コンパイルするファイル.ディレクトリ内のすべての.cファイル
SRCS	:=ft_toupper.c ft_tolower.c ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strdup.c ft_strchr.c ft_memset.c ft_memmove.c ft_memcpy.c ft_memcmp.c ft_memchr.c ft_isprint.c ft_isdigit.c ft_isascii.c ft_isalpha.c ft_isalnum.c ft_calloc.c ft_bzero.c ft_atoi.c
#オブジェクトファイル SRCSの.c から.oへ書き換える。
OBJS	:= $(SRCS:.c=.o)
#デバッグ用
$(warning $(OBJS))
##################################
#静的ファイル生成
$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

#上
all: $(NAME)
#依存関係。.cから.o作成：コンパル指定、依存ファイル名に置き換え。ターゲットファイル名に置き換え。
%.o: %.c
	$(CC) -c $< -o $@

#.o 実行ファイル　.dを削除
clean:
	rm -f $(OBJS)
#Make clean +静的ファイル削除
fclean: clean
	rm -f $(NAME)

#fclean +all
re: fclean all

#もしカレントディレクトリに同名ファイルがあったときの対策。
.PHONY: all clean fclean re
