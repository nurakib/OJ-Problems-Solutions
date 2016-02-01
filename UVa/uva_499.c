#include <stdio.h>
#include <string.h>
int main(){
    char line[1000];
    int i, j, len;
    while(scanf("%[^\n]", line) == 1){
        getchar();
        len = strlen(line);
        int frq[255] = {0}, max;
        for(i = 0; i < len; i++)
            frq[line[i] - 'A']++;
        max = frq[0];
        for(i = 65, j = 0; i <= 122; i++, j++){
            if(i >= 91 && i <= 96)
                continue;
            if(max < frq[j])
                max = frq[j];
        }
        for(i = 65, j = 0; i <= 122; i++, j++){
            if(i >= 91 && i <= 96)
                continue;
            if(frq[j] == max)
                printf("%c", i);
        }
        printf(" %d\n", max);
    }
    return 0;
}

