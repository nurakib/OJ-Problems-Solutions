#include <stdio.h>
int main(){
    int num, i, print = 0;
    scanf("%d", &num);
    for(i = 0; i < 1000; i++){
        if(num > print){
            printf("N[%d] = %d\n", i, print);
            print++;
            if(print == num)
                print = 0;
        }
    }
    return 0;
}
