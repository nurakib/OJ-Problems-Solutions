#include <stdio.h>
int main(){
    int tcase, n;
    scanf("%d", &tcase);
    while(tcase--){
        scanf("%d", &n);
        if(n == 0)
            printf("NULL\n");
        else if(n > 0){
            if(n % 2 == 0)
                printf("EVEN POSITIVE\n");
            else
                printf("ODD POSITIVE\n");
        }
        else{
            if(n % 2 == 0)
                printf("EVEN NEGATIVE\n");
            else
                printf("ODD NEGATIVE\n");
        }
    }
    return 0;
}
