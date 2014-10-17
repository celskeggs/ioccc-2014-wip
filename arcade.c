#define CC "gcc" /* might need to be 'gcc -fPIC' on some platforms. Should also work with clang? */

typedef int (*and_eq)();
typedef void *(*compl)();

typedef struct {
	and_eq T[15];
	int U[6];
} W;

#include <string.h>
#include <stdio.h>
#define A(x) ((W *)x)->

#ifndef NO

#include <unistd.h>
#include <stdlib.h>
#include <stdint.h>
#include <dlfcn.h>

typedef uintptr_t Q;

#define struct(z, x, y) FILE*q = fopen("t.c", "w"); if (q == NULL) exit(2); not_eq("#define NO\n%cinclude \""__FILE__"\"\nextern void init() __attribute__((constructor)); \n", 35); z fclose(q); if (system(CC " -shared t.c -o " #x " " #y)) exit(3); { char *p = #x; L(127, &p - 1); }
#define not_eq(x, b) fprintf(q, x, b);
#define or_eq(x, v) not_eq(#x, v)
#define E(x, v, w) fprintf(q, #x, v, w);
#define R(x, z) E(sprintf(data, "%%c", A(%d) U[0] == %s ? 126 : 32);, Z, #x) or_eq(A(%d)T, Z) not_eq("[3](%d,", o + 12) not_eq(" %d, data); ", a + z)
#define Z (Q) &V
#define F(x) x x
#define H "THE MELONLORD"

/*int V.U[0] = 0, V.U[1] = 30, V.U[2] = 50, V.U[3] = 5, V.U[4] = 10, V.U[5] = 0; */
char M[64] = ">>> DEFEAT "H" <<<";

W V;

void xor_eq(and_eq L) {
	int a = (V.T[1](((compl) ((*V.T)(), V.T[6]))()) - 32) / 2, b = (V.T[2](((compl) V.T[6])()) - 16) / 2;
	if (V.T[14] && V.T[14](a, b)) {
		return;
	}
	struct(
	E(int k(int a, int b) { if (%d != a || b != %d) { return 0; }, a, b)
	char *x = "\0  " F(F("_______") "_") "\0 /                              \\\\\0/                                \\\\\0|                                |\0|                                |\0|  ==== ====          ==== ====  |\0|                                |\0|      O                  O      |\0|     /|->              <-|\\\\     |\0|      |                  |      |\0|     / \\\\                / \\\\     |\0|                                |\0|   ATTACK   REGENERATE   HEAL   |\0|                                |\0" F(F(F("----")) "-") "\0";
	int o = b;
	while (*++x) {
		or_eq(A(%d), Z)
		not_eq("T[3](%d,", b++)
		not_eq("%d, ", a)
		not_eq("\"%s\"); \n", x)
		while (*++x);
	}
	or_eq(A(%d), Z)
	not_eq("T[3](%d,", o+2)
	or_eq(%d - strlen, a + 17)
	or_eq(((char*) %d) / 2, (Q) M)
	not_eq(", (char*) %d); char data[12]; int y; ", (Q) M)
	for (b=1; b<3; b++) {
		or_eq(y=%d; ,b)
		E(sprintf(data, "%%3dh%%3dMP", A(%d) U[y], A(%d) U[y+2]); , Z, Z)
		or_eq(A(%d) T[3], Z)
		E((%d, %d, data); , o + 4, a + b * 19 - 16)
	}
	R(0, 3)
	R(0, 10)
	R(1, 12)
	R(1, 23)
	R(2, 25)
	R(2, 30)
	or_eq(A(%d) T[4](); return 1; } void init() {, Z)
	or_eq(A(%d) T[14] = k; }, Z)
	, c.so, )
	xor_eq(L);
}

int S(int c, int d) {
	return c-- > 0 ? 1 + S(c, d) + rand() % d : 0;
}

#define X(a) V.U[a] <
#define Y(x) sprintf(M,#x,D)

#define chk(x) dlopen(x, RTLD_LAZY | RTLD_LOCAL)
#define K_K(v, w, x, y, z) ((v) ? w #x z : w #y z)

