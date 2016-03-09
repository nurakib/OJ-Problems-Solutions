#include <stdio.h>
long long revnum(long long num);
int main(){
    int tcase, count;
    long long num, reverse;
    scanf("%d", &tcase);
    while(tcase--){
        count = 0;
        scanf("%lld", &num);
        reverse = revnum(num);
        while(num != reverse){
            num = num + reverse;
            reverse = revnum(num);
            count++;
        }
        printf("%d %lld\n", count, num);
    }
    return 0;
}
long long revnum(long long num){
    long long part, rev = 0;
    while(num != 0){
        part = num % 10;
        rev = rev * 10 + part;
        num = num / 10;
    }
    return rev;
}
