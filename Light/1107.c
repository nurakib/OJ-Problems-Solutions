#include <stdio.h>
int main(){
    int i, j, tcase1, tcase2, x1, x2, y1, y2, xc, yc;
    scanf("%d", &tcase1);
    for(i = 1; i <= tcase1; i++){
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        scanf("%d", &tcase2);
        printf("Case %d:\n", i);
        for(j = 1; j <= tcase2; j++){
            scanf("%d %d", &xc, &yc);
            if(xc >= x1 && xc <= x2 && yc >= y1 && yc <= y2)
                printf("Yes\n");
            else
                printf("No\n");
        }
    }
    return 0;
}
