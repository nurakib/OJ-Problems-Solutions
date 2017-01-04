#include <stdio.h>
int main(){
    int i, j, n, t_i, t_v, t_x, t_l, t_c, cnt_i, cnt_v, cnt_x, cnt_l, cnt_c;
    while(scanf("%d", &n) == 1 && n != 0){
        t_i = t_v = t_x = t_l = t_c = 0;
        for(j = 1; j <= n; j++){
            i = j;
            cnt_i = 0, cnt_v = 0, cnt_x = 0, cnt_l = 0, cnt_c = 0;
            while(i >= 100){
                cnt_c++;
                i = i - 100;
            }
            if(i >= 90){
                cnt_c++;
                cnt_x++;
                i = i - 90;
            }
            while(i >= 50){
                cnt_l++;
                i = i - 50;
            }
            if(i == 49){
                cnt_l++;
                cnt_i++;
                i = 0;
            }
            if(i >= 40){
                cnt_l++;
                cnt_x++;
                i = i - 40;
            }
            while(i >= 10){
                cnt_x++;
                i = i - 10;
            }
            if(i == 9){
                cnt_x++;
                cnt_i++;
                i = 0;
            }
            while(i >= 5){
                cnt_v++;
                i = i - 5;
            }
            if(i == 4){
                cnt_v++;
                cnt_i++;
                i = 0;
            }
            while(i >= 1){
                cnt_i++;
                i = i - 1;
            }
            t_i = t_i + cnt_i;
            t_v = t_v + cnt_v;
            t_x = t_x + cnt_x;
            t_l = t_l + cnt_l;
            t_c = t_c + cnt_c;
        }
        if(n >= 49)
            printf("%d: %d i, %d v, %d x, %d l, %d c\n", n, t_i, t_v, t_x + 2, t_l, t_c);
        else
            printf("%d: %d i, %d v, %d x, %d l, %d c\n", n, t_i, t_v, t_x, t_l, t_c);
    }
    return 0;
}
