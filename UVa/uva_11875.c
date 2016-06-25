#include <stdio.h>
int main(){
    int i, j, x, y, t, n, p[15], temp;
    scanf("%d", &t);
    for(i = 1; i <= t; i++){
        scanf("%d", &n);
        for(j = 0; j < n; j++)
            scanf("%d", &p[j]);
        for(x = 0; x < n - 1; x++){
            for(y = 0; y < n - x - 1; y++){
                if(p[y] > p[y + 1]){
                    temp = p[y];
                    p[y] = p[y + 1];
                    p[y + 1] = temp;
                }
            }
        }
        printf("Case %d: %d\n", i, p[n / 2]);
    }
    return 0;
}
