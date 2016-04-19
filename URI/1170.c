#include <stdio.h>
int main(){
    int t, cnt;
    float n;
    scanf("%d", &t);
    while(t--){
        cnt = 1;
        scanf("%f", &n);
        while(n / 2 > 1){
            cnt++;
            n = n / 2;
        }
            printf("%d dias\n", cnt);
    }
    return 0;
}
