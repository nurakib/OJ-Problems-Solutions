#include <stdio.h>
int main(){
    int a, b;
    int n;
    scanf("%d", &n);
    while(n != 0){
        scanf("%d %d", &a, &b);
        if(a > b)
            printf(">\n");
        else if(b > a)
            printf("<\n");
        else
            printf("=\n");
        n--;
    }
    return 0;
}
