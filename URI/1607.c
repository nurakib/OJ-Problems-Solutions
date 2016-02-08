#include <stdio.h>
#include <string.h>
int main(){
    char line1[100000], line2[100000];
    int tcase, sum, count, len, i;
    scanf("%d", &tcase);
    while(tcase--){
        scanf("%s %s", &line1, &line2);
        len = strlen(line1);
        sum = 0;
        count = 0;
        for(i = 0; i < len; i++){
            if(line2[i] >= line1[i])
                count = line2[i] - line1[i];
            else
                count = line2[i] - line1[i] + 26;
            sum = sum + count;
        }
        printf("%d\n", sum);
    }
    return 0;
}
