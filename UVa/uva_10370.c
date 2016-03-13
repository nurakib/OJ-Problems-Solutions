#include <stdio.h>
int main(){
    int i, tcase, stu, sum, cnt;
    double avr, par;
    scanf("%d", &tcase);
    while(tcase--){
        scanf("%d", &stu);
        int mark[stu];
        sum = cnt = 0;
        for(i = 0; i < stu; i++){
            scanf("%d", &mark[i]);
            sum = sum + mark[i];
        }
        avr = (double) sum / stu;
        for(i = 0; i < stu; i++){
            if(avr < mark[i])
                cnt++;
        }
        par = (double) cnt * 100 / stu;
        printf("%.3lf%%\n", par);
    }
    return 0;
}
