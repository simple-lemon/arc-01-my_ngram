SRC = ngram.c
TARGET = my_ngram
CC = gcc
CFLAGS = -Wall -Wextra -Werror

$(TARGET): $(SRC)
  $(CC) $(CFLAGS) -o $@ $^  
.PHONY:  fclean
fclean:
  rm -rf $(TARGET)
re: fclean