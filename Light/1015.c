#include <stdio.h>
int main(){
    int n, m, x, y;
    scanf("%d", &n);
    int count = 0;
    while(n--){
        y = 0;
        scanf("%d", &m);
        while(m--){
            scanf("%d", &x);
            if(x > 0)
                y = y + x;
        }
        count++;
        printf("Case %d: %d\n", count, y);
    }
    return 0;
}
