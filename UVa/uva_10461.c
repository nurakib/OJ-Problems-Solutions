#include <stdio.h>
#include <math.h>
int main(){
    int i, a, b, check, result;
    while(scanf("%d %d", &a, &b)){
        if(a == 0 && b == 0)
            break;
        result = 0;
        for(i = a; i <= b; i++){
            check = sqrt(i);
            if(check * check == i)
                result++;
        }
    printf("%d\n", result);
    }
    return 0;
}
