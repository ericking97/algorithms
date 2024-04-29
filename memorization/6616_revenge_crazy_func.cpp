#include <stdio.h>

unsigned memory[2000][2000];

unsigned f(int x, int a) {
	if (memory[x][a] == false) {
		if (a == 1 || a == 0) {
			memory[x][a] = (2 * x) / 3;
		} else if (x == 0 || x == 1) {
			memory[x][a] = (a * a) / 2;
		} else {
			memory[x][a] = f(x + 1, a - 2) + f(x - 2, a + 1);
		}
	}

	return memory[x][a];
}

int main() {
	int x, a;
	scanf("%d %d", &x, &a);
	printf("%u", f(x, a));
	return 0;
}
