#include <stdio.h>
int main(){
    int i, tcase, ncase, num, max;
    scanf("%d", &tcase);
    for(i = 1; i <= tcase; i++){
        scanf("%d", &ncase);
        max = 0;
        while(ncase--){
            scanf("%d", &num);
            if(num > max)
                max = num;
        }
        printf("Case %d: %d\n", i, max);
    }
    return 0;
}
