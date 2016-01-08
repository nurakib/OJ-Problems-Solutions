#include <stdio.h>
int main(){
    int tcase, loop = 5, a, count = 0;
    scanf("%d", &tcase);
    while(loop--){
        scanf("%d", &a);
        if(a == tcase)
            count++;
    }
    printf("%d\n", count);
    return 0;
}
