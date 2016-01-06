#include <stdio.h>
int main(){
    int tcase, a, b, i, temp, sum;
    scanf("%d", &tcase);
    while(tcase--){
        scanf("%d %d", &a, &b);
        if(a > b){
            temp = a;
            a = b;
            b = temp;
        }
        sum = 0;
        for(i = a + 1; i <= b - 1; i++){
            if(i % 2 == 1)
                sum = sum + i;
        }
        printf("%d\n", sum);
    }
    return 0;
}
