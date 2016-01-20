#include <stdio.h>
int main(){
    int n, result;
    while(scanf("%d", &n) == 1 && n > 0){
        result = n * (n + 1) * (2 * n + 1) / 6;
        printf("%d\n", result);
    }
    return 0;
}
