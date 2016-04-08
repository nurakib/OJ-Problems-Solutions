#include <stdio.h>
int main(){
    int i, j, tcase, ncrg, temp;
    scanf("%d", &tcase);
    while(tcase--){
        scanf("%d", &ncrg);
        int crg[ncrg], cnt = 0;
        for(i = 0; i < ncrg; i++)
            scanf("%d", &crg[i]);
        for(i = 0; i < ncrg; i++){
            for(j = 0; j < ncrg - i - 1; j++){
                if(crg[j] > crg[j + 1]){
                    temp = crg[j];
                    crg[j] = crg[j + 1];
                    crg[j + 1] = temp;
                    cnt++;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n", cnt);
    }
    return 0;
}
