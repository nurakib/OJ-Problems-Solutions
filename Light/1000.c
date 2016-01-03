#include <stdio.h>
int main(){
    int n, a, b, r = 1;
    scanf("%d", &n);
    while(n--){
        scanf("%d %d", &a, &b);
        printf("Case %d: %d\n", r, a + b);
        r++;
    }
    return 0;
}
