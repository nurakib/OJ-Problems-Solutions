#include <stdio.h>
#define PI 2 * acos(0.0)
int main(){
    double t, len, res1, res2;
    scanf("%lf", &t);
    while(t--){
        scanf("%lf", &len);
        res1 = PI * (len * .2) * (len * .2);
        res2 = (len * len * .6) - res1;
        printf("%.2lf %.2lf\n", res1, res2);
    }
    return 0;
}
