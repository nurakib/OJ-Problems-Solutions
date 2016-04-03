#include <stdio.h>
int main(){
    int i, tcase, a, b, c;
    scanf("%d", &tcase);
    for(i = 1; i <= tcase; i++){
        scanf("%d %d %d", &a, &b, &c);
        if(a > 20 || b > 20 || c > 20)
            printf("Case %d: bad\n", i);
        else
            printf("Case %d: good\n", i);
    }
    return 0;
}
