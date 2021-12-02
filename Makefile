install: http-server.c
	gcc -o http-server http-server.c response.c

run:
	./http-server