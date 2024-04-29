#include <numeric>
#include <stdio.h>

long long memory[101];

long long fib(int k) {
	if (memory[k] == false) {
		if (k == 0 || k == 1) {
			memory[k] = k;
			return memory[k];
		}
		memory[k] = fib(k - 1) + fib(k - 2);
		return memory[k];
	}

	return memory[k];
}

int main () {
	int n, m;
	scanf("%d %d", &n, &m);
	int pos = std::gcd(n, m);
	printf("%lld", fib(pos));
	return 0;
}
