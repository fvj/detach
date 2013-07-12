all:
	gcc main.c -o detach -O3 -Wall

clean:
	rm -rf detach *.o 

install:
	mv detach /usr/bin/
