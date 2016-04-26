#include <stdio.h>
int main(){
    long long caseno = 0, temp, num, check, lim, cnt;
    while(scanf("%lld %lld", &num, &lim) == 2 && (num > 0 && lim > 0)){
        cnt = 0; temp = num;
        while(num <= lim){
            cnt++;
            if(num == 1)
                break;
            else if(num % 2 == 0)
                num = num / 2;
            else
                num = 3 * num + 1;
        }
        printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n", ++caseno, temp, lim, cnt);
    }
    return 0;
}
