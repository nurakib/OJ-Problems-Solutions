#include <stdio.h>
int main(){
    int tcase, i, j, n, sum, num[10000];
    while(scanf("%d", &tcase) == 1){
        for(i = 1; i <= tcase; i++){
            scanf("%d", &n);
            sum = 0;
            for(j = 0; n > 0; j++){
                num[j] = n % 2;
                n = n / 2;
                sum = sum + num[j];
            }
            if(sum % 2 == 0)
                printf("Case %d: even\n", i);
            else
                printf("Case %d: odd\n", i);
        }
    }
    return 0;
}
