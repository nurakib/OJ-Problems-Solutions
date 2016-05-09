#include <stdio.h>
int main(){
    int a, b, term, temp, line;
    while(scanf("%d", &term) == 1){
        temp = term;
        line = 1;
        while(term > line){
            term = term - line;
            line++;
        }
        a = term;
        b = line - term + 1;
        if(line % 2 == 0)
            printf("TERM %d IS %d/%d\n", temp, a, b);
        else
            printf("TERM %d IS %d/%d\n", temp, b, a);
    }
    return 0;
}
