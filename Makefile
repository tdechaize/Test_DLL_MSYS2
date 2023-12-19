all: lib.dll ex.exe

lib.dll: lib.c
	gcc -o lib.dll -shared lib.c -Wall

ex.exe: ex.c
	gcc -o ex.exe ex.c -Wall