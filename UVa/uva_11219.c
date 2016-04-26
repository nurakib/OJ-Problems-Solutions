#include <stdio.h>
int main(){
    int i, t, d1, d2, m1, m2, y1, y2, result;
    scanf("%d", &t);
    for(i = 1; i <= t; i++){
        scanf("%d/%d/%d", &d1, &m1, &y1);
        scanf("%d/%d/%d", &d2, &m2, &y2);
        result = y1 - y2;
        if(m2 > m1 || (m2 == m1 && d2 > d1))
            result--;
        if(result < 0)
            printf("Case #%d: Invalid birth date\n", i);
        else if(result > 130)
            printf("Case #%d: Check birth date\n", i);
        else
            printf("Case #%d: %d\n", i, result);
        }
    return 0;
}
