#include <stdio.h>
int main(){
    int a, a2, b, b2, c, c2, max1, max2, max3;
    scanf("%d %d %d", &a, &b, &c);
    a2 = a; b2 = b; c2 = c;
    max1 = a > b && a > c ? a : b > c ? b : c;
    if(max1 == a){
            max2 = b > c ? b : c;
            if(max2 == b)
                max3 = c;
            else
                max3 = b;
        }
    if(max1 == b){
            max2 = a > c ? a : c;
            if(max2 == a)
                max3 = c;
            else
                max3 = a;
        }
    if(max1 == c){
            max2 = a > b ? a : b;
            if(max2 == a)
                max3 = b;
            else
                max3 = a;
        }
    printf("%d\n", max3);
    printf("%d\n", max2);
    printf("%d\n", max1);
    printf("\n");
    printf("%d\n", a2);
    printf("%d\n", b2);
    printf("%d\n", c2);
    return 0;
}
