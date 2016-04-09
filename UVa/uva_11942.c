#include <stdio.h>
int main(){
    int i, tcase, flag1, flag2, num[10];
    scanf("%d", &tcase);
    printf("Lumberjacks:\n");
    while(tcase--){
        flag1 = flag2 = 0;
        for(i = 0; i < 10; i++)
            scanf("%d", &num[i]);
        if(num[0] >= num[1]){
            for(i = 0; i < 9; i++){
                if(num[i] > num[i + 1])
                    flag1++;
                else
                    break;
            }
        }
        else if(num[0] <= num[1]){
            for(i = 0; i < 9; i++){
                if(num[i] < num[i + 1])
                    flag2++;
                else
                    break;
            }
        }
        if(flag1 == 9 || flag2 == 9)
            printf("Ordered\n");
        else
            printf("Unordered\n");
    }
    return 0;
}
