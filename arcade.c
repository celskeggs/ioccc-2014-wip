#define CC "gcc"

typedef int (*and_eq)();
typedef void *(*compl)();

typedef struct {
	and_eq T[15];
	int U[6];
} W;

#include <string.h>
#include <stdio.h>

#ifndef NO

#include <unistd.h>
#include <stdlib.h>
#include <stdint.h>
#include <dlfcn.h>

typedef uintptr_t Q;

#define struct(z, x, y) FILE*out = fopen("tmp.c", "w"); if (out == NULL) exit(2); OUT("#define NO\n%cinclude \""__FILE__"\"\nextern void init() __attribute__((constructor)); \n", 35); z fclose(out); if (system(CC " -shared tmp.c -o " x " " y " -ggdb")) exit(3); { char *ptr = x; ptr2(127, &ptr - 1); }
#define OUT(x, b) fprintf(out, x, b);
#define OV(x, v) OUT(#x, v)

/*int V.U[0] = 0, V.U[1] = 30, V.U[2] = 50, V.U[3] = 5, V.U[4] = 10, V.U[5] = 0; */
char msg_dat[64] = ">>> DEFEAT THE MELONLORD <<<";

W V;

void render_screen(and_eq ptr2) {
	int a = (V.T[1](((compl) ((*V.T)(), V.T[6]))()) - 32) / 2, b = (V.T[2](((compl) V.T[6])()) - 16) / 2;
	if (V.T[14] && V.T[14](a, b)) {
		return;
	}
	struct(
	OUT("int km(int a, int b) { if (%d != a || b != ", a)
	OUT("%d) { return 0; }", b)
	char *x = "\0  ______________________________\0 /                              \\\\\0/                                \\\\\0|                                |\0|                                |\0|  ==== ====          ==== ====  |\0|                                |\0|      O                  O      |\0|     /|->              <-|\\\\     |\0|      |                  |      |\0|     / \\\\                / \\\\     |\0|                                |\0|   ATTACK   REGENERATE   HEAL   |\0|                                |\0----------------------------------\0";
	int o = b;
	while (*++x) {
		OV(((W *)%d)-, (Q) &V)
		OUT(">T[3](%d,", b++)
		OUT("%d, ", a)
		OUT("\"%s\"); \n", x)
		while (*++x);
	}
	OV(((W *)%d)-, (Q) &V)
	OUT(">T[3](%d,", o+2)
	OV(%d - strlen, a + 17)
	OUT("((char*) %d) / 2, ", (Q) msg_dat)
	OUT("(char*) %d); char data[12]; ", (Q) msg_dat)
	OUT("sprintf(data, \"%%3dh%%3dMP\", ((W *)%d)->U[1], ((W *)", (Q) &V)
	OUT("%d)->U[3]); ", (Q) &V)
	OV(((W *)%d)->T[3], (Q) &V)
	OUT("(%d, ", o + 4)
	OUT("%d, data); ", a + 3)
	OUT("sprintf(data, \"%%3dh%%3dMP\", ((W *)%d)->U[2], ((W *)", (Q) &V)
	OUT("%d)->U[4]); ", (Q) &V)
	OV(((W *)%d)->T[3], (Q) &V)
	OUT("(%d, ", o + 4)
	OUT("%d, data); ", a + 22)
#define R(x, y, z) OUT("sprintf(data, \"%%c\", ((W *)%d)->U[0] == " #x " ? '", (Q) &V) OUT(#y "' : ' '); ((W *)%d)->T", (Q) &V) OUT("[3](%d,", o + 12) OUT(" %d, data); ", a + z)
	R(0, [, 3)
	R(0, ], 10)
	R(1, [, 12)
	R(1, ], 23)
	R(2, [, 25)
	R(2, ], 30)
	OV(((W *)%d)->T[4](); return 1; } void init() {, (Q) &V)
	OV(((W *)%d)->T[14] = km; }, (Q) &V)
	, "tmp-160.so", "")
	render_screen(ptr2);
}

int roll(int c, int d) {
	return c > 0 ? 1 + roll(c - 1, d) + rand() % d : 0;
}

#define X(a) V.U[a] <

int D;

void enemy_turn() {
	switch (X(1) 10 ? 0 : X(2) 20 ? X(4) 2 ? !(X(3) 1) : 2 : X(4) 5 && roll(1, 3) != 1 && !(X(3) 1) ? 1 : roll(1, 8) > 6 ? (1 + (V.U[4] > 9 || X(3) 1)) : 0) {
	case 0: D = roll(2, 6); V.U[1] -= D; sprintf(msg_dat, "You are attacked for %d HP!", D); break;
	case 1: D = roll(1, 4); if (V.U[3] < D) { D = V.U[3]; } V.U[3] -= D; V.U[4] += D; sprintf(msg_dat, "They steal %d MP!", D); break;
	case 2: if (X(4) 2) { strcpy(msg_dat, "They fail to heal!"); } else { V.U[4] -= roll(1, 2); V.U[2] += D = roll(3, 8); sprintf(msg_dat, "They heal for %d HP!", D); } break;
	}
}

