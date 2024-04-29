#include <stdio.h>

long memory[100001][2];

long f(int a, int b, int bx) {
	if (memory[a][bx] == false) {
		if (a == 0 || b == 0) {
			memory[a][bx] = a + 2 * b + 3;
		} else {
			memory[a][bx] = f(a - 1, b, 1) + f(a - 1, -b, 0) + 1;
		}
	}	
	return memory[a][bx];
}

int main() {
	int a, b;
	// 0 <= a, b <= 10**5
	scanf("%d %d", &a, &b);
	printf("%ld", f(a, b, 1));
	return 0;
}
