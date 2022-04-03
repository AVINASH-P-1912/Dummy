all: pd

pdm:main.o Tic-Tac-Toe.o
	gcc -Wall -o pd main.o Tic-Tac-Toe.o

main.o:main.c
	gcc -c -Wall main.c

Tic-Tac-Toemanagement.o:Tic-Tac-Toe.c
	gcc -c -Wall Tic-Tac-Toe.c
