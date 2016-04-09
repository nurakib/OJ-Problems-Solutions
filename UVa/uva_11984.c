#include <stdio.h>
int main(){
    int i, tcase;
    double cel, far, result;
    while(scanf("%d", &tcase) == 1){
        for(i = 1; i <= tcase; i++){
            scanf("%lf %lf", &cel, &far);
            result = cel + far * 5.0 / 9.0;
            printf("Case %d: %.2lf\n", i, result);
        }
    }
    return 0;
}
