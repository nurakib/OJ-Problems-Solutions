#include <stdio.h>
int main(){
    int a, b, i, temp, sum;
    while(scanf("%d %d", &a, &b) == 2 && a > 0 && b > 0){
        if(a > b){
            temp = a;
            a = b;
            b = temp;
        }
        sum = 0;
        for(i = a; i <= b; i++){
            sum = sum + i;
            printf("%d ", i);
        }
        printf("Sum=%d\n", sum);
    }
    return 0;
}
