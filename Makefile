OBJ0 = Colleen.o
OBJ1 = Grace.o
OBJ2 = Sully.o
FLAG= -Wall -Werror -Wextra

ex00: $(OBJ0)
	gcc $(FLAG) -o $@ $^

ex01: $(OBJ1)
	gcc $(FLAG) -o $@ $^

ex02: $(OBJ2)
	gcc $(FLAG) -o $@ $^

%.o: %.c 
	gcc -c $< -o $@

clean:
	rm -f ex00 ex01 ex02 *.o

.PHONY: clean