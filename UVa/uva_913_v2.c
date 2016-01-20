    #include <stdio.h>
    int main(){
        unsigned long long i, j, num, last_num, result;
        while(scanf("%llu", &num) == 1){
            last_num = (num * (num + 2)) / 2;
            result = 3 * last_num - 6;
            printf("%llu\n", result);
        }
        return 0;
    }
