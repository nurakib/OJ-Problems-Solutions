#include <stdio.h>
int main(){
    int tcase, n, temp, res, cnt_b, cnt_h;
    scanf("%d", &tcase);
    while(tcase--){
        cnt_b = cnt_h = 0;
        scanf("%d", &n);
        temp = n;
        while(n != 0){
            res = n % 2;
            if(res == 1)
                cnt_b++;
            n = n / 2;
        }
        while(temp != 0){
            res = temp % 10;
            if(res == 1 || res == 2 || res == 4 || res == 8)
                cnt_h = cnt_h + 1;
            else if(res == 3 || res == 5 || res == 6 || res == 9)
                cnt_h = cnt_h + 2;
            else if(res == 7)
                cnt_h = cnt_h + 3;
            temp = temp / 10;
        }
        printf("%d %d\n", cnt_b, cnt_h);
    }
    return 0;
}
