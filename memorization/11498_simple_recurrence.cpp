#include <stdio.h>

long unsigned memory[30 + 1][2];

long unsigned f(short n, int k) {
	if (memory[n][k] == false) {
		if (n == 0) {
			memory[n][k] = k;
		} else {
			memory[n][k] = f(n - 1, k) + 2 * f(n - k, 1 - k);
		}
	}

	return memory[n][k];
}

int main() {
	short n;
	scanf("%hd", &n);
	printf("%lu", f(n, 0));
	return 0;
}
