#include <cstdlib>
#include <stdio.h>

long memory[25 * 2 + 1];

long f(int n) {
	int pos = n + 25;
	if (memory[pos] == false) {
		if (abs(n) == 25) {
			memory[pos] = 1;
		} else if (n < 0) {
			memory[pos] = f(n - 1) + f(1 - n);
		} else if (n == 0) {
			memory[pos] = f(-1) + f(1);
		} else {
			memory[pos] = f(n + 1) + f(-n);
		}
	}

	return memory[pos];
}

int main() {
	int n;
	scanf("%d", &n);
	printf("%ld", f(n));
	return 0;
}
