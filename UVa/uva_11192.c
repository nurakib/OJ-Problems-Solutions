#include <stdio.h>
#include <string.h>
int main(){
    int n, m, i, j, len, temp, check;
    char line[1000];
    while(scanf("%d", &n) == 1 && n != 0){
        getchar();
        gets(line);
        len = strlen(line);
        m = len / n;
        temp = 0;
        while(temp != len){
            temp = temp + m;
            check = temp - m;
            for(j = temp - 1; j >= check; j--)
                printf("%c", line[j]);
        }
        printf("\n");
    }
    return 0;
}
