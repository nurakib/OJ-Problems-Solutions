#include <stdio.h>
int main(){
    int i = 0;
    char ch;
    while(scanf("%c", &ch) == 1){
        if(ch == '*')
            break;
        else if(ch == 'H')
            printf("Case %d: Hajj-e-Akbar\n", ++i);
        else if(ch == 'U')
            printf("Case %d: Hajj-e-Asghar\n", ++i);
    }
    return 0;
}
