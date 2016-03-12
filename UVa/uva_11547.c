#include <stdio.h>
#include <math.h>
int main(){
    int i, tcase, num, result;
    scanf("%d", &tcase);
    for(i = 1; i <= tcase; i++){
        scanf("%d", &num);
        result = abs((((num * 315 + 7492 * 5) - 498) / 10) % 10);
        printf("%d\n", result);
    }
    return 0;
}
