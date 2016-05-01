#include <stdio.h>
int main(){
    int t, a, b, x, y;
    while(scanf("%d", &t) == 1 & t > 0){
        scanf("%d %d", &a, &b);
        while(t--){
            scanf("%d %d", &x, &y);
            if(x == a || y == b)
                printf("divisa\n");
            else if(x > a && y > b)
                printf("NE\n");
            else if(x < a && y > b)
                printf("NO\n");
            else if(x < a && y < b)
                printf("SO\n");
            else if(x > a && y < b)
                printf("SE\n");
        }
    }
    return 0;
}
