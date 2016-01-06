#include <stdio.h>
int main(){
    int age, year, ryear, month, rmonth, day;
    scanf("%d", &age);
    year = age / 365;
    ryear = age % 365;
    month = ryear / 30;
    rmonth = ryear % 30;
    day = rmonth;
    printf("%d ano(s)\n", year);
    printf("%d mes(es)\n", month);
    printf("%d dia(s)\n", day);
    return 0;
}
