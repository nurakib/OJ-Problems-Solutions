#include <stdio.h>
int main(){
    int i, j, denum, trinum[100];
    while(scanf("%d", &denum) == 1 && denum >= 0){
        if(denum == 0){
            printf("0\n");
            continue;
        }
        i = 0;
        while(denum != 0){
            trinum[i] = denum % 3;
            denum = denum / 3;
            i++;
        }
        for(j = i - 1; j >= 0; j--)
            printf("%d", trinum[j]);
        printf("\n");
    }
    return 0;
}
