#include <stdio.h>
int main(){
    int i, j, denum, binum[100], parity;
    while(scanf("%d", &denum) == 1 && denum > 0){
        i = 0;
        parity = 0;
        while(denum != 0){
            binum[i] = denum % 2;
                if(binum[i] == 1)
                    parity++;
            denum = denum /2;
            i++;
        }
        printf("The parity of ");
        for(j = i - 1; j>=0; j--){
            printf("%d", binum[j]);
        }
        printf(" is %d (mod 2).\n", parity);
    }
    return 0;
}
