#include <stdio.h>
#include <math.h>
int main(){
    float hour, minute, result;
    while(scanf("%f:%f", &hour, &minute) == 2){
        if(hour == 0 && minute == 0)
            break;
        result = fabs(hour * 30 + (minute / 2) - minute * 6);
        if(result > 180)
            result = 360 - result;
        printf("%.3f\n", result);
    }
    return 0;
}
