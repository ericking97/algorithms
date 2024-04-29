#include <stdio.h>

long memory[1001];

long f(float x) {
	int pos = (int) (x * 10);
	if (memory[pos] == false) {
		if (x <= 2) {
			memory[pos] = 1;
		} else if ((int) x != x) {
			memory[pos] = f((int) x) + 2;
		} else if ((int) x % 2 == 0) {
			memory[pos] = f(x - 1) + f(x - 2);
		} else {
			memory[pos] = f(x - 1) + f(x / 2) + 1;
		}
	}

	return memory[pos];
}

int main() {
	float x;
	scanf("%f", &x);
	printf("%ld", f(x));
	return 0;
}
