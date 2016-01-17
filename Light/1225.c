#include <stdio.h>
int main(){
    int i, tcase;
    long int num, check, rem, p_num;
    scanf("%d", &tcase);
    for(i = 1; i <= tcase; i++){
        p_num = 0;
        scanf("%ld", &num);
        check = num;
        while(num != 0){
            rem = num % 10;
            num = num / 10;
            p_num = p_num * 10 + rem;
        }
        if(check == p_num)
            printf("Case %d: Yes\n", i);
        else
            printf("Case %d: No\n", i);
    }
    return 0;
}
