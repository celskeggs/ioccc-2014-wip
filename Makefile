
prog: prog.c
	${CC} '-DCC="${CC} -fPIC"' prog.c -ldl -o prog

