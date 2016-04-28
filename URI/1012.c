#include <stdio.h>
#define pi 3.14159
int main(){
    double a, b, c, tri, cir, tpz, squ, rct;
    while(scanf("%lf %lf %lf", &a, &b, &c) == 3 ){
        tri = .5 * a * c;
        cir = pi * c * c;
        tpz = .5 * (a + b) * c;
        squ = b * b;
        rct = a * b;
        printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", tri, cir, tpz, squ, rct);
    }
    return 0;
}
