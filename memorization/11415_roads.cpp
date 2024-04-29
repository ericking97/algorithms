#include <stdio.h>

long memory[25 + 1][25 + 1];

long f(int x, int y) {
	if (memory[x][y] == false) {
		if (x == 0 && y == 0) {
			memory[x][y] = 1;
		} else if (x == 0) {
			memory[x][y] = f(x, y - 1);
		} else if (y == 0) {
			memory[x][y] = f(x - 1, y);
		} else {
			memory[x][y] = f(x - 1, y) + f(x,  y - 1);
		}
	}
	return memory[x][y];
}

int main() {
	int n;
	scanf("%d", &n);
	printf("%ld", f(n, n));
	return 0;
}
