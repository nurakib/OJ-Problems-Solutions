#include <stdio.h>
int main(){
    int i, j, tcase, num;
    scanf("%d", &tcase);
    while(tcase--){
        int result[10] = {0};
        scanf("%d", &num);
        for(i = 1; i <= num; i++){
            j = i;
            while(j != 0){
                result[j % 10]++;
                j /= 10;
            }
        }
        printf("%d", result[0]);
        for(i = 1; i < 10; i++)
            printf(" %d", result[i]);
        printf("\n");
    }
    return 0;
}
