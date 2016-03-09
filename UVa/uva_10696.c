#include <stdio.h>
int f91(int n);
int main(){
    int num;
    while(scanf("%d", &num) == 1){
        if(num == 0)
            break;
        printf("f91(%d) = %d\n", num, f91(num));
    }
    return 0;
}
int f91(int n){
    if(n >= 101)
        return n - 10;
    else
        return f91(f91(n + 11));
}
