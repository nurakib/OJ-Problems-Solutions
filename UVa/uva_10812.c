#include <stdio.h>
int main(){
    int tcase, s, d, a, b;
    scanf("%d", &tcase);
    while(tcase--){
        scanf("%d %d", &s, &d);
        if(d > s)
            printf("impossible\n");
        else if((s + d) % 2 != 0 && (s - d) % 2 != 0)
            printf("impossible\n");
        else{
            a = (s + d) / 2;
            b = (s - d) / 2;
            if(b > a)
                printf("%d %d\n", b, a);
            else
                printf("%d %d\n", a, b);
        }
    }
    return 0;
}
