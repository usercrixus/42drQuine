OBJ0 = Colleen.o
OBJ1 = Grace.o
OBJ2 = Sully.o
FLAG= -Wall -Werror -Wextra

Colleen: $(OBJ0)
	gcc $(FLAG) -o $@ $^

Grace: $(OBJ1)
	gcc $(FLAG) -o $@ $^

Sully: $(OBJ2)
	gcc $(FLAG) -o $@ $^

%.o: %.c 
	gcc -c $< -o $@

clean:
	rm -f *.o

fclean: clean
	rm -f Colleen Grace Sully

.PHONY: clean