#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    char ch[100000];
    scanf("%[^\n]", &ch);
    int len = strlen(ch);
    int upper = 0, lower = 0, sym = 0, white = 0;
    for(i = 0; i <= len; i++){
        if (ch[i] >= 'A' && ch[i] <= 'Z')
            upper++;
        if (ch[i] >= 'a' && ch[i] <= 'z')
            lower++;
        if (ch[i] >= '!' && ch[i] <= '@')
            sym++;
        if (ch[i] >= '[' && ch[i] <= '^')
            sym++;
        if (ch[i] == '`')
            sym++;
        if (ch[i] >= '{' && ch[i] <= '~')
            sym++;
        if (ch[i] == '_')
            white++;
    }
    double wh_sp, up, low, sy;
    double lenf = (double)len;
    wh_sp = (double)white / lenf;
    up = (double)upper / lenf;
    low = (double)lower / lenf;
    sy = (double)sym / lenf;
    printf("%.15lf\n", wh_sp);
    printf("%.15lf\n", low);
    printf("%.15lf\n", up);
    printf("%.15lf\n", sy);
    return 0;
}
