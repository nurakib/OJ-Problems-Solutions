#include <stdio.h>
#include <string.h>
#include <math.h>
int main(){
    int i, j, n, t, res, check;
    char str[3];
    scanf("%d", &t);
    while(t--){
        res = 0;
        scanf("%3s-%4d", str, &n);
        for(i = 2, j = 1; i >= 0; i--, j = j * 26)
            res = res + (str[i] - 65) * j;
        check = abs(res - n);
        if(check <= 100)
            printf("nice\n");
        else
            printf("not nice\n");
    }
    return 0;
}
