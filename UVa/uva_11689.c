#include <stdio.h>
int main(){
    int tcase, a, b, c, total, result, temp;
    scanf("%d", &tcase);
    while(tcase--){
        result = temp = 0;
        scanf("%d %d %d", &a, &b, &c);
        total = a + b;
        while(total >= c){
            temp = total / c;
            result = result + temp;
            total = temp + total % c;
        }
        printf("%d\n", result);
    }
    return 0;
}
