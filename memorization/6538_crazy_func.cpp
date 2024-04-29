#include <stdio.h> 

// Problem.
// Input: Two integers x, a where 0 <= x, a <= 100,000
// f(x, 0) = (x + 1) / 2
// f(0, a) = 2a
// f(x, a) = f((x / 2), a) + f(x, (a / 2))
// Output: f(x, a)

long long memory[20][20];

long long f(int x, int a, int dx, int da) {
   if (memory[dx][da] == false) { 
      if (a == 0) {
	 memory[dx][da] = (x + 1) / 2;
      } else if (x == 0) {
	 memory[dx][da] = 2 * a;
      } else {
	 memory[dx][da] = f((x / 2), a, dx + 1, da) + f(x, (a / 2), dx, da + 1);
      }
   }

   return memory[dx][da];
}

int main() {
   int x, a;
   scanf("%d %d", &x, &a);
   printf("%lld", f(x, a, 0, 0));

   return 0;
}

