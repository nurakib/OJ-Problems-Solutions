#include <stdio.h>
int main(){
    int tcase, a, b, i, sum, temp, count = 1;
    scanf("%d", &tcase);
    while(tcase--){
        sum = 0;
        scanf("%d", &a);
        scanf("%d", &b);
        if(a > b){
            temp = a;
            a = b;
            b = temp;
        }
        for(i = a; i <= b; i++){
            if(i % 2 == 1)
                sum = sum + i;
        }
        printf("Case %d: %d\n", count, sum);
        count++;
    }
    return 0;
}
