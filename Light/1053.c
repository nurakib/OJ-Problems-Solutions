#include <stdio.h>
int main(){
    int i, tcase;
    long long a, b, c, max;
    scanf("%d", &tcase);
    for(i = 1; i <= tcase; i++){
        scanf("%lld %lld %lld", &a, &b, &c);
        max = (a > b && a > c ? a : b > c ? b : c);
        if(max == a && a * a == b * b + c * c)
            printf("Case %d: yes\n", i);
        else if(max == b && b * b == a * a + c * c)
            printf("Case %d: yes\n", i);
        else if(max == c && c * c == a * a + b * b)
            printf("Case %d: yes\n", i);
        else
            printf("Case %d: no\n", i);
    }
    return 0;
}
