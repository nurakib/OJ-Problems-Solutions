#include <stdio.h>
#include <string.h>
int main(){
    char l[20];
    int i, len, value, temp;
    while(scanf("%[^\n]", l) == 1){
        getchar();
        len = strlen(l);
        temp = 0;
        for(i = 0; i < len; i++){
            if(l[i] == 'B' || l[i] == 'F' || l[i] == 'P' || l[i] == 'V')
                value = 1;
            else if(l[i] == 'C' || l[i] == 'G' || l[i] == 'J' || l[i] == 'K' || l[i] == 'Q' || l[i] == 'S' || l[i] == 'X' || l[i] == 'Z')
                value = 2;
            else if(l[i] == 'D' || l[i] == 'T')
                value = 3;
            else if(l[i] == 'L')
                value = 4;
            else if(l[i] == 'M' || l[i] == 'N')
                value = 5;
            else if(l[i] == 'R')
                value = 6;
            else if(l[i] == 'A' || l[i] == 'E' || l[i] == 'I' || l[i] == 'O' || l[i] == 'U' || l[i] == 'H' || l[i] == 'W' || l[i] == 'Y')
                value = 0;
            if(value != temp && value != 0)
                printf("%d", value);
            temp = value;
        }
        printf("\n");
    }
    return 0;
}
