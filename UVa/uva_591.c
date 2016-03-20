#include <stdio.h>
int main(){
    int i, num, sum, avg, cnt, caseno = 0;
    while(scanf("%d", &num) == 1 && num > 0){
        int brick[num];
        sum = avg = cnt = 0;
        for(i = 0; i < num; i++){
            scanf("%d", &brick[i]);
            sum = sum + brick[i];
        }
        avg = sum / num;
        for(i = 0; i < num; i++){
            if(brick[i] > avg)
                cnt = cnt + (brick[i] - avg);
        }
        caseno++;
        printf("Set #%d\nThe minimum number of moves is %d.\n\n", caseno, cnt);
    }
    return 0;
}