int N(and_eq d) {
	if (V.U[5] = (V.U[1] * V.U[2] <= 0)) {
		int x = V.U[1] > 0, c = 0;
		for (; (V.U[5] | sleep(++c)) && c < 3; xor_eq(d)) {
			sprintf(M, K_K(c & 1, "%s %s ", died!\0, defeated, " %s!"), (!x) ^ (c & 1) ? H : "You", (!x) ^ (c & 1) ? "has" : "have", x ^ (c & 1) ? H : "You");
		}
		return 0;
	}
	return 1;
}

int x(and_eq x) {
	int u = 0, D = 33;
	switch (V.U[0]) {
	case 0: D = S(2, 8); V.U[2] -= D; Y(You attack for %d HP!); break;
	case 1: V.U[3] += D = S(1, 10); Y(You regenerate %d MP!); break;
	case 2: if (V.U[3] > 1) { V.U[3] -= S(1, 2); V.U[1] += D = S(3, 6); Y(You heal for %d HP!); } else { Y(You do not have enough MP%d); u = 1; } break;
	}
	xor_eq(x);
	if (!N(x) || u) {
		return 3;
	}
	sleep(1);
	switch (X(1) 10 ? 0 : X(2) 20 ? X(4) 2 ? !(X(3) 1) : 2 : X(4) 5 && S(1, 3) != 1 && !(X(3) 1) ? 1 : S(1, 8) > 6 ? (1 + (V.U[4] > 9 || X(3) 1)) : 0) {
	case 0: D = S(2, 6); V.U[1] -= D; Y(You are attacked for %d HP!); break;
	case 1: D = S(1, 4); if (V.U[3] < D) { D = V.U[3]; } V.U[3] -= D; V.U[4] += D; Y(They steal %d MP!); break;
	case 2: D = 33; if (X(4) 2) { Y(They fail to heal%d); } else { V.U[4] -= S(1, 2); V.U[2] += D = S(3, 8); Y(They heal for %d HP!); } break;
	}
	xor_eq(x);
	N(x);
	return 2;
}

int v(int p[], and_eq P[], and_eq L) {
	int r = '\t';
	struct(
	or_eq(int f(int x) %c switch(x) {, 127 & ~4)
	while (*p) {
		E(case %d: return ((and_eq) %d)(); , r += *(p++), (Q) *(P++));
	}
	or_eq(} return 1; } void init() { A(%d) T[13] = f; }, Z)
	, g.so, )
	return p[-2];
}

int u() {
	return V.U[5] = 1;
}

int put(and_eq ptr3) {
	xor_eq(ptr3);
	int g = V.T[5]();
	if (g & (~((1+~1U) >> 1))) {
		V.U[0] = (V.U[0] + g + 3) % 3;
	} else {
		(V.T[13] && V.T[13](g)) || (v((int[]) {1, 3, 14, 5, 49, 32, 0}, (and_eq[]) {x, x, u, x, u, u}, ptr3) && V.T[13](g));
	}
	return !V.U[5];
}

int init(void *ptr, and_eq L) {
	if (!ptr) {
		struct(
		or_eq(#include <ncurses/ncurses.h>\nvoid *f() { return stdscr; } void F() { endwin(); puts("Play again soon!"); } int g() { int o = getch(); o == KEY_LEFT && (o = -1); o == KEY_RIGHT && (o = -2); return o; } void init() { and_eq *G = ((W *) %d)->T - 1; , Z);
		char *i = "\0clear\0getmaxx\0getmaxy\0mvaddstr\0refresh\0g\0f\0initscr\0cbreak\0noecho\0nonl\0intrflush\0keypad\0";
		while (*++i) {
			or_eq(*++G = (and_eq) %s; , i);
			while (*++i);
		}
		or_eq(atexit(F); %c, 125);
		, l.so, -lncurses)
		int j;
		for (j = 7; j < 11; j++) {
			V.T[j]();
		}
#define D(x) V.T[11+x](((compl) V.T[6])(), x);
		D(0) D(1)
		return 1;
	}
	return 0;
}

int main(int c, char *v[]) {
	v[1] && chk(v[1]) || memcpy(V.U, (int[]) {0, 5, 5, 5, 10, 0}, 6 * sizeof(int));
	if (init(v[1], &main)) {
		while (put(&main));
	}
	return 0;
}

#endif