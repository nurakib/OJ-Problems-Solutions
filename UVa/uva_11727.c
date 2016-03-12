#include <stdio.h>
int main(){
    int i, tcase, a, b, c, result;
    scanf("%d", &tcase);
    for(i = 1; i <= tcase; i++){
        result = 0;
        scanf("%d %d %d", &a, &b, &c);
        if((a > b && a < c) || (a > c && a < b))
            result = a;
        else if((b > a && b < c) || (b > c && b < a))
            result = b;
        else if((c > a && c < b) || (c > b && c < a))
            result = c;
        printf("Case %d: %d\n", i, result);
    }
    return 0;
}
