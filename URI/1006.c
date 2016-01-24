#include <stdio.h>
int main(){
    float a, b, c, result;
    scanf("%f %f %f", &a, &b, &c);
    result = ((a * 2) + (b * 3) + (c * 5)) / 10.0;
    printf("MEDIA = %.1f\n\n", result);
    return 0;
}
