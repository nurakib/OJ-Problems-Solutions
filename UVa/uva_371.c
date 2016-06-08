#include <stdio.h>
int main(){
    long long a, b, i, temp, cnt, val, max;
    while(scanf("%lld %lld", &a, &b) == 2){
        if(a == 0 && b == 0)
            break;
        if(a > b){
            temp = b;
            b = a;
            a = temp;
        }
        max = 0;
        for(i = a; i <= b; i++){
            temp = i; cnt = 1;
            if(temp % 2 == 0)
                temp = temp / 2;
            else
                temp = 3 * temp + 1;
            while(temp != 1){
                if(temp % 2 == 0)
                    temp = temp / 2;
                else
                    temp = 3 * temp + 1;
                cnt++;
            }
            if(cnt > max){
                max = cnt;
                val = i;
            }
        }
        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n", a, b, val, max);
    }
    return 0;
}
