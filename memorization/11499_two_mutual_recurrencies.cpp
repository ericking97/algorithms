#include <stdio.h>

int g_mem[50 + 1];
int f_mem[50 + 1];

int g(int n);

int f(int n) {
	if (f_mem[n] == false) {
		if (n == 0) {
			return 1;
		}
		f_mem[n] = f(n - 1) - g(n); 
	}
	return f_mem[n];
}

int g(int n) {
	if (g_mem[n] == false) {
		if (n <= 2) {
			return -2;
		}
		g_mem[n] = f(n - 2) - 1;
	}
	return g_mem[n];
}

int main() {
	int n;
	scanf("%d", &n);
	printf("%d", f(n));
	return 0;
}
