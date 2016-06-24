#include <stdio.h>
int main(){
    int i, j, p, b, h, w, c, r, t;
    while(scanf("%d %d %d %d", &p, &b, &h, &w) == 4){
        t = 0;
        for(i = 0; i < h; i++){
            scanf("%d", &c);
            for(j = 0; j < w; j++){
                scanf("%d", &r);
                if(r >= p && c * p <= b)
                    if(t == 0 || c * p < t)
                        t = c * p;
            }
        }
        if(t == 0)
            printf("stay home\n");
        else
            printf("%d\n", t);
    }
    return 0;
}
