#include <stdio.h>
int main(){
    int t, a, b, i, j, sqt, rem1, rem2, flag, caseno = 0;
    scanf("%d", &t);
    while(t--){
        if(caseno > 0)
            printf("\n");
        flag = 0;
        scanf("%d %d", &a, &b);
        printf("case #%d\n", ++caseno);
        for(i = a; i <= b; i++){
            sqt = i * i;
            for(j = 10; j <= sqt; j = j * 10){
                rem1 = sqt % j;
                    if(rem1 == 0)
                       continue;
                rem2 = sqt / j;
                if(rem1 + rem2 == i){
                    printf("%d\n", i);
                    flag = 1;
                    break;
                }
            }
        }
        if(flag == 0)
            printf("no kaprekar numbers\n");
    }
    return 0;
}
