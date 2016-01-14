#include <stdio.h>
int main(){
    int line, count, next, cou_tcase = 0;
    while(scanf("%d", &line) == 1 && line > 0){
        cou_tcase++;
        count = 0;
        next = 1;
        if(line == 1)
            printf("Case %d: 0\n", cou_tcase);
        else{
            while(next < line){
            next = next + next;
            count++;
            }
            printf("Case %d: %d\n", cou_tcase, count);
        }
    }
    return 0;
}
