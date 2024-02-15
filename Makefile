TARGET: my_ngram
OBJ: my_ngram.o
SRC: my_ngram.c main.clean
CSFLAGS: -Wall -Wextra -Werror

.PHONY: all clean fclean re

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