#include <stdio.h>
int main(){
    int i, j, t, max, val[10];
    char name[10][100];
    scanf("%d", &t);
    for(i = 1; i <= t; i++){
        max = 0;
        for(j = 0; j < 10; j++){
            scanf("%s %d", &name[j], &val[j]);
            if(val[j] >= max)
                max = val[j];
        }
        printf("Case #%d:\n", i);
        for(j = 0; j < 10; j++){
            if(val[j] == max)
                printf("%s\n", name[j]);
        }
    }
    return 0;
}
