#include <stdio.h>

long long memory[51];

long long f(int n) {
	if (memory[n] == false) {
		if (n == 1 || n == 2) {
			memory[1] = 1;
			memory[2] = 2;
			return n;
		}
		
		memory[n - 1] = f(n - 1);
		memory[n - 2] = f(n - 2);
		return memory[n - 1] + memory[n - 2];
	}

	return memory[n];
}

int main() {
	int n;
	scanf("%d", &n);
	printf("%lld", f(n));
	return 0;
}