#define H_H(x) (x ? "has" : "have")
#define U_U(x) (x ? "THE MELONLORD" : "You")
#define check(x) dlopen(x, RTLD_LAZY | RTLD_LOCAL)
#define K_K(v, w, x, y, z) ((v) ? w x z : w y z)

int check_winlose(and_eq chr) {
	if (V.U[5] = (V.U[1] * V.U[2] <= 0)) {
		int x = V.U[1] > 0, cnt = 0;
		for (; (V.U[5] | sleep(++cnt)) && cnt < 3; render_screen(chr)) {
			sprintf(msg_dat, K_K(cnt & 1, "%s %s ", "died!\0", "defeated", " %s!"), U_U((!x) ^ (cnt & 1)), H_H((!x) ^ (cnt & 1)), U_U(x ^ (cnt & 1)));
		}
		return 0;
	}
	return 1;
}

int x(and_eq next) {
	int no_run = 0;
	switch (V.U[0]) {
	case 0: D = roll(2, 8); V.U[2] -= D; sprintf(msg_dat, "You attack for %d HP!", D); break;
	case 1: V.U[3] += D = roll(1, 10); sprintf(msg_dat, "You regenerate %d MP!", D); break;
	case 2: if (V.U[3] > 1) { V.U[3] -= roll(1, 2); V.U[1] += D = roll(3, 6); sprintf(msg_dat, "You heal for %d HP!", D); } else { strcpy(msg_dat, "You don't have enough MP!"); no_run = 1; } break;
	}
	render_screen(next);
	if (!check_winlose(next) || no_run) {
		return 3;
	}
	sleep(1);
	enemy_turn();
	render_screen(next);
	check_winlose(next);
	return 2;
}

int v(int ints[], and_eq ptrs[], and_eq ptr2) {
	int active = '\t';
	struct(
	OUT("int cpl(int x) %c switch(x) {", 127 & ~4)
	while (*ints != 0) {
		active += *(ints++);
		OUT("case %d: return ((and_eq", active);
		OUT(") %d)(); ", (Q) *(ptrs++));
	}
	OUT("} return 1; } void init() { W *V = (W *) %d; V->T[13] = cpl; }", (Q) &V)
	, "tmp-172.so", "")
	return ints[-2];
}

int u() {
	return V.U[5] = 1;
}

int put(and_eq ptr3) {
	render_screen(ptr3);
	int getched = V.T[5]();
	if (getched & (~((1+~1U) >> 1))) {
		getched += V.U[0] + 3;
		V.U[0] = getched % 3;
	} else {
		(V.T[13] && V.T[13](getched)) || (v((int[]) {1, 3, 14, 5, 49, 32, 0}, (and_eq[]) {x, x, u, x, u, u}, ptr3) && V.T[13](getched));
	}
	return !V.U[5];
}

int init(void *ptr, and_eq ptr2) {
	if (!ptr) {
		struct(
		OV(#include <ncurses/ncurses.h>\nvoid *f() { return stdscr; } void F() { endwin(); puts("Play again soon!"); } int g() { int out = getch(); out == KEY_LEFT && (out = -1); out == KEY_RIGHT && (out = -2); return out; } void init() { and_eq *G = ((W *) %d)->T - 1; , (Q) &V);
		char *in = "\0clear\0getmaxx\0getmaxy\0mvaddstr\0refresh\0g\0f\0initscr\0cbreak\0noecho\0nonl\0intrflush\0keypad\0";
		while (*++in) {
			OV(*++G = (and_eq) %s;, in);
			while (*++in);
		}
		OV(atexit(F); %c, 125);
		, "tmp-173.so", "-lncurses")
		int i;
		for (i = 7; i < 11; i++) {
			V.T[i]();
		}
		V.T[11](((compl) V.T[6])(), 0);
		V.T[12](((compl) V.T[6])(), 1);
		return 1;
	}
	return 0;
}

int main(int c, char *v[]) {
	if (v[1]) { /* sanity check option */
		check(v[1]);
	} else {
		memcpy(V.U, (int[]) {0, 5, 5, 5, 10, 0}, 6);
	}
	if (init(v[1], &main)) {
		while (put(&main));
	}
	return 0;
}

#endif