#include <stdio.h>
int main(){
    int i, j, m, n, tcase, result, hnum1, hnum2, dnum1, dnum2;
    char sign;
    scanf("%d", &tcase);
    while(tcase--){
        int bnum1[13] = {0}, bnum2[13] = {0};
        scanf("%x %c %x", &hnum1, &sign, &hnum2);
        dnum1 = hnum1;
        dnum2 = hnum2;
        i = j = 0;
        if(sign == '+')
            result = dnum1 + dnum2;
        else if(sign == '-')
            result = dnum1 - dnum2;
        while(dnum1 != 0){
            bnum1[i] = dnum1 % 2;
            dnum1 = dnum1 / 2;
            i++;
        }
        while(dnum2 != 0){
            bnum2[j] = dnum2 % 2;
            dnum2 = dnum2 / 2;
            j++;
        }
        for(m = 12; m >= 0; m--)
            printf("%d", bnum1[m]);
        printf(" %c ", sign);
        for(n = 12; n >= 0; n--)
            printf("%d", bnum2[n]);
        printf(" = %d\n", result);
    }
    return 0;
}

