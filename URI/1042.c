#include <stdio.h>
int main(){
    int a, b, c, max1, max2, max3;
    scanf("%d %d %d", &a, &b, &c);
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
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    return 0;
}
