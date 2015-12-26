#include <stdio.h>
int cycle(int n);
int main(){
    int i, j, max_cycle, temp1 = 0, temp2 = 0, cy_len = 0;
    while(scanf("%d %d", &i, &j) == 2){
        printf("%d %d", i, j);
        max_cycle = 0;
        if(i > j){
            temp1 = i;
            i = j;
            j = temp1;
        }
        for(temp2 = i; temp2 <= j; temp2++){
            cy_len = cycle(temp2);
            if(max_cycle <= cy_len){
                max_cycle = cy_len;
            }
        }
    printf(" %d\n", max_cycle);
    }
    return 0;
}
int cycle(int n){
    int count = 1;
    while(n != 1){
        if(n % 2 == 0)
            n = n / 2;
        else
            n = 3 * n + 1;
        count++;
    }
    return count;
}
