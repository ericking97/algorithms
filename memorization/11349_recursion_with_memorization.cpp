#include <algorithm>
#include <cmath>
#include <stdio.h>

bool computed[101][101][101];
unsigned long memory[101][101][101];
int counter = 0;

unsigned long long f(int a, int b, int c) {
	if (computed[a][b][c] == false) {
		counter++;
		computed[a][b][c] = true;
		if (std::min({a, b, c}) <= 3) {
			memory[a][b][c] = a + 2 * b + 3 * c;
		} else if (a + b + c == 100) {
			memory[a][b][c] = 0;
		} else {
			memory[a][b][c] = f(a - 1, b - 1, c - 1) + f(a, b - 3, c - 3) + f(a / 2, b, c);
		}
	}

	return memory[a][b][c];
}

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%llu ", f(a, b, c));
	printf("%d", counter);
	return 0;
}
