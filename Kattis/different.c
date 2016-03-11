#include <stdio.h>

long long abs(long long n) {
  return n > 0 ? n : -n;
}

int main(void) {
  long long a, b;
  while (scanf("%lld %lld", &a, &b) == 2){
    printf("%lld\n", abs(a-b));
  }
  return 0;
}
