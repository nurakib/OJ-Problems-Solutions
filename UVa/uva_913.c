#include <stdio.h>
int main(){
    unsigned long long i, j, num, total_num, sum, last_num, result;
    while(scanf("%llu", &num) == 1){
        total_num = 0;
        for(i = 1; i <= num; i = i + 2)
            total_num = total_num + i;
        last_num = total_num * 2 - 1;
        result = last_num + last_num + last_num - 6;
        printf("%llu\n", result);
    }
    return 0;
}
