#include <stdio.h>
int main(){
    int tcase, a, b, c, max;
    scanf("%d", &tcase);
    while(tcase--){
        scanf("%d %d %d", &a, &b, &c);
        max = a > b && a > c ? a : b > c ? b : c;
        if(max == a && b + c > a)
            printf("OK\n");
        else if(max == b && a + c > b)
            printf("OK\n");
        else if(max == c && a + b > c)
            printf("OK\n");
        else
            printf("Wrong!!\n");
    }
    return 0;
}
