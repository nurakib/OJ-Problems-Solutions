#include <stdio.h>
#include <math.h>
int main(){
    int i, t, val, num[3005];
    while(scanf("%d", &t) == 1){
        int cnt[3004] = {0}, flag = 0;
        for(i = 0; i < t; i++)
            scanf("%d", &num[i]);
        for(i = 0; i < t - 1; i++){
            val = abs(num[i] - num[i + 1]);
            if(val > 0 && val < t)
                cnt[val] = 1;
        }
        for(i = 1; i < t; i++)
            if(cnt[i] == 1)
                flag++;
        if(flag == t - 1)
            printf("Jolly\n");
        else
            printf("Not jolly\n");
    }
    return 0;
}
