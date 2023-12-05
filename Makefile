OBJ = my_ngram.o
SRC = my_ngram.c
CFLAGS = -Wall -Wextra -Werror
TARGET = my_ngram
CC = gcc

.PHONY : all clean fclean re

all : $(TARGET)
$(TARGET) : $(OBJ)
	gcc $(CFLAGS) -o $(TARGET) $(OBJ)

$(OBJ) : $(SRC)
	gcc $(CFLAGS) -c $(SRC)

clean:
	rm -f *.o

fclean: clean
	rm -f $(TARGET)

re: fclean all
