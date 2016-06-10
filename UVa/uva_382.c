#include <stdio.h>
int main(){
    int i, n, sum, cnt = 1;
    while(scanf("%d", &n) == 1 && n != 0){
        sum = 0;
        if(cnt == 1){
            printf("PERFECTION OUTPUT\n");
            cnt++;
        }
        for(i = 1; i <= n / 2; i++){
            if(n % i == 0)
                sum = sum + i;
        }
        if(sum == n)
            printf("%5d  PERFECT\n", n);
        else if(sum > n)
            printf("%5d  ABUNDANT\n", n);
        else if(sum < n)
            printf("%5d  DEFICIENT\n", n);
    }
    printf("END OF OUTPUT\n");
    return 0;
}
