#include<stdio.h>

/**
 * n_exponential computes the exponential b for a recursively, this 
 * This algorithm will take b iterations to complete
 * */
int n_exponential(int a, int b) {
	if (b == 0) {
		return 1;
	} else {
		return a * n_exponential(a, b - 1);
	}
}

/**
 * logn_exponential computes the exponential b for a recursively, this
 * algoritm will take at most logn time to complete
 * */
int logn_exponential(int a, int b) {
	if (b == 0) {
		return 1;
	}
	int r = logn_exponential(a, b / 2);
	if (b % 2 == 0) {
		return r * r;
	}
	return a * r * r;
}

int main() {
	int a, b, r;
	scanf("%d %d", &a, &b);
	
	// r = n_exponential(a, b);	
	r = logn_exponential(a, b);	

	printf("%d", r);

	return 0;
}

