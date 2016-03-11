#include <stdio.h>
int main()
{
    int n, test, cou = 0;
    scanf("%d\n", &n);
    while(n != 0){
        scanf("%d", &test);
        if(test < 0){
            cou++;
        }
    n--;
    }
    printf("%d\n", cou);
    return 0;
}
