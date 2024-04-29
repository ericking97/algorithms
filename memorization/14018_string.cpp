#include<stdio.h>

long memory[1000001][2];

long long f(int x, int a) {
	int pos;
	if (a == -1) {
		pos = 0;
	} else {
		pos = 1;
	}

	if (memory[x][pos] == false) {
		if (x <= 3) {
			memory[x][pos] = a * x;
		} else {
			memory[x][pos] = a * (f(x - 1, a) + f(x - 1, -a) + f(x - 2, a));
		}
	}

	return memory[x][pos];
}

int main() {
	int x, a;
	scanf("%d %d", &x, &a);
	printf("%lld", f(x, a));
	return 0;
}
