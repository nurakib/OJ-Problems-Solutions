#include <stdio.h>
int main(){
    long int i, tcase, a, b, c, count = 0;
    scanf("%d", &tcase);
    for(i = 1; i <= tcase; i++){
        count = 1;
        scanf("%ld %ld %ld", &a, &b, &c);
        printf("Case %d: ", i);
        if(a >= b + c || b >= a + c || c >= a + b || a <= 0 || b <= 0 || c <= 0)
            printf("Invalid\n");
        else{
            if(a == b && b == c)
                printf("Equilateral\n");
            else if(a == b || b == c || c == a)
                printf("Isosceles\n");
            else
                printf("Scalene\n");
        }
    }
    return 0;
}
