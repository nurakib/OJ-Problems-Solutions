#include <stdio.h>
int main(){
    int i, cnt;
    char line[1000];
    while(gets(line)){
        cnt = 0;
        for(i = 0; line[i] != '\0'; i++){
            if
            (
               ((line[i] >= 'A' && line[i] <= 'Z') || (line[i] >= 'a' && line[i] <= 'z'))
               &&
               ((line[i + 1] < 'A' || line[i + 1] > 'Z') && (line[i + 1] < 'a' || line[i + 1] > 'z'))
            )
                cnt++;
        }
        printf("%d\n", cnt);
    }
    return 0;
}
