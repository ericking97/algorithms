#include <algorithm>
#include <cmath>
#include <stdio.h>

long long memory[751][751];

long long f(int a, int b) {
	if (memory[a][b] == false) {
		int min = std::min(a, b);
		if (min <= 5) {
			memory[a][b] = a + b;
		} else if (a <= b) {
			memory[a][b] = f(a + 1, b - 3) + f((3 * a) / 2, b / 5);
		} else {
			memory[a][b] = f(b, a);
		}
		return memory[a][b];
	}

	return memory[a][b];
}

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%lld", f(a, b));
	return 0;
}
