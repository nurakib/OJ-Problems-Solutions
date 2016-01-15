#include <stdio.h>
#include <math.h>
#define PI 2 * acos(0.0)
int main ()
{
    int tcase, i;
    double radious, area1, area2, result;
    scanf("%d", &tcase);
    for (i = 1; i <= tcase; i++)
    {
        scanf("%lf", &radious);
        area1 = PI * radious * radious;
        area2 = 4 * radious * radious;
        result = area2 - area1;
        printf("Case %d: %.2f\n", i, result);
    }
    return 0;
}
